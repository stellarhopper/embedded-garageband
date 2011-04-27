#include "myproject.h"


/*
* FUNCTION	:	print_welcome_msg()		
* PURPOSE 	: 	Prints welcome message
* ACCEPTS 	:	None
* RETURNS 	:	None
* NOTES 	:   
*/



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
	PCON |= 0x80;					/*SMOD1 = 1*/
	SCON = 0x50;					  /* uart in mode 1 (8 bit), REN=1 */
   BDRCON &=0xEC;               /* BRR=0; SRC=0; */
   BDRCON |=0x0E;               /* TBCK=1;RBCK=1; SPD=1 */
   BRL=my_baud;                    /* 115200 Bds at 11.059MHz */
 	EA = 1; 						     /* Enable serial interrupt	*/
	BDRCON |=0x10;               /* Baud rate generator run*/
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
