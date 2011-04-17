#ifndef MYPROJECT_H_
#define MYPROJECT_H_

/*Include files*/
#include <at89c51ed2.h>  //also includes 8052.h and 8051.h
#include <mcs51reg.h>
#include <stdio.h>		
#include <stdlib.h>		//For 
#include <string.h>		//For memset

#include "timer.h"
#include "serial.h"
#include "delay.h"
#include "midi.h"
//#include "adc.h"
//#include "lcd.h"
//#include "touchscreen.h"
/*All #defines start here*/

#define TRUE 1			
#define FALSE 0

/*Macro*/
#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)

#endif /*PROJECT_H_*/
