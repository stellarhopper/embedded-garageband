/************************************************************************************************************/
/* 	Filename: 	myproject.c																				*/
/*	Author:   	Maulik Kapuria																				*/
/*	Date:     	Wed March 12th 2011 																		*/
/*  Course:		Embedded System Design (ECEN5613)  															*/
/*	Instructor: Prof. Linden McClure        																*/
/*  Univ  :		University of Colorado, Boulder  															*/
/*  Rev   :		1.1																							*/
/*  																										*/
/*	Description:																							*/
/*	Program that demonstrates various modes of 8051 PCA. We describe modes like high speed mode,
 *  software timer/compare mode, PWM(Already discussed), Capture on negative edge, capture on positive edge
 *  and capture on both edge.
 *	Apart from this we also demonstrate the Watchdog mode of PCA
 *//************************************************************************************************************/

#include "myproject.h"

//This pin is toggled high-low-high to increment count
#define DUMMY_PIN P1_5
#define SOFTWARE_PIN P1_2

void init_all(void);
void print_init_message(int);
/*
extern char drum_piano_guitar;
extern char real_virtual;
extern char drum_piano_guitar_rv;
extern char piano_type;
extern char guitar_type;
extern char audio_termination;
extern char record_notes;
extern char play_recorded_notes;

extern char rv_loop;
extern char wrv_loop;
extern char piano_loop;
extern char guitar_loop;
extern char audio_loop;
extern char record_loop;

*/

/*
* FUNCTION	:	_sdcc_external_startup()
* PURPOSE 	:	To initialize the AUXR register to enable usgae of entire 1KB of RAM space.
* ACCEPTS 	:	NONE
* RETURNS 	:	0
* NOTES 	:   NONE
*/

_sdcc_external_startup()
{
	/*AUXR = [DPU,RES,M0,RES , XRS1,XRS0,EXTRAM,AO]*/
	AUXR |= 0x0C;
	return 0;
}


void main(void)
{
	init_all();
	EA=1;

	start_my_menu();

	//infinite while loop
	while(1)
	{
	}

}



/*
* FUNCTION	:	print_init_message()
* PURPOSE 	:	prints init message withwithout clear and with without header.
* ACCEPTS 	:	0,1,2
* RETURNS 	:	NONE
* NOTES 	:   Passing 2 to this function will print but not clear.
* PAssing 1 to this function will clear and print all with the welcom message.
* Passing 1 will not clear screen and not print welcom message
*/
void print_init_message(int sel)
{
	if(sel !=2)
	{
		clear_screen();
	}

	if(sel == TRUE)
	{/*--------------------------------------------------------User Menu-----------------------------------------------------------------*/
		printf("****************************************WELCOME********************************\n  \n \r");
		printf("  This program demonstrate various features of PCA in an 8051 microcontroller     \n \r");
		printf("       Press any number  between  1-6 to  choose from various following options. \n\n \r");
		printf("*******************************************************************************\n  \n \r");
		printf("1. PCA CAPTURE MODE. Negative-edge trigger on CEX2  \n \r");
		printf("2. PCA CAPTURE MODE. Positive-edge trigger on CEX2  \n \r");
		printf("3. PCA CAPTURE MODE. Dual-edge trigger on CEX2  \n \r");
		printf("4. High Speed output mode \n \r");
		printf("5. Software timer/capture mode \n \r");
		printf("6. Watchdog Reset \n \r");
	}

	if(sel == FALSE ||  sel == 2)
	{
		printf("1. PCA CAPTURE MODE. Negative-edge trigger on CEX2  \n \r");
		printf("2. PCA CAPTURE MODE. Positive-edge trigger on CEX2  \n \r");
		printf("3. PCA CAPTURE MODE. Dual-edge trigger on CEX2  \n \r");
		printf("4. High Speed output mode \n \r");
		printf("5. Software timer/capture mode \n \r");
		printf("6. Watchdog Reset \n \r");
	}
}


void init_all(void)
{
	serial_init(BAUD_115200);
	timer_init();
	clear_screen();
}

/*
* FUNCTION	:	timer_0_isr()
* PURPOSE 	: 	ISR for Timer 0()
* ACCEPTS 	:	None
* RETURNS 	:	None
* NOTES 	:   This is the T0 ISR. It is not called but triggered by TF0.
*/
void timer_1_isr(void) __interrupt(TF1_VECTOR)
{
	HB_ISR();
}



