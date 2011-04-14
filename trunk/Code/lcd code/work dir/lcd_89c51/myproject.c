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
// In the bottom right corner of the LCD, continuously display the elapsed time since your program started 
// running using the format "MM:SS.S", where MM is the number of elapsed minutes and SS.S represents the 
// seconds to one-tenth of a second accuracy. For example, 5.1 seconds would be displayed as "00:05.1" and 64.3 
// seconds would be displayed as 01:04.3
// Provide additional Clock menu options to stop the elapsed time clock, to restart the clock, and to reset the 
// clock back to "00:00.0"	
// Add a feature to your code to allow the user to enter and exit an enhanced clock mode that tracks the 
// elapsed time to one-hundredth of a second accuracy. While in this enhanced mode, the clock should display 
// using the format “MM:SS.SS” where SS.SS represents the seconds to one-hundredth of a second accuracy. For 
// example, 64.37 seconds would display as “01:04.37”															

// compiler flags
// -c -mmcs51 --std-sdcc99 --verbose --model-large

// linker flags for AT89C51RC2 with code in Flash at 0x0000 and data in internal/external XRAM at 0x0000
// --code-loc 0x0000 --code-size 0x8000 --xram-loc 0x0000 --xram-size 0x8000 --model-large --out-fmt-ihx
*/

#include "myproject.h"

/*ALL DEFINES GOES HERE*/
#define PRINT_WITH_WELCOME 25
#define PRINT_WITHOUT_WELCOME 26
#define ERR 5555

#define TXD P1.4

void send_command_to_lcd(char *bufptr,unsigned char size_bufptr);
void bit_bang_tx(char txchar);

//clears off screan Backlight
char ClearScreen[] = {0x7C,0x00};

//demo code
char Demo[] = {0x7C,0x04};


//9600
char set_baud_9600[] = {0x7C,0x07,'2'};


char Line[] = {0x7C,0x0C,0x10,0x10,0x20,0x20}; //draws a line from x20 y100 to x20 y108.
char block_erase[] = {0x7C,0x05,0x00,0x00, 0x7F,0x3F}; //draws a line from x20 y100 to x20 y108.

/*
char XCoord[] = {0x7C,0x18,0x1a,0xFF};
char YCoord[] = {0x7C,0x19,0x1a,0xFF}; //y location at 26 (1a hex)
char Square[] = {0x7C, 0x0F, 0, 0, 159, 127, 0xFF}; //border around the screen
char Circle[] = {0x7C,0x03,0x50,0x40,0x0A,0x01,0xFF}; // draws circle, if the 0x01 changes to 0x00 it erases it
char Pixel[] = {0x7C,0x10,0x50,0x40,0x01,0xFF}; // draws a pixel at this location, if 0x01 changes to 0x00, it erases
char Line[] = {0x7C,0x0C,20,100,20,108,1,0xFF}; //draws a line from x20 y100 to x20 y108.
char Reverse[] = {0x7C,0x12,0xFF}; //changes blue to white, and vice versa...just gotta call it once.
char SplashScreen[] = {0x7C,0x13,0xFF}; //loads up the AWESOME sparkfun logo :)
*/

void init_all(void);

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


//start of main
void main(void)
{



    init_all();
    //global interrupt enabled

    EA=TRUE;

    //putchar(0x7C);
    //putchar(0x12);

    //putchar(0x7C);
    //putchar(0x04);
    //send_command_to_lcd(set_baud_9600,sizeof(set_baud_9600));

    printf("Got here");


    //send_command_to_lcd(set_baud_9600,sizeof(set_baud_9600));
    delay(5);
    //send_command_to_lcd(ClearScreen,sizeof(ClearScreen));
    send_command_to_lcd(block_erase,sizeof(block_erase));


    //send_command_to_lcd(Demo,sizeof(Demo));
    send_command_to_lcd(Line,sizeof(Line));
    //printf("\n\r\n\rHELLO WORLD");
    //bit_bang_tx('t');
    while(1)
    {
    	delay(2);
    	printf("a");
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


void send_command_to_lcd(char *bufptr,unsigned char size_bufptr)
{
	//unsigned char *cmdptr = bufptr;
	unsigned char i=0;
	char print_this;

	for(i=0;i<size_bufptr;i++)
	{
		print_this = bufptr[i];
		bit_bang_tx(print_this);
		//bufptr++;
		//printf("@%x@\n\r",print_this);
	}

}


void bit_bang_tx(char txchar)
{

	//unsigned int *lcdPtr = (unsigned int*)(0x6000);
	//unsigned int *lcdPtr = __xdata __at 0x6000;
	//volatile char __at(0x6000) lcdPtr = txchar;
	xdata at (0x6000) char lcdPtr;
	lcdPtr = txchar;

	//*lcdPtr = txchar;
	__asm
				MOV DPH,#0x60
				MOV DPL,#00
				MOVX A,@DPTR
				//MOV A,#0x33
				CLR	TXD
				MOV	R0,#45
	here2:		DJNZ	R0,here2
				MOV	R1,#8					//Send 8 bits
	cynxt:		RRC	A						//Move next bit inot cy
				MOV	TXD,C					//Write next bit
				MOV	R0,#45				//Wait full bit-time
	here1:		DJNZ	R0,here1			//For DATA bit
				DJNZ	R1,cynxt			//write 8 bits
				SETB	TXD					//Set line high
				RRC	A						//Restore ACC contents
				MOV	R0,#45				//Wait full bit duraton
	here3:		DJNZ	R0,here3			//For STOP bit
	__endasm;
}
