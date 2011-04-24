/************************************************************************************************************/
/* 	Filename: 	myproject.c																				*/
/*	Author:   	Maulik Kapuria																				*/
/*	Date:     	april 1st 2011 																		*/
/*  Course:		Embedded System Design (ECEN5613)  															*/
/*	Instructor: Prof. Linden McClure        																*/
/*  Univ  :		University of Colorado, Boulder  															*/
/*  Rev   :		1.1																							*/
/*  																										*/
/*	Description:	
*/

#include "myproject.h"


void init_all(void);

_sdcc_external_startup()
{
	/*AUXR = [DPU,RES,M0,RES , XRS1,XRS0,EXTRAM,AO]*/
	AUXR |= 0x0C;
	return 0;
}


//start of main
void main(void)
{

    init_all();
    EA=TRUE;

	delay(5);	//Give Delay of 5 Seconds
    clear_screen_lcd();		//Clears LCD screen
    draw_piano();			//Draws a Piano
    delay(5);				//Give some time for it to draw.
    clear_screen_lcd();		//Clear LCD screen
    draw_drums();			//Draw Drums now

    while(1)
    {
    	delay(1);
    }
}

/*
* FUNCTION	:	init_all()
* PURPOSE 	: 	Calls serial init function, timer init function, clear screen function and welcome message function
* ACCEPTS 	:	none
* RETURNS 	:	none
* NOTES 	:   All initialization goes in here
*/

void init_all(void)
{
	serial_init(BAUD_115200);
	timer_init();
	//clear_screen();
}

void timer_1_isr(void) __interrupt(TF1_VECTOR)
{
	HB_ISR();
}

