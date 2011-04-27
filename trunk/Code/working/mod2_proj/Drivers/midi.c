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
#include "user_interface.h"
#include "utilMisc.h"
#include "App_RF.h"

extern char drum_piano_guitar;
extern char real_virtual;
extern char drum_piano_guitar_rv;
extern char piano_type;
extern char guitar_type;
extern char audio_termination;
extern char record_notes;
extern char play_recorded_notes;

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

	unsigned char rfBufMidi[3] = {0};
	
	rfBufMidi[0] = cmd;
	rfBufMidi[1] = data1;
	rfBufMidi[2] = data2;

	if (record_notes == TRUE) {
		RF_puts_SD(rfBufMidi, 3);
	}
	
	if (audio_termination == VS1053) {
		tx0_send(&cmd, 1);
		halMcuWaitMs(5);
		tx0_send(&data1, 1);
		halMcuWaitMs(5);
	}
	if (audio_termination == PC) {
		tx1_send(&cmd, 1);
		tx1_send(&data1, 1);
	}
	
	if( (cmd & 0xF0) <= 0xB0) {
		if (audio_termination == VS1053) {
			tx0_send(&data2, 1);
			halMcuWaitMs(5);
		}
		if (audio_termination == PC) {
			tx1_send(&data2, 1);
		}
	}
	tx1_send(rfBufMidi, 3);
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

void midiInit() {
	
	char bank, patch;
	
	midiReset();
	midiVolSet(127);

	if (drum_piano_guitar == PIANO) {
		bank = MELODY;
		if(!ISBETWEEN(1, piano_type, 6)) {
			piano_type = ACOUSTIC_GRAND_PIANO;
		}
		patch = piano_type;
	}
	else if (drum_piano_guitar == DRUM) {
		bank = DRUMS1;
		patch = 5;
	}
	else if (drum_piano_guitar == GUITAR) {
		bank = MELODY;
		if(!ISBETWEEN(25, guitar_type, 32)) {
			guitar_type = ACOUSTIC_GUITAR_NYLON;
		}
		patch = guitar_type;
	}
	midiBankSet(bank);
	midiPatchSet(patch);
	halMcuWaitMs(100);
}


