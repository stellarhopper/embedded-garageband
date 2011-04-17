/*
 * touchscreen.c
 *
 *  Created on: Apr 15, 2011
 *      Author: stellarhopper
 */


#include "myproject.h"

void getTsCoords(unsigned char *x, unsigned char *y) {

	//read x
	TS_P1 = HIGH; //floating
	TS_P3 = HIGH;  //adc
	TS_P4 = HIGH;
	TS_P2 = LOW;
	delay_millisec(1);
	*x = adcSample(TS_ADC_P3);

	//read y
	TS_P2 = HIGH; //floating
	TS_P4 = HIGH;  //adc
	TS_P1 = HIGH;
	TS_P3 = LOW;
	delay_millisec(1);
	*y = adcSample(TS_ADC_P4);
}
