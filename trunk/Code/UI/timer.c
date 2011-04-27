#include "myproject.h"

#define HEART_BEAT P1_7		//Blinks LED at 1Hz


unsigned char hb_count=0;					//Used for generating 500ms timer


/* TIMER SECTION */

/*
* FUNCTION	:	timer_init()		
* PURPOSE 	: 	Initializes Timer 
* ACCEPTS 	:	None
* RETURNS 	:	None
* NOTES 	:   Timer 0 initialized in mode 1. Delay of 50ms is given for Timer 0.
*/

void timer_init(void)
{
	/*IE = [EA EC ET2 ES ; ET1 EX1 ET0 EX0]*/
	IE=0x00;									//Disable Interrupts 
	ET1 = TRUE;

	TMOD = TMOD | 0x10;
	TF1=FALSE;

	TH1 = 0x4C;									//50ms delay
	TL1 = 0x00;
	TR1=TRUE;
	HEART_BEAT = FALSE;
}

/*
* FUNCTION	:	HB_ISR()		
* PURPOSE 	: 	ISR caller function for Timer 0() 
* ACCEPTS 	:	None
* RETURNS 	:	None
* NOTES 	:   Called by T0 ISR.
*/
void HB_ISR(void)
{
	
		hb_count++;

		if(hb_count ==0x05)				//blink HB on every 500mSec
			P1_7 = FALSE;	
		else if(hb_count ==0x0A)
		{
			P1_7 = TRUE;	
			hb_count = 0;
		}

		TH1 = 0x4C;						//Reload Timer
		TL1 = 0x00;
		TR1=1;                          //Start timer
}
