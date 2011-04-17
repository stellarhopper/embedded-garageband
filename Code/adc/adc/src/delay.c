/*
 * delay.c
 *
 *  Created on: Mar 21, 2011
 *      Author: maulik
 */


#include "myproject.h"

/*
* FUNCTION	:	delay()		
* PURPOSE 	: 	gives delay of Random x milliseconds
* ACCEPTS 	:	Uses for loop for delay
* RETURNS 	:	None
* NOTES 	:   no fixed time for delay.
*/

void delay(int i)
/* A delay subroutine */
{
        unsigned int j;
        for ( ; i ; i-- )
                for ( j = 60000; j ; j-- )
                        ;
}


/*
* FUNCTION	:	delay_millisec()		
* PURPOSE 	: 	gives delay of x milliseconds
* ACCEPTS 	:	number of milliseconds of delay
* RETURNS 	:	None
* NOTES 	:   It uses timer 0 to put delay.
*/

void delay_millisec(unsigned int delay)
{
        /* A subroutine for generating 1ms delay */

        TMOD |= 0x01; /* timer 0; mode 1 */
        TH0 = 0xF4;
        TL0 = 0x03; 

        for (  ; delay != 0; delay-- ) {

                TR0 = SET; /* start timer */

                while(TF0 == CLEAR)
                        ; /* wait for timer overflow */
                TF0 = CLEAR; /* clear flags */
        }
        TR0 = CLEAR; /* stop timer */
}
