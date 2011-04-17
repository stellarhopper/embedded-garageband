#include "myproject.h"


/*
* FUNCTION	:	print_welcome_msg()		
* PURPOSE 	: 	Prints welcome message
* ACCEPTS 	:	None
* RETURNS 	:	None
* NOTES 	:   
*/

void print_welcome_msg(void)
{
	printf_tiny("*******************************************************************************\n\r");
	printf_tiny("**********     EMBEDDED SYSTEMS DESIGN : SPRING 2011 : LAB NO. 4     **********\n\r");
	printf_tiny("**********     Created by :Maulik Kapuria                            **********\n\r");
	printf_tiny("**********     Bit Banged I2C program                                **********\n\r");
	//printf_tiny("*****************************************************************************\n\r\n\r");
}

/* SERIAL SECTION */

/*
* FUNCTION	:	serial_init()		
* PURPOSE 	: 	Initializes serial port
* ACCEPTS 	:	baudrate #defined values (BAUD_57600, BAUD_28800, BAUD_19200, BAUD_14400, BAUD_9600, BAUD_4800, BAUD_2400)
* RETURNS 	:	None
* NOTES 	:   Uses Time 1 in auto reload mode. SMOD bit must be set to 1.
*/

void serial_init(unsigned char my_baud)
{
	my_baud = 0;
/*	PCON |= 0x80;					SMOD1 = 1
	SCON = 0x50;					   uart in mode 1 (8 bit), REN=1
   BDRCON &=0xEC;                BRR=0; SRC=0;
   BDRCON |=0x0E;                TBCK=1;RBCK=1; SPD=1
   BRL=my_baud;                     115200 Bds at 11.059MHz
 	EA = 1; 						      Enable serial interrupt
	BDRCON |=0x10;                Baud rate generator run*/

	PCON |= 0x80;								//configure uart, fast baud
	//PCON &= 0x7F;								//configure uart, slow baud
	SCON = 0x50;                   			 	//SCON: mode 1, 8-bit UART, enable rcvr
	TMOD |= 0x20;                   			//TMOD: timer 1, mode 2, 8-bit reload for serial
	TH1 = 0xFE;                   				//TH1:  reload value for baudrate
	TR1   = 1;                      			//TR1:  timer 1 run
}

/*
* FUNCTION	:	putchar()		
* PURPOSE 	: 	Puts a character on the serial port
* ACCEPTS 	:	Character to put on Serial TX (in ASCII)
* RETURNS 	:	None
* NOTES 	:   Serial_init must be called before using this function.
*/

void putchar (char c)
{	
	SBUF = c;  	                // load serial port with transmit value
	while (!TI);	            // check T1 flag
	TI = 0;  	                // clear TI flag
}

/*
* FUNCTION	:	getchar()		
* PURPOSE 	: 	Accepts character from the serial port (on RX)
* ACCEPTS 	:	None
* RETURNS 	:	The Ascii of the value received on RX.
* NOTES 	:   Serial_init must be called before using this function.
*/

char getchar ()
{
    while (!RI);                // compare asm code generated for these three lines
	RI = 0;			            // clear RI flag
	return SBUF;  	            // return character from SBUF
}	
  
  
  /*
* FUNCTION	:	putstr()		
* PURPOSE 	: 	Prints welcome message
* ACCEPTS 	:	String to display in form of an array
* RETURNS 	:	number of characters transmitted successfully
* NOTES 	:   can be replaced by printf
*/
int putstr (char *s)
{
	int i = 0;
	while (*s)
	{					// output characters until NULL found
		putchar(*s++);
		i++;
	}
	return i+1;
}


/*
* FUNCTION	:	clear_screen()		
* PURPOSE 	: 	clears the screen and starts at the top. 
* ACCEPTS 	:	none
* RETURNS 	:	none
* NOTES 	:   VT100 specific commands
*/
void clear_screen(void)
{
	printf("\033c");			//Reset Terminal
	printf("\033[2J");			//Clear Screen
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
				CLR	MYTXD
				MOV	R0,#13
	here2:		DJNZ	R0,here2
				MOV	R1,#8					//Send 8 bits
	cynxt:		RRC	A						//Move next bit inot cy
				MOV	MYTXD,C					//Write next bit
				MOV	R0,#13				//Wait full bit-time
				NOP
	here1:		DJNZ	R0,here1			//For DATA bit
				DJNZ	R1,cynxt			//write 8 bits
				SETB	MYTXD					//Set line high
				RRC	A						//Restore ACC contents
				MOV	R0,#13				//Wait full bit duraton
	here3:		DJNZ	R0,here3			//For STOP bit
	__endasm;
}
