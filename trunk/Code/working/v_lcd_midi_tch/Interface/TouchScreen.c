//******************************************************************************
//   MSP430 8 and 4-wire resistive touchscreen application note code
//
// Copyright (c) 2005-2010 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
//
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
//
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
//
//   W. Goh
//   Texas Instruments Inc.
//   November 2010
//   Built with CCS Version: 4.2.1 and IAR Embedded Workbench Version: 5.10.4
//******************************************************************************

#include <ioCC2430.h>
#include "TouchScreen.h"
#include "adc.h"
#include "uart_intfc.h"
#include "hal_led.h"
#include "hal_cc8051.h"
#include "hal_mcu.h"

#include <stdio.h>
#include <string.h>



  char str_buf[20];

// Main Function
void TouchScreen(void)
{
  Initialize_TouchScreen();                             // Initialize device
                                     // Infinite loop
    waitForTouch();                         // Wait for touch on screen
    touched = 1;                            // Screen is touched
    while(1)
    {                                       // Loop while screen is touched
      readXY();                            // Get X,Y coordinates index 0

      // Take 2 values and see the difference between them.
      // If value is greater than 5 steps, discard packet.
      // This code is designed to take a majority vote of 2 packets.
      if(x > 1100 && x < 4600 && y > 700 && y < 5300)
          sendData(x,y);                // Send data to host
    }
}


// Initializing Device
void Initialize_TouchScreen(void)
{
  clearDrives();                        // Clear outputs
  PICTL |= 1;                             // Y+drive high to low transition int
}


// Wait for Touch on Screen
void waitForTouch(void)
{
  setTouchDrives();
  if((P0 & YP)) {                       // Y+ high?
    P0IFG = 0;                             // Clear interrupt flags
    PICTL |= 1;
    while(P0IFG == 0);  //__bis_SR_register(LPM4_bits + GIE);     // Wait for interrupt
  }
  halLedToggle(1);
  clearDrives();                            // Clear drive wires
}


// Get ADC Samples of Specified Channel and Average
unsigned int getSamples(unsigned int chan)
{
  unsigned char loop;
  unsigned int avg = 0;                     // Clear average variable
  for (loop=0;loop<NUMSAMPLES;loop++) {     // Loop
    avg = avg + adcSampleSingle(ADC_REF_AVDD,ADC_12_BIT,chan);              // Accumulate samples
  }
  avg = avg >> SAMPLESHIFT;                 // Calculate average
  return avg;                               // Return average
}


// Read X and Y Coordinates of Touch
void readXY()
{
  // Find X Coordinate
  setXDrive();                              // Set X wires to drives
  x = getSamples(CHAN_YP);          // Sample Y+ to get X coordinate

  // Find Y Coordinate
  setYDrive();                              // Set Y wires to drives
  y = getSamples(CHAN_XP);          // Sample X+ to get Y coordinate

  // Setup pins to check if screen is still touched
  setTouchDrives();                         // See if screen still touched

  clearDrives();                            // Clear drive wires
}


// Drive X+drive High and X-drive Low, Configure ADC Pins
void setXDrive(void)
{
  clearDrives();
  MCU_IO_OUTPUT(0, XP_C, 1);
  MCU_IO_OUTPUT(0, XN_C, 0);
  halMcuWaitMs(1);                                 // Delay to allow settling
}


// Drive Y+drive High and Y-drive Low, Configure ADC Pins
void setYDrive(void)
{
  clearDrives();
  MCU_IO_OUTPUT(0,YP_C,1);
  MCU_IO_OUTPUT(0,YN_C,0);
  halMcuWaitMs(1);                                 // Delay to allow settling
}


// Stop Driving X and Y, Configure ADC Pins
void clearDrives(void)
{
    MCU_IO_INPUT(0,XN_C,MCU_IO_TRISTATE);
    MCU_IO_INPUT(0,YN_C,MCU_IO_TRISTATE);
    MCU_IO_INPUT(0,XP_C,MCU_IO_TRISTATE);
    MCU_IO_INPUT(0,YP_C,MCU_IO_TRISTATE);
}


// Set Y+drive to input with pull-up, X-drive to output low
void setTouchDrives(void)
{
  clearDrives();
  MCU_IO_OUTPUT(0,YP_C,1);
  MCU_IO_INPUT(0,YP_C,MCU_IO_PULLUP);
  MCU_IO_OUTPUT(0,XN_C,0);
  halMcuWaitMs(1);                                 // Wait for pin to settle
}


// Send X and Y Coordinates to Host
void sendData(unsigned int xCoord, unsigned int yCoord) {
  //static   char byte[5];

//    xCoord -= 1100;
//    yCoord -= 700;

    if((signed int)xCoord < 0)  xCoord = 0;
    if((signed int)yCoord < 0)  yCoord = 0;


    sprintf(str_buf, "X: %d, Y:%d\n\r",xCoord, yCoord);
    tx1_send(str_buf,strlen(str_buf));

  /* Send data in this format
          Byte 1                    Byte 2                    Byte 3
  0  Y9 Y8 Y7 0  X9 X8 X7   0  X6 X5 X4 X3 X2 X1 X0   0  Y6 Y5 Y4 Y3 Y2 Y1 Y0
  */



//  byte[0] = 0xFF;
//
//  byte[1] = (yCoord>>7)&0x07;                  // Send 3 MSBs of X coordinate
//  byte[1] |= ((xCoord>>7)&0x07)<<4;            // Append 3 MSBs of Y coordinate
//  //tx_send_wait(&byte,1);                           // Send MSBs
//  byte[2] = yCoord&0x7F;                       // Send 7 LSBs of X coordinate
//  //tx_send_wait(&byte,1);
//  byte[3] = xCoord&0x7F;                       // Send 7 LSBs of Y coordinate
//  tx_send(byte,4);

}