#ifndef UTIL_MISC_H
#define UTIL_MISC_H

#include "hal_defs.h"
#include "hal_types.h"

void printf_lcd(char *buf);
void send_midi(char *buf);
void printf_pc(char *buf);
void printf_pc_note(char *buf);

#endif