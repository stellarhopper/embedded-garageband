/*
 * graphics_lcd.c
 *
 *  Created on: Apr 23, 2011
 *      Author: maulik
 */


#include "myproject.h"




void clear_screen_lcd(void)
{
  putchar(0x7c); putchar(0x00);
}

void pixel(char S_R, char x, char y)
{
  putchar(0x7c); putchar(0x10);
  putchar(x); putchar(y); putchar(S_R);
}

void line(char S_R, char x1, char y1, char x2, char y2)
{
  putchar(0x7c); putchar(0x0c);
  putchar(x1); putchar(y1); putchar(x2); putchar(y2); putchar(S_R);
}

void circle(char S_R, int x, int y, int r)
{
  putchar(0x7c); putchar(0x03);
  putchar(x); putchar(y); putchar(r); putchar(S_R);
}


void set_text_position(char x, char y)
{
  putchar(0x7c); putchar(0x18); putchar(x);
  putchar(0x7c); putchar(0x19); putchar(y);
}


void draw_piano()
{
	unsigned char ix=0;
	unsigned char jx=0;

	ET1=0;

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

    putchar(0x7C);
    putchar(0x02);
    putchar(0x7F);
	ET1=1;

}

void draw_drums()
{
	circle(1,17,17,17);
	small_delay(700);
	set_text_position(17,17);
	small_delay(700);
	printf("1");
	small_delay(700);

	circle(1,41,45,16);
	small_delay(700);
	set_text_position(41,45);
	small_delay(700);
	printf("2");
	small_delay(700);

	circle(1,64,17,17);
	small_delay(700);
	set_text_position(64,17);
	small_delay(700);
	printf("3");
	small_delay(700);

	circle(1,86,45,16);
	small_delay(700);
	set_text_position(86,45);
	small_delay(700);
	printf("4");
	small_delay(700);

	circle(1,109,17,17);
	small_delay(700);

	circle(1,109,17,13);
	small_delay(700);

	circle(1,109,17,9);
	small_delay(700);

	circle(1,109,17,5);
	small_delay(700);
}


void small_delay(int x)
{
	int xp=0;
	for(xp=0;xp<x;xp++)
	{
		__asm
		NOP
		__endasm;
	}
}
