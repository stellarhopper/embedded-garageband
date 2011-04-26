
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


/***********************************************************************************
* CONSTANTS
*/



/***********************************************************************************
* LOCAL VARIABLES
*/
static basicRfCfg_t basicRfConfig;


/***********************************************************************************
* LOCAL FUNCTIONS
*/




void Init_AppRF(unsigned char Dev_Option)
{
          // Config basicRF
    basicRfConfig.panId = PAN_ID;
    basicRfConfig.channel = RF_CHANNEL;
    basicRfConfig.ackRequest = TRUE;
    
    
  if(Dev_Option == RF_RX)
  {
      // Initialize BasicRF
    basicRfConfig.myAddr = BLIND_NODE_ADDR;
    if(basicRfInit(&basicRfConfig)==FAILED) {
      HAL_ASSERT(FALSE);
    }
    
    basicRfReceiveOn();
  }
  else if(Dev_Option == RF_TX)
  {
        // Initialize BasicRF
    basicRfConfig.myAddr = REF_NODE_ADDR;
    if(basicRfInit(&basicRfConfig)==FAILED) {
      HAL_ASSERT(FALSE);
    }
    
    // Set TX output power
    halRfSetTxPower(1);

    // Keep Receiver off when not needed to save power
    basicRfReceiveOff();
  }
}



bool RF_Send(unsigned char *bufptr, unsigned int len)
{
  for(uint8 i = 0; i<5; i++)
    if(basicRfSendPacket(BLIND_NODE_ADDR, bufptr, len) == SUCCESS)  return true;
  
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