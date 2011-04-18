
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


_sdcc_external_startup()
{
	/*AUXR = [DPU,RES,M0,RES , XRS1,XRS0,EXTRAM,AO]*/
	AUXR |= 0x0C;
	return 0;
}


void main(void)
{
	//All Var declarations
	unsigned char cmd = 0;
	unsigned char instrument = 1;
	unsigned char note = 0x40;
	int i = 0;
	unsigned char buf[] = {0xB0, 0x07, 0x79, 0xB0, 0x00, 0x78, 0xD0, 0x00, 0x00, 0x90, 0x40, 0x3C};

    init_all();

    EA=TRUE;

	midiReset();
	midiVolSet(120); //set channel volume to near max (127)
	midiBankSet(MELODY); //0x79 = melodious instruments
	//talkMIDI(0xD0, instrument, 0); //Set instrument number. 0xC0 is a 1 data byte command
	midiPatchSet(PIANO_AC);
	noteOn(0, note, 0x3D);

    while(1)
    {
    	cmd = getchar();
    	if (cmd == '`') {
    		putchar('1');
    		instrument = getchar();
    		midiPatchSet(instrument-0x30);
    	}
    	else {
    		noteOn(0, cmd, 0x3D);
    	}
    }
}

void init_all(void)
{
	serial_init(BAUD_115200);
}
void timer_1_isr(void) __interrupt(TF0_VECTOR)
{
	HB_ISR();
}






