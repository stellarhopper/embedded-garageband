/*
 * touchscreen.h
 *
 *  Created on: Apr 15, 2011
 *      Author: stellarhopper
 */

#ifndef TOUCHSCREEN_H_
#define TOUCHSCREEN_H_

#define TS_P1 P1_7
#define TS_P2 P3_4
#define TS_P3 P1_5
#define TS_P4 P3_5

#define TS_ADC_P4 1
#define TS_ADC_P3 2

#define HIGH 1
#define LOW 0

void getTsCoords(unsigned char *x, unsigned char *y);


#endif /* TOUCHSCREEN_H_ */
