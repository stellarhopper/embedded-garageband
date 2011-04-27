#include <hal_led.h>
#include <hal_assert.h>
#include <hal_board.h>
#include <hal_int.h>
#include "hal_mcu.h"
#include "ioCC2430.h"
#include "uart_intfc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "piano.h"
#include "key_map.h"
#include "App_RF.h"
#include "TouchScreen.h"

void playVPiano() {
	
	unsigned char usrExit = 0;
	char keyNote = 0;
	unsigned int xCoord = 0;
	unsigned int yCoord = 0;
	unsigned char sendBuf[3] = {0};
	
	while(1) {
		//usrExit = getchar() nblocking in M2
		//In this module do a non blocking recv and chk for STOPMAGIC
		if (usrExit == 27) {
			break;
		}
		else {
			getTsXY(&xCoord, &yCoord);
			keyNote = piano_key_match(xCoord, yCoord);
			halMcuWaitMs(50);
			if (keyNote) {
				//send the note over rf and serial
				sendBuf[0] = 0;					//Channel
				sendBuf[1] = keyNote;		//Note
				sendBuf[2] = 0x7f; 			//Attack Velocity //TODO: use pressure
				halMcuWaitMs(50);
				RF_Send(sendBuf, 3);
			}
		}
	}//while(1)
}

void playRPiano() {
	
}

void playVGuitar() {
	
	unsigned char usrExit = 0;
	char keyNote = 0;
	unsigned int xCoord = 0;
	unsigned int yCoord = 0;
	unsigned char sendBuf[3] = {0};
	
	while(1) {
		//usrExit = getchar() nblocking in M2
		//In this module do a non blocking recv and chk for STOPMAGIC
		if (usrExit == 27) {
			break;
		}
		else {
			getTsXY(&xCoord, &yCoord);
			keyNote = drum_key_match(xCoord, yCoord);
			halMcuWaitMs(50);
			if (keyNote) {
				//send the note over rf and serial
				sendBuf[0] = 0;					//Channel
				sendBuf[1] = keyNote;		//Note
				sendBuf[2] = 0x7f; 			//Attack Velocity //TODO: use pressure
				halMcuWaitMs(50);
				RF_Send(sendBuf, 3);
			}
		}
	}//while(1)
}