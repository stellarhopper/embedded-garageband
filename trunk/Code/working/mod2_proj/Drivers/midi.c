/*
 * midi.c
 *
 *  Created on: Apr 16, 2011
 *      Author: stellarhopper
 */

#include <ioCC2430.h>
#include "uart_intfc.h"
#include "hal_led.h"
#include "hal_cc8051.h"
#include "hal_mcu.h"
#include "midi.h"

void midiReset() {

  	//MIDI_RESET = 1;
	MCU_IO_OUTPUT(1,1,1);
	//delay_millisec(100);
	halMcuWaitMs(100);

  	MCU_IO_OUTPUT(1,1,0);
	//MIDI_RESET = 0;
	//delay_millisec(100);
	halMcuWaitMs(100);
	
	//MIDI_RESET = 1;
	MCU_IO_OUTPUT(1,1,1);
	//delay_millisec(100);
	halMcuWaitMs(200);
}

void noteOn(unsigned char channel, unsigned char note, unsigned char attack_velocity) {
	talkMIDI( (0x90 | channel), note, attack_velocity);
}

//Send a MIDI note-off message.  Like releasing a piano key
void noteOff(unsigned char channel, unsigned char note, unsigned char release_velocity) {
	talkMIDI( (0x80 | channel), note, release_velocity);
}

//Plays a MIDI note. Doesn't check to see that cmd is greater than 127, or that data values are less than 127
void talkMIDI(unsigned char cmd, unsigned char data1, unsigned char data2) {

	//bit_bang_tx(cmd);
	//putchar (cmd);
	tx0_send(&cmd, 1);
	tx1_send(&cmd, 1);

	//bit_bang_tx(data1);
	//putchar (data1);
	tx0_send(&data1, 1);
	tx1_send(&data1, 1);
	
	//Some commands only have one data byte. All cmds less than 0xBn have 2 data bytes
	//(sort of: http://253.ccarh.org/handout/midiprotocol/)
	//if( (cmd & 0xF0) <= 0xB0) {
	if(cmd <= 0xB0) {
		//bit_bang_tx(data2);
		//putchar (data2);
		tx0_send(&data2, 1);
		tx1_send(&data2, 1);
	}
	tx1_send("\n\r", 2);
}

void midiVolSet(unsigned char vol) {
	talkMIDI(0xB0, 0x07, vol);
}

void midiBankSet(unsigned char bank) {
	talkMIDI(0xB0, 0, bank);
}

void midiPatchSet(unsigned char instr) {
	talkMIDI(0xC0, instr, 0);
}

void midiSilence() {
	talkMIDI(0xB0, 0x78, 0);
}

void midiChannelSet(unsigned char chan) {
	midiChannel = chan;
}


