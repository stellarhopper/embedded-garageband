
// compiler flags
// -c -mmcs51 --std-sdcc99 --verbose --model-large

// linker flags for AT89C51RC2 with code in Flash at 0x0000 and data in internal/external XRAM at 0x0000
// --code-loc 0x0000 --code-size 0x8000 --xram-loc 0x0000 --xram-size 0x8000 --model-large --out-fmt-ihx


#include "myproject.h"

#define PRINT_WITH_WELCOME 25
#define PRINT_WITHOUT_WELCOME 26



#define ERR 5555

void print_init_message(int sel);
unsigned int htoi(const char s[]);
int hexalpha_to_int(int c);
void init_all(void);
void press_key();


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
	//All Var declarations
	unsigned char instrument = 0;
	unsigned char note = 0x40;
	int i = 0;
	unsigned char buf[] = {0xB0, 0x07, 0x79, 0xB0, 0x00, 0x78, 0xD0, 0x00, 0x00, 0x90, 0x40, 0x3C};

    init_all();

    EA=TRUE;
    //clear_screen();

	//midiReset();

/*    for (i=0; i<12; i++) {
    	bit_bang_tx(buf[i]);
    }*/


	talkMIDI(0xB0, 0x07, 0x79); //0xB0 is channel message, set channel volume to near max (127)

	talkMIDI(0xB0, 0, 0x78); //Select the bank of really fun sounds

	//For this bank 0x78, the instrument does not matter, only the note
	talkMIDI(0xD0, instrument, 0); //Set instrument number. 0xC0 is a 1 data byte command
	noteOn(0, note, 0x3C);

	//printf("\n\rdone\n\r");

    while(1)
    {
    	//
    }
}


/*
* FUNCTION	:	print_init_message()		
* PURPOSE 	: 	prints user message 
* ACCEPTS 	:	type of print layout
* RETURNS 	:	None
* NOTES 	:   None
*/
void print_init_message(int sel)
{


        if(sel == PRINT_WITH_WELCOME)
        {/*--------------------------------------------------------User Menu-----------------------------------------------------------------*/
                //printf("****************************************WELCOME********************************\n  \n \r");
                printf("This program gives various options for 89C51 Controller LCD test             \n \r");
                printf("*******************************************************************************\n  \n \r");
        }
                printf(" Press any number  between  1-6 to  choose from various following options. \n\n \r");

                printf("1. LCD PUT CHARACTER \n \r");
                printf("2. LCD PUT STRING \n \r");
                printf("3. PRINT TO LINE (truncated to 16 characters) \n\n \r");

                printf("4. LCD GO TO ADDR \n \r");
                printf("5. LCD GO TO HOME \n \r");
                printf("6. LCD GOTO XY \n\n \r");

                printf("7. LCD CLEAR \n \r");
                printf("8. LCD CLEAR LINE \n\n \r");

               // printf("Enter you Choice: \n \r");
}


/*
* FUNCTION	:	hexalpha_to_int()		
* PURPOSE 	: 	Converts Hex to int 
* ACCEPTS 	:	hex didgit to convert
* RETURNS 	:	integer equivalent
* NOTES 	:   pairs with the next htoi function
*/

int hexalpha_to_int(int c)
{
  char hexalpha[] = "aAbBcCdDeEfF";
  int i;
  int answer = 0;

  for(i = 0; answer == 0 && hexalpha[i] != '\0'; i++)
  {
    if(hexalpha[i] == c)
    {
      answer = 10 + (i / 2);
    }
  }

  return answer;
}

unsigned int htoi(const char s[])
{
  unsigned int answer = 0;
  int i = 0;
  int valid = 1;
  int hexit;

  if(s[i] == '0')
  {
    ++i;
    if(s[i] == 'x' || s[i] == 'X')
    {
      ++i;
    }
  }

  while(valid && s[i] != '\0')
  {
    answer = answer * 16;
    if(s[i] >= '0' && s[i] <= '9')
    {
      answer = answer + (s[i] - '0');
    }
    else
    {
      hexit = hexalpha_to_int(s[i]);
      if(hexit == 0)
      {
        valid = 0;
      }
      else
      {
        answer = answer + hexit;
      }
    }

    ++i;
  }

  if(!valid)
  {
    answer = ERR;
  }

  return answer;
}


void press_key()
{
    unsigned char dummy;
    printf_tiny("\n\n\rPress Any Key to continue... \n\r");
    dummy=getchar();
    clear_screen();
    print_init_message(PRINT_WITHOUT_WELCOME);
    printf_tiny("Enter your choice\n\r");
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
void timer_1_isr(void) __interrupt(TF0_VECTOR)
{
	HB_ISR();
}






