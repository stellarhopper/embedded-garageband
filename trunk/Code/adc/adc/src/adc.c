/*
 * adc.c
 *
 *  Created on: Apr 14, 2011
 *      Author: stellarhopper
 */
#include "myproject.h"

__xdata __at ADC_ADDR volatile unsigned int adcPtr;
unsigned char hb_count = 0;
unsigned char adcClkOn = FALSE;

void adcInit () {
	//
}

void adcDelay(int cnt) {

	int i = 0;

	for (i=0; i<cnt; i++) {
		NOP;
	}
}

void timer_init(void) {
	/*IE = [EA EC ET2 ES ; ET1 EX1 ET0 EX0]*/
	IE=0x00;									//Disable Interrupts
	ET1 = TRUE;

	TMOD = TMOD | 0x10;
	TF1=FALSE;

	TH1 = 0xFF;						//Reload Timer
	TL1 = 0x70;
	TR1=TRUE;
}

void HB_ISR(void) {

	if(adcClkOn == TRUE) {
		(ADC_CLK) ? (ADC_CLK=0) : (ADC_CLK=1);
	}
	TH1 = 0xFF;						//Reload Timer
	TL1 = 0x70;
	TR1=1;                          //Start timer
}

unsigned char adcSample (unsigned char channel) {

	unsigned char adcVal = 0;

	ADC_ALE = 0;
	ADC_EOC = 1;
	adcClkOn = TRUE;
	ADC_A = channel & 0x01;
	ADC_B = channel & 0x02;
	ADC_C = channel & 0x04;
	adcDelay(60);

	ADC_ALE = 1;
	adcDelay(60);
	ADC_ALE = 0;
	adcDelay(60);

	//printf("Waiting on EOC\n\r");
	while (!ADC_EOC);
	adcDelay(60);
	adcVal = adcPtr;

	adcClkOn = FALSE;
	return adcVal;
}
