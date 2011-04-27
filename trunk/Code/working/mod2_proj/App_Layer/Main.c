
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
#include "uart_intfc.h"
#include "TouchScreen.h"
#include <mmc.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hal_spi.h"
#include "TimerManager.h"
#include "Drum.h"
#include "midi.h"
#include "graphics_lcd.h"
#include "key_map.h"
#include "App_RF.h"

unsigned long cardSize = 0;
unsigned char status = 1;
unsigned int timeout = 0;
int i = 0;
unsigned char buffer[512];
char tx_buf[50];

unsigned char Check_Flag = 1;
unsigned int tmp_val = 0;

   //--------------------------------------------------------------------------
   //  Timers:
   //--------------------------------------------------------------------------
   TimerId timerID1 = TimerId_INVALID;
   TimerId timerID2 = TimerId_INVALID;


/***********************************************************************************
* CONSTANTS
*/


/***********************************************************************************
* LOCAL VARIABLES
*/


/***********************************************************************************
* LOCAL FUNCTIONS
*/
void MMC_Test();
void App_ISR1(TimerId timerId);
void App_ISR2(TimerId timerId);
void midiTest(void);
void lcdTest(void);



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
  	char keyNote = 0;
	int rfLen = 0;
	
    // Initalise bo ard peripherals
    halBoardInit();
    uart_intfc_init();
	Init_AppRF(RF_RX);
    tx1_send("Hello World\n\r", 13);

    TimerInterface_Initialize();
    //DrumSet();
	//MMC_Test();
	//midiTest();
	//lcdTest();
	//TouchScreen();
	
	midiReset();
	midiVolSet(120);
	//midiBankSet(DRUMS1);
	//midiPatchSet(5);
	midiBankSet(MELODY);
	midiPatchSet(PIANO_ELG);
	halMcuWaitMs(100);
	
	//1-40; 2-36; 3-48; 4-41; 5-51; drum notes
	
	noteOn(0, 40, 0x7f);
	halMcuWaitMs(500);

	//DrumSet();
	
	while (1) {
		while (!RF_Peek());
		rfLen = RF_Receive(&keyNote);	
		noteOn(0, keyNote, 0x3D);
		tx1_send(&keyNote, 1);
	}
	
	
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
	
//  midiReset();
//	midiVolSet(120); //set channel volume to near max (127)
//	midiBankSet(MELODY); //0x79 = melodious instruments
//	midiPatchSet(118);
//	noteOn(0, 51, 0x3D);
//	halMcuWaitMs(500);
	
	
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


void App_ISR1(TimerId timerId)
{
  //halLedToggle(1);
  timerID1 = TimerId_INVALID;
  timerID1 = SetTimerReq(&App_ISR1,2);
  Check_Flag = 1;
}


void App_ISR2(TimerId timerId)
{
  //halLedToggle(3);
  timerID2 = TimerId_INVALID;
  timerID2 = SetTimerReq(&App_ISR2,1200);
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
