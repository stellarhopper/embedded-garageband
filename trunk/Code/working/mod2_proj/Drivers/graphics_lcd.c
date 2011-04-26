/*
 * graphics_lcd.c
 *
 *  Created on: Apr 23, 2011
 *      Author: maulik
 */

#include <ioCC2430.h>
#include "uart_intfc.h"
#include "hal_led.h"
#include "hal_cc8051.h"
#include "hal_mcu.h"
#include "graphics_lcd.h"


void clear_screen_lcd(void)
{
  char c1 = 0x7c;
  char c2 = 0x00;

  tx0_send(&c1, 1);
  tx0_send(&c2, 1);

  tx1_send(&c1, 1);
  tx1_send(&c2, 1);
}

void pixel(char S_R, char x, char y)
{
  char c1 = 0x7c;
  char c2 = 0x10;

  tx0_send(&c1, 1);
  tx0_send(&c2, 1);

  tx0_send(&x, 1);
  tx0_send(&y, 1);
  tx0_send(&S_R, 1);
}

void line(char S_R, char x1, char y1, char x2, char y2)
{
  char c1 = 0x7c;
  char c2 = 0x0c;

  tx0_send(&c1, 1);
  tx0_send(&c2, 1);

  tx0_send(&x1, 1);
  tx0_send(&y1, 1);
  tx0_send(&x2, 1);
  tx0_send(&y2, 1);
  tx0_send(&S_R, 1);
}

void circle(char S_R, int x, int y, int r)
{
  char c1 = 0x7c;
  char c2 = 0x03;

  tx0_send(&c1, 1);
  tx0_send(&c2, 1);

  tx0_send(&x, 1);
  tx0_send(&y, 1);
  tx0_send(&r, 1);
  tx0_send(&S_R, 1);
}


void set_text_position(char x, char y)
{
  char c1 = 0x7c;
  char c2 = 0x18;
  char c3 = 0x19;

  tx0_send(&c1, 1);
  tx0_send(&c2, 1);
  tx0_send(&x, 1);

  tx0_send(&c1, 1);
  tx0_send(&c3, 1);
  tx0_send(&y, 1);

//  putchar(0x7c); putchar(0x18); putchar(x);
//  putchar(0x7c); putchar(0x19); putchar(y);
}


void draw_piano()
{
	unsigned char ix=0;
	unsigned char jx=0;
	char c1 = 0x7c;
  	char c2 = 0x02;
  	char c3 = 0x7f;

	line(1,0,0,0,63);
	small_delay(300);
	line(1,0,63,127,63);
	small_delay(300);
	line(1,127,0,127,63);
	small_delay(300);

	pixel(1,1,0);
	small_delay(300);

	pixel(1,2,1);
	small_delay(300);

	for(ix=0;ix<127;ix++)
	{
		line(1,ix,23,ix,63);
		switch(ix)
		{
			case 7: ix=20; break;
			case 28: ix=41; break;
			case 49: ix=62; break;
			case 70: ix=83; break;
			case 91: ix=104; break;
			case 112: ix=200; break;
			default: break;
		}
		small_delay(300);
	}

	ix=0;

	for(ix=14;ix<127;ix = ix + 21)
	{
		line(1,ix,2,ix,63);
		small_delay(300);
	}

	ix=5;
	jx=12;

	while(ix<128)
	{
		line(1,ix,0,jx,0);
		small_delay(700);
		pixel(1,ix-1,1);
		small_delay(700);
		pixel(1,jx+1,1);

		if(ix<115)
		{
			small_delay(700);
			line(1,ix-2,2,ix-2,22);
		}

		switch(ix)
		{
			case 5: ix=16; jx=23; break;
			case 16: ix=27; jx=33; break;
			case 27: ix=37; jx=43; break;
			case 37: ix=47; jx=54; break;
			case 47: ix=58; jx=65; break;
			case 58: ix=69; jx=75; break;
			case 69: ix=79; jx=85; break;
			case 79: ix=89; jx=96; break;
			case 89: ix=100; jx=107; break;
			case 100: ix=111; jx=118; break;
			case 111: ix=122; jx=125; break;
			case 122: ix=200; jx=0; break;
			default: break;
		}
		small_delay(700);
	}

	tx0_send(&c1, 1);
	tx0_send(&c2, 1);
	tx0_send(&c3, 1);
	
//    putchar(0x7C);
//    putchar(0x02);
//    putchar(0x7F);
	
	//EA=1;

}

void draw_drums()
{
  	///EA = 0;
	
	circle(1,17,17,17);
	small_delay(700);
	set_text_position(17,17);
	small_delay(700);
	tx0_send("1", 1);
	small_delay(700);

	circle(1,41,45,16);
	small_delay(700);
	set_text_position(41,45);
	small_delay(700);
	tx0_send("2", 1);
	small_delay(700);

	circle(1,64,17,17);
	small_delay(700);
	set_text_position(64,17);
	small_delay(700);
	tx0_send("3", 1);
	small_delay(700);

	circle(1,86,45,16);
	small_delay(700);
	set_text_position(86,45);
	small_delay(700);
	tx0_send("4", 1);
	small_delay(700);

	circle(1,109,17,17);
	small_delay(700);

	circle(1,109,17,13);
	small_delay(700);

	circle(1,109,17,9);
	small_delay(700);

	circle(1,109,17,5);
	small_delay(700);
	
	//EA = 1;
}


void small_delay(int x)
{
  	int i = 0;
	
	for(i=0; i<64; i++) {
		halMcuWaitUs(x);
	}
}
