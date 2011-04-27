/***********************************************************************************
  Filename: light_switch.c

  Description:  This application function either as a light or a
  switch toggling the ligh. The role of the
  application is chosen in the menu with the joystick at initialisation.

  Push S1 to enter the menu. Choose either switch or
  light and confirm choice with S1.
  Joystick Up: Sends data from switch to light

***********************************************************************************/

/***********************************************************************************
* INCLUDES
*/
#include <hal_led.h>
#include <hal_assert.h>
#include <hal_board.h>
#include <hal_int.h>
#include "hal_mcu.h"
#include "hal_button.h"
#include "hal_rf.h"
#include "basic_rf.h"
#include "hal_timer_32k.h"
#include "uart_intfc.h"
#include "TouchScreen.h"
#include <mmc.h>
#include <stdio.h>
#include "hal_spi.h"
#include "midi.h"
#include "graphics_lcd.h"

#define isBetween(A, B, C) ( ((A-B) > -0) && ((A-C) < 0) )

unsigned long cardSize = 0;
unsigned char status = 1;
unsigned int timeout = 0;
int i = 0;
unsigned char buffer[512];
char tx_buf[50];

//#include "../Project.h"


/***********************************************************************************
* CONSTANTS
*/
// Application parameters
#define RF_CHANNEL                25      // 2.4 GHz RF channel

// BasicRF address definitions
#define PAN_ID                0x2007
#define SWITCH_ADDR           0x2520
#define LIGHT_ADDR            0xBEEF
#define APP_PAYLOAD_LENGTH        1
#define LIGHT_TOGGLE_CMD          0

// Application states
#define IDLE                      0
#define SEND_CMD                  1

// Application role
#define NONE                      0
#define SWITCH                    1
#define LIGHT                     2
#define APP_MODES                 2

/***********************************************************************************
* LOCAL VARIABLES
*/
static uint8 pTxData[APP_PAYLOAD_LENGTH];
static uint8 pRxData[APP_PAYLOAD_LENGTH];
static basicRfCfg_t basicRfConfig;

volatile uint8 Timer_Expired = 0;


/***********************************************************************************
* LOCAL FUNCTIONS
*/
static void appLight();
static void appSwitch();
static void appConfigTimer(uint16 rate);
static void appTimerISR(void);
void MMC_Test();
void midiTest(void);
void lcdTest(void);



/***********************************************************************************
* @fn          appTimerISR
*
* @brief       32KHz timer interrupt service routine. Signals PER test transmitter
*              application to transmit a packet by setting application state.
*
* @param       none
*
* @return      none
*/
static void appTimerISR(void)
{
    Timer_Expired = 1;
}



/***********************************************************************************
* @fn          appConfigTimer
*
* @brief       Configure timer interrupts for application. Uses 32KHz timer
*
* @param       uint16 rate - Frequency of timer interrupt. This value must be
*              between 1 and 32768 Hz
*
* @return      none
*/
static void appConfigTimer(uint16 rate)
{
    halTimer32kInit(TIMER_32K_CLK_FREQ/rate);
    halTimer32kIntConnect(&appTimerISR);
}


/***********************************************************************************
* @fn          appLight
*
* @brief       Application code for light application. Puts MCU in endless
*              loop waiting for user input from joystick.
*
* @param       basicRfConfig - file scope variable. Basic RF configuration data
*              pRxData - file scope variable. Pointer to buffer for RX data
*
* @return      none
*/
static void appLight()
{
    // Initialize BasicRF
    basicRfConfig.myAddr = LIGHT_ADDR;
    if(basicRfInit(&basicRfConfig)==FAILED) {
      HAL_ASSERT(FALSE);
    }
    basicRfReceiveOn();

    // Main loop
    while (TRUE) {
        while(!basicRfPacketIsReady());

        if(basicRfReceive(pRxData, APP_PAYLOAD_LENGTH, NULL)>0) {
            if(pRxData[0] == LIGHT_TOGGLE_CMD) {
                halLedToggle(1);
            }
        }
    }
}


/***********************************************************************************
* @fn          appSwitch
*
* @brief       Application code for switch application. Puts MCU in
*              endless loop to wait for commands from from switch
*
* @param       basicRfConfig - file scope variable. Basic RF configuration data
*              pTxData - file scope variable. Pointer to buffer for TX
*              payload
*              appState - file scope variable. Holds application state
*
* @return      none
*/
static void appSwitch()
{

    pTxData[0] = LIGHT_TOGGLE_CMD;

    // Initialize BasicRF
    basicRfConfig.myAddr = SWITCH_ADDR;
    if(basicRfInit(&basicRfConfig)==FAILED) {
      HAL_ASSERT(FALSE);
    }

    // Set TX output power
    halRfSetTxPower(1);

    // Keep Receiver off when not needed to save power
    basicRfReceiveOff();


    // Config timer and IO
    appConfigTimer(8);
    halIntOn();
    Timer_Expired = 0;

    halTimer32kIntEnable();

    // Main loop
    while (TRUE) {
        if( Timer_Expired == 1 ) {

            basicRfSendPacket(LIGHT_ADDR, pTxData, APP_PAYLOAD_LENGTH);
            Timer_Expired = 0;

            // Put MCU to sleep. It will wake up on joystick interrupt
            halIntOff();
            halMcuSetLowPowerMode(HAL_MCU_LPM_3); // Will turn on global
            // interrupt enable
            halIntOn();

        }
    }
}


/***********************************************************************************
* @fn          main
*
* @brief       This is the main entry of the "Light Switch" application.
*              After the application modes are chosen the switch can
*              send toggle commands to a light device.
*
* @param       basicRfConfig - file scope variable. Basic RF configuration
*              data
*              appState - file scope variable. Holds application state
*
* @return      none
*/
void main(void)
{	
    uint8 appMode = NONE;

    // Initalise board peripherals
    halBoardInit();
    //uart_init();
    uart_intfc_init();
    //tx1_send("in", 2);
	
    //MMC_Test();
	//midiTest();
	lcdTest();
	TouchScreen();
}


void lcdTest() {

  	halMcuWaitMs(5000);
  	clear_screen_lcd();		//Clears LCD screen
    draw_piano();			//Draws a Piano
    halMcuWaitMs(5000);				//Give some time for it to draw.
    //clear_screen_lcd();		//Clear LCD screen
    //draw_drums();			//Draw Drums now
	//halMcuWaitMs(5000);

    //while(1);
}


void midiTest() {

  	int i = 0;
	
	//tx0_send("Hello World\n\r", 13);
	
  	midiReset();
	
	//tx1_send("3", 1);
	
	midiVolSet(120); //set channel volume to near max (127)
	midiBankSet(MELODY); //0x79 = melodious instruments
	//talkMIDI(0xD0, instrument, 0); //Set instrument number. 0xC0 is a 1 data byte command
	midiPatchSet(118);
	
	noteOn(10, 51, 0x3D);
	halMcuWaitMs(500);
//	noteOn(10, 41, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 48, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 36, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 40, 0x3D);
//	halMcuWaitMs(2000);
//	
//	noteOn(10, 35, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 38, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 42, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 44, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 49, 0x3D);
//	halMcuWaitMs(2000);
//	
//	noteOn(10, 50, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 50, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 50, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 50, 0x3D);
//	halMcuWaitMs(500);
//	noteOn(10, 50, 0x3D);
//	halMcuWaitMs(2000);
	
	
//	for (i=0; i<50; i++) {
//		noteOn(0, i+30, 0x48);
//		halMcuWaitMs(100);
//		//noteOff(0, i+30, 0x48);
//		halMcuWaitMs(100);
//
//	}
//	for (i=50; i>=0; i--) {
//		noteOn(0, i+30, 0x48);
//		halMcuWaitMs(100);
//		//noteOff(0, i+30, 0x48);
//		halMcuWaitMs(100);
//	}
	
	//tx1_send("Done\n\r", 6);
	while (1);
}





void MMC_Test()
{
  //while ((mmcPing() != MMC_SUCCESS));      // Wait till card is inserted

    tx0_send("\n\rCard Inserted\n\r",sizeof("\n\rCard Inserted\n\r"));

    //Initialisation of the MMC/SD-card
  while (status != 0)                       // if return in not NULL an error did occur and the
                                            // MMC/SD-card will be initialized again
  {
    status = mmcInit();
    timeout++;
    if (timeout == 150)                      // Try 50 times till error
    {
      sprintf (tx_buf, "No MMC/SD-card found!! %x\n", status);
      tx0_send(tx_buf,strlen(tx_buf));
      break;
    }
  }

  tx0_send("Intit Success\n\r",sizeof("Intit Success\n\r"));


  // Read the Card Size from the CSD Register
  cardSize =  mmcReadCardSize();

  sprintf(tx_buf, "Card Size: %d\n\r",cardSize);
  tx0_send(tx_buf,strlen(tx_buf));

// Clear Sectors on MMC
  for (i = 0; i < 512; i++) buffer[i] = 0;
  mmcWriteSector(0, buffer);                // write a 512 Byte big block beginning at the (aligned) adress

  for (i = 0; i < 512; i++) buffer[i] = 0;
  mmcWriteSector(1, buffer);                // write a 512 Byte big block beginning at the (aligned) adress


// Write Data to MMC
  for (i = 0; i < 512; i++) buffer[i] = i;
  mmcWriteSector(0, buffer);                // write a 512 Byte big block beginning at the (aligned) adress

  for (i = 0; i < 512; i++) buffer[i] = i+64;
  mmcWriteSector(1, buffer);                // write a 512 Byte big block beginning at the (aligned) adress

  sprintf(tx_buf, "Buffer Write Complete\n\r");
  tx0_send(tx_buf,strlen(tx_buf));

  for (i = 0; i < 512; i++) buffer[i] = 0;

  mmcReadSector(0, buffer);                 // read a size Byte big block beginning at the address.

  sprintf(tx_buf, "Buffer Read Sector 0:\n\r");
  tx0_send(tx_buf,strlen(tx_buf));

  for (i = 0; i < 512; i++) tx0_send(&buffer[i], 1);

  mmcReadSector(1, buffer);                 // read a size Byte big block beginning at the address.

  sprintf(tx_buf, "Buffer Read Sector 1:\n\r");
  tx0_send(tx_buf,strlen(tx_buf));

  for (i = 0; i < 512; i++) tx0_send(&buffer[i], 1);

  for (i = 0; i < 512; i++)
    mmcReadSector(i, buffer);               // read a size Byte big block beginning at the address.

  mmcGoIdle();                              // set MMC in Idle mode

  while (1);
}


/****************************************************************************************
  Copyright 2007 Texas Instruments Incorporated. All rights reserved.

  IMPORTANT: Your use of this Software is limited to those specific rights
  granted under the terms of a software license agreement between the user
  who downloaded the software, his/her employer (which must be your employer)
  and Texas Instruments Incorporated (the "License").  You may not use this
  Software unless you agree to abide by the terms of the License. The License
  limits your use, and you acknowledge, that the Software may not be modified,
  copied or distributed unless embedded on a Texas Instruments microcontroller
  or used solely and exclusively in conjunction with a Texas Instruments radio
  frequency transceiver, which is integrated into your product.  Other than for
  the foregoing purpose, you may not use, reproduce, copy, prepare derivative
  works of, modify, distribute, perform, display or sell this Software and/or
  its documentation for any purpose.

  YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION ARE
  PROVIDED “AS IS” WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED,
  INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE,
  NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL
  TEXAS INSTRUMENTS OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT,
  NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER
  LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
  INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE
  OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT
  OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
  (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

  Should you have any questions regarding your right to use this Software,
  contact Texas Instruments Incorporated at www.TI.com.
***********************************************************************************/
