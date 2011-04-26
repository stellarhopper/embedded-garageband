// Keyboard communication routines

#ifndef __KB_INCLUDED
#define __KB_INCLUDED

#include "hal_types.h"
#include "hal_defs.h"

#define ISC00 0
#define ISC01 1

void init_kb(void);
void decode(unsigned char sc);
void put_kbbuff(unsigned char c);
char kb_getchar();
#endif

