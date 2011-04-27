
/***********************************************************************************
* INCLUDES
*/

#include <string.h>
#include <hal_board.h>
#include <hal_int.h>
#include "hal_mcu.h"
#include "uart_intfc.h"

#include "utilMisc.h"

void printf_lcd(char *buf) {
  tx0_send(buf, strlen(buf));
}

void send_midi(char *buf) {
  tx0_send(buf, strlen(buf));
}

void printf_pc(char *buf) {
  tx1_send(buf, strlen(buf));
}

void printf_pc_note(char *buf) {
  tx1_send(buf, strlen(buf));
}
