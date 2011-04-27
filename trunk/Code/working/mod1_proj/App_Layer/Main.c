
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
#include "kb.h"
#include "utilMisc.h"
#include "piano.h"


#define SZ_RFBUF 50

#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)

enum rfStat {
	rfHello = 1,
	rfVPiano,
	rfVDrum,
	rfVGuitar
};

unsigned char rfBuf[SZ_RFBUF] = {0};
unsigned char Check_Flag = 1;

TimerId timerID1 = TimerId_INVALID;
TimerId timerID2 = TimerId_INVALID;

void App_ISR1(TimerId timerId);
void App_ISR2(TimerId timerId);
void midiTest(void);
void lcdTest(void);


void main(void)
{
	//rf flags-----
	unsigned char rfStatus = 0;
	
	// Initalise board peripherals
  halBoardInit();
  uart_intfc_init();
  TimerInterface_Initialize();
	Init_AppRF();
	halMcuWaitMs(2000);

  printf_pc("Init done (M1)\n\r");

  while (1) {
		
		bzero(rfBuf, SZ_RFBUF);
		RF_gets_blk(rfBuf);
		
		if (NULL != strstr((const char*)rfBuf, "HELLO")) rfStatus = rfHello;
		if (NULL != strstr((const char*)rfBuf, "VPIANO")) rfStatus = rfVPiano;
		if (NULL != strstr((const char*)rfBuf, "VDRUM")) rfStatus = rfVDrum;
		if (NULL != strstr((const char*)rfBuf, "VGUITAR")) rfStatus = rfVGuitar;
		
		switch (rfStatus) {
			
			case rfHello:
				printf_pc("In rfHello\n\r");
				halMcuWaitMs(100);
				RF_puts("ACK");
				break;
				
			case rfVPiano:
				printf_pc("In rfVPiano\n\r");
				clear_screen_lcd();						//Clears LCD screen
    		draw_piano();									//Draws a Piano
				RF_puts("ACK");
				playVPiano();
				break;
				
			case rfVDrum:
				printf_pc("In rfVDrum\n\r");
				clear_screen_lcd();						//Clear LCD screen
				draw_drums();									//Draws Drums
				RF_puts("ACK");
				playVDrum();
				break;
				
			case rfVGuitar:
				printf_pc("In rfVGuitar\n\r");
				clear_screen_lcd();						//Clear LCD screen
				draw_guitar();								//Draws Guitar Strings
				RF_puts("ACK");
				playVGuitar();
				break;
				
			default:
				printf_pc("In default\n\r");
				RF_puts("NACK");
				
		} //end switch
  }// end while(1)
}

void lcdTest() {

  	halMcuWaitMs(3000);
  	clear_screen_lcd();		//Clears LCD screen
    draw_piano();			//Draws a Piano
//    halMcuWaitMs(1000);				//Give some time for it to draw.
//    clear_screen_lcd();		//Clear LCD screen
//    draw_drums();			//Draw Drums now
//	halMcuWaitMs(1000);

    //while(1);
}

void midiTest() {
	
	//tx0_send("Hello World\n\r", 13);
	
  	midiReset();
	
	//tx1_send("3", 1);
	
	midiVolSet(120); //set channel volume to near max (127)
	midiBankSet(MELODY); //0x79 = melodious instruments
	//talkMIDI(0xD0, instrument, 0); //Set instrument number. 0xC0 is a 1 data byte command
	midiPatchSet(118);
	
	noteOn(0, 51, 0x3D);
	halMcuWaitMs(500);
	
	
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
  halLedToggle(1);
  timerID1 = TimerId_INVALID;
  timerID1 = SetTimerReq(&App_ISR1,2);
  Check_Flag = 1;
}


void App_ISR2(TimerId timerId)
{
  halLedToggle(3);
  timerID2 = TimerId_INVALID;
  timerID2 = SetTimerReq(&App_ISR2,1200);
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
