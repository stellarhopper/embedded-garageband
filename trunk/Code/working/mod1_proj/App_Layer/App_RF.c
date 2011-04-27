
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

#include "App_RF.h"

static basicRfCfg_t basicRfConfig;

void Init_AppRF()
{
    // Config basicRF
    basicRfConfig.panId = PAN_ID;
    basicRfConfig.channel = RF_CHANNEL;
    basicRfConfig.ackRequest = TRUE;
		basicRfConfig.myAddr = M1ADDR;
		
		// Initialize BasicRF
		if(basicRfInit(&basicRfConfig)==FAILED) {
      HAL_ASSERT(FALSE);
    }
		
		basicRfReceiveOn();


//  if(Dev_Option == RF_RX)
//  {
//      // Initialize BasicRF
//    basicRfConfig.myAddr = BLIND_NODE_ADDR;
//    if(basicRfInit(&basicRfConfig)==FAILED) {
//      HAL_ASSERT(FALSE);
//    }
//
//    basicRfReceiveOn();
//  }
//  else if(Dev_Option == RF_TX)
//  {
//        // Initialize BasicRF
//    basicRfConfig.myAddr = REF_NODE_ADDR;
//    if(basicRfInit(&basicRfConfig)==FAILED) {
//      HAL_ASSERT(FALSE);
//    }
//
//    // Set TX output power
//    halRfSetTxPower(1);
//
//    // Keep Receiver off when not needed to save power
//    basicRfReceiveOff();
//  }
}

bool RF_Send(unsigned char *bufptr, unsigned int len)
{
	basicRfReceiveOff();
  for(uint8 i = 0; i<5; i++) {
    if(basicRfSendPacket(M2ADDR, bufptr, len) == SUCCESS)  {
			basicRfReceiveOn();
			return true;
		}
	}
	basicRfReceiveOn();
  return false;
}

bool RF_Peek()
{
  return basicRfPacketIsReady();
}

uint8 RF_Receive(unsigned char *bufptr)
{
  return basicRfReceive(bufptr, 255, NULL);
}

uint8 RF_gets_blk(unsigned char *bufptr) {

  while (!RF_Peek());	//block
  return RF_Receive(bufptr);	
}

bool RF_puts(unsigned char *bufptr) {
  return RF_Send(bufptr, strlen((const char*)bufptr));
}
