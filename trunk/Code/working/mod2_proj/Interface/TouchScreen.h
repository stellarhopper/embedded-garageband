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

#ifndef TOUCHSCREEN_H
#define TOUCHSCREEN_H

#include "hal_defs.h"
#include "hal_types.h"

// Pin Definitions
// Port 1
#define XN         0x02
#define XP         0x04
#define YN         0x08
#define YP         0x10

#define XN_C         2
#define XP_C         3
#define YN_C         4
#define YP_C         5


// ADC Channels
#define CHAN_XN    ADC_AIN2
#define CHAN_XP    ADC_AIN3
#define CHAN_YN    ADC_AIN4
#define CHAN_YP    ADC_AIN5

// ADC Averaging Values
#define NUMSAMPLES  6
#define SAMPLESHIFT 2

// Global Variables
char touched;                               // Flag for touch status
unsigned int samples[NUMSAMPLES];           // ADC sample results
unsigned int x,y;                     // X,Y touch position variables


// System Routines
void TouchScreen(void); 
void Initialize_TouchScreen(void);          // Configure modules & control Registers
void waitForTouch(void);                    // Waits for a touch on the screen
unsigned int getSamples(unsigned int);      // Get samples from ADC

void readXY();           // Read X,Y coordinates
void setXDrive(void);                       // Drive X wires
void setYDrive(void);                       // Drive Y wires
void clearDrives(void);                     // Stop driving X and Y
void setTouchDrives(void);                  // Drive touch test wires
void sendData(unsigned int xCoord, unsigned int yCoord); // Send touch coordinates to host
void sendByte(char);                        // Transmits byte using Timer_A

#endif
