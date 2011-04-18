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

#define TXD_BB P1.6
#define HEAP_SIZE 1800   	// size must be smaller than available XRAM

void draw_drums(void);
void small_delay(int x);
void draw_piano(void);
void clear_screen_lcd(void);
void pixel(char S_R, char x, char y);
void line(char S_R, char x1, char y1, char x2, char y2);
void circle(char S_R, int x, int y, int r);
void erase_block(char x1, char y1, char x2, char y2);
void box(char S_R, char x1, char y1, char x2, char y2);
void set_text_position(char x, char y);
void serialWrite(char ser_data);

void send_command_to_lcd(char *bufptr,unsigned char size_bufptr);
void bit_bang_tx(char txchar);
void draw_line(unsigned char xc1,unsigned  char yc1, unsigned char xc2, unsigned char yc2);


unsigned char xdata heap[HEAP_SIZE];		//Used by mem inti

//clears off screan Backlight
char ClearScreen[] = {0x7C,0x00};

//demo code
char Demo[] = {0x7C,0x04};

//9600
char set_baud_9600[] = {0x7C,0x07,'2'};

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

	init_dynamic_memory((MEMHEADER xdata *)heap, HEAP_SIZE);

	delay(5);
     clear_screen_lcd();


    draw_piano();

    delay(5);

    clear_screen_lcd();
    draw_drums();

    while(1)
    {
    	delay(1);
    	//printf("a");
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


void draw_line(unsigned char xc1,unsigned  char yc1, unsigned char xc2, unsigned char yc2)
{
	//char Line_buf[8] = {0};
	unsigned char *Line_buf;
	unsigned char iii=0;

	Line_buf = (unsigned char*)malloc(7);
	if(Line_buf == NULL)
		printf("ptr allocation failed\n\r");

	//if((xc1 > 127) ||  (xc2 > 127) || (yc1 > 63) || (yc2 > 63))
	//{
	//	printf("Co-Ordinates Out of Bound\n\r");
	//}
	//else
	//{
		//printf("Printing Line from (%d,%d) to (%d,%d)\n\r",xc1,yc1,xc2,yc2);
		Line_buf[0] = 0x7C;
		Line_buf[1] = 0x0C;
		Line_buf[2] = xc1;
		Line_buf[3] = yc1;
		Line_buf[4] = xc2;
		Line_buf[5] = yc2;
		Line_buf[6] = 0x01;

		send_command_to_lcd(Line_buf,7);
	//}
	free(Line_buf);
	Line_buf=NULL;


}

void send_command_to_lcd(char *bufptr,unsigned char size_bufptr)
{
	//unsigned char *cmdptr = bufptr;
	unsigned char i=0;
	char print_this;

	//printf("COMMAND_TO_LCD [SIZE : %d] = < ",size_bufptr);

	for(i=0;i<size_bufptr;i++)
	{
		print_this = bufptr[i];
		//bit_bang_tx(print_this);
		putchar(print_this);
		//printf("0x%02X ",print_this);
	}
	//printf(">\n\r");
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
				CLR	TXD_BB
				MOV	R0,#45
	here2:		DJNZ	R0,here2
				MOV	R1,#8					//Send 8 bits
	cynxt:		RRC	A						//Move next bit inot cy
				MOV	TXD_BB,C					//Write next bit
				MOV	R0,#45				//Wait full bit-time
	here1:		DJNZ	R0,here1			//For DATA bit
				DJNZ	R1,cynxt			//write 8 bits
				SETB	TXD_BB					//Set line high
				RRC	A						//Restore ACC contents
				MOV	R0,#45				//Wait full bit duraton
	here3:		DJNZ	R0,here3			//For STOP bit
	__endasm;
}




void clear_screen_lcd(void) {
  serialWrite(0x7c); serialWrite(0x00);
}

void pixel(char S_R, char x, char y) {
	//printf("DONE\n\r");
  serialWrite(0x7c); serialWrite(0x10);
  serialWrite(x); serialWrite(y); serialWrite(S_R);
}

void line(char S_R, char x1, char y1, char x2, char y2) {
  serialWrite(0x7c); serialWrite(0x0c);
  serialWrite(x1); serialWrite(y1); serialWrite(x2); serialWrite(y2); serialWrite(S_R);
}

void circle(char S_R, int x, int y, int r) {
  serialWrite(0x7c); serialWrite(0x03);
  serialWrite(x); serialWrite(y); serialWrite(r); serialWrite(S_R);
}

void erase_block(char x1, char y1, char x2, char y2) {
  serialWrite(0x7c); serialWrite(0x05);
  serialWrite(x1); serialWrite(y1); serialWrite(x2); serialWrite(y2);
}

void box(char S_R, char x1, char y1, char x2, char y2) {
   //serialWrite(0x7c); serialWrite(0x0f);
   //serialWrite(x1); serialWrite(y1); serialWrite(x2); serialWrite(y2); serialWrite(S_R);
  line(S_R, x1, y1, x2, y1);
  line(S_R, x2, y1, x2, y2);
  line(S_R, x1, y2, x2, y2);
  line(S_R, x1, y2, x1, y1);
}

void set_text_position(char x, char y) {
  serialWrite(0x7c); serialWrite(0x18); serialWrite(x);
  serialWrite(0x7c); serialWrite(0x19); serialWrite(y);
}

void serialWrite(char ser_data)
{
	//bit_bang_tx(ser_data);
	putchar(ser_data);
}

/*
void draw_piano()
{
	unsigned char ix=0;
	unsigned char jx=0;

	pixel(1,4,1);
	delay(1);
	pixel(1,13,1);
	delay(1);
	pixel(1,15,1);
	delay(1);
	pixel(1,24,1);
	delay(1);
	pixel(1,26,1);
	delay(1);
	pixel(1,34,1);
	delay(1);
	pixel(1,36,1);
	delay(1);
	pixel(1,44,1);
	delay(1);
	pixel(1,46,1);
	delay(1);
	pixel(1,55,1);
	delay(1);
	pixel(1,57,1);
	delay(1);
	pixel(1,66,1);
	delay(1);
	pixel(1,68,1);
	delay(1);
	pixel(1,76,1);
	delay(1);
	pixel(1,78,1);
	delay(1);
	pixel(1,86,1);
	delay(1);
	pixel(1,88,1);
	delay(1);
	pixel(1,97,1);
	delay(1);
	pixel(1,99,1);
	delay(1);
	pixel(1,108,1);


	line(1,5,0,12,0);
	delay(1);
	line(1,16,0,23,0);
	delay(1);
	line(1,27,0,33,0);
	delay(1);
	line(1,37,0,43,0);
	delay(1);
	line(1,47,0,54,0);
	delay(1);
	line(1,58,0,65,0);
	delay(1);
	line(1,69,0,75,0);
	delay(1);
	line(1,79,0,85,0);
	delay(1);
	line(1,89,0,96,0);
	delay(1);
	line(1,100,0,107,0);
	delay(1);
	line(1,111,0,118,0);
	delay(1);
	line(1,122,0,126,0);
	delay(1);

	line(1,3,2,3,22);
	delay(1);
	line(1,25,2,25,22);
	delay(1);
	line(1,45,2,45,22);
	delay(1);
	line(1,67,2,67,22);
	delay(1);
	line(1,87,2,87,22);
	delay(1);
	line(1,109,2,109,22);
	delay(1);

	for(ix=0;ix<127;ix++)
	{
		line(1,ix,23,ix,63);
		switch(ix)
		{
			case 7: ix=20; break;
			case 28: ix=41; break;
			case 49: ix=62; break;
			case 70: ix=83; break;
			case 91: ix=104; break;
			case 112: ix=200; break;
			default: break;
		}
	}

	ix=0;

	for(ix=14;ix<127;ix = ix + 21)
	{
		line(1,ix,2,ix,63);
	}

	ix=0;

}
*/

void draw_piano()
{
	unsigned char ix=0;
	unsigned char jx=0;

	ET1=0;

	line(1,0,0,0,63);
	small_delay(300);
	line(1,0,63,127,63);
	small_delay(300);
	line(1,127,0,127,63);
	small_delay(300);

	pixel(1,1,0);
	small_delay(300);

	pixel(1,2,1);
	small_delay(300);

	for(ix=0;ix<127;ix++)
	{
		line(1,ix,23,ix,63);
		switch(ix)
		{
			case 7: ix=20; break;
			case 28: ix=41; break;
			case 49: ix=62; break;
			case 70: ix=83; break;
			case 91: ix=104; break;
			case 112: ix=200; break;
			default: break;
		}
		small_delay(300);
	}

	ix=0;

	for(ix=14;ix<127;ix = ix + 21)
	{
		line(1,ix,2,ix,63);
		small_delay(300);
	}

	//delay(2);
	ix=5;
	jx=12;

	while(ix<128)
	{
		line(1,ix,0,jx,0);
		//delay(1);
		small_delay(700);
		pixel(1,ix-1,1);
		small_delay(700);
		pixel(1,jx+1,1);

		if(ix<115)
		{
			small_delay(700);
			line(1,ix-2,2,ix-2,22);
		}

		switch(ix)
		{
			case 5: ix=16; jx=23; break;
			case 16: ix=27; jx=33; break;
			case 27: ix=37; jx=43; break;
			case 37: ix=47; jx=54; break;
			case 47: ix=58; jx=65; break;
			case 58: ix=69; jx=75; break;
			case 69: ix=79; jx=85; break;
			case 79: ix=89; jx=96; break;
			case 89: ix=100; jx=107; break;
			case 100: ix=111; jx=118; break;
			case 111: ix=122; jx=125; break;
			case 122: ix=200; jx=0; break;
			default: break;
		}
		small_delay(700);
		//delay(1);
	}

    putchar(0x7C);
    putchar(0x02);
    putchar(0x7F);
	ET1=1;

}

void draw_drums()
{
	circle(1,17,17,17);
	small_delay(700);
	set_text_position(17,17);
	small_delay(700);
	printf("1");
	small_delay(700);

	circle(1,41,45,16);
	small_delay(700);
	set_text_position(41,45);
	small_delay(700);
	printf("2");
	small_delay(700);

	circle(1,64,17,17);
	small_delay(700);
	set_text_position(64,17);
	small_delay(700);
	printf("3");
	small_delay(700);

	circle(1,86,45,16);
	small_delay(700);
	set_text_position(86,45);
	small_delay(700);
	printf("4");
	small_delay(700);

	circle(1,109,17,17);
	small_delay(700);

	circle(1,109,17,13);
	small_delay(700);

	circle(1,109,17,9);
	small_delay(700);

	circle(1,109,17,5);
	small_delay(700);
}


void small_delay(int x)
{
	int xp=0;
	for(xp=0;xp<x;xp++)
	{
		__asm
		NOP
		__endasm;
	}
}
