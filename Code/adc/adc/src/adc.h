/*
 * adc.h
 *
 *  Created on: Apr 14, 2011
 *      Author: stellarhopper
 */

#ifndef ADC_H_
#define ADC_H_

#define ADC_ADDR 0xF000

#define NOP __asm nop __endasm 		/* No operation */

#define ADC_CLK P1_6
#define ADC_ALE P1_4
#define ADC_A	P1_3
#define ADC_B	P1_2
#define ADC_C	P1_1
#define ADC_EOC P1_0

#define TRUE 1
#define FALSE 0

void timer_init(void);
void adcInit (void);
unsigned char adcSample (unsigned char channel);

#endif /* ADC_H_ */
