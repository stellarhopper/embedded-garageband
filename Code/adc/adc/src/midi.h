/*
 * midi.h
 *
 *  Created on: Apr 16, 2011
 *      Author: stellarhopper
 */

#ifndef MIDI_H_
#define MIDI_H_

#define MIDI_RESET P3_3

void midiReset(void);

void midiVolSet(unsigned char vol);
void midiBankSet(unsigned char bank);
void midiPatchSet(unsigned char instr);
void midiSilence(void);


void noteOn(unsigned char channel, unsigned char note, unsigned char attack_velocity);
void noteOff(unsigned char channel, unsigned char note, unsigned char release_velocity);
void talkMIDI(unsigned char cmd, unsigned char data1, unsigned char data2);

#endif /* MIDI_H_ */
