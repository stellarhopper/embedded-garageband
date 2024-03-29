
#include <hal_led.h>
#include <hal_assert.h>
#include <hal_board.h>
#include <hal_int.h>
#include "key_map.h"
#include "uart_intfc.h"

char piano_key_match(int x, int y)
{
	unsigned char BLACK_KEY = TRUE;
	unsigned char WHITE_KEY = TRUE;
	char key_note=0;
	char center_note = 0x3C;
	
	if(ISBETWEEN(xmin,x,xmax) && ISBETWEEN(ymin,y,ymax))	//check if it is in logical range of lcd
	{
		if(ISBETWEEN(black_key_ymin ,y ,black_key_ymax))	//check if it is a black key only
		{			
			if(ISBETWEEN(keyA_xmin ,x ,keyA_xmax))			//check is key A is pressed
			{
				key_note=center_note - 16;
			}
			else if(ISBETWEEN(keyB_xmin ,x ,keyB_xmax))		//check is key B is pressed
			{
				key_note=center_note - 10;
			}
			else if(ISBETWEEN(keyC_xmin ,x ,keyC_xmax))		//check is key C is pressed
			{
				key_note=center_note - 4;
			}
			else if(ISBETWEEN(keyD_xmin ,x ,keyD_xmax))		//check is key D is pressed
			{
				key_note=center_note + 2;
			}
			else if(ISBETWEEN(keyE_xmin ,x ,keyE_xmax))		//check is key E is pressed
			{
				key_note=center_note + 8;
			}
			else if(ISBETWEEN(keyF_xmin ,x ,keyF_xmax))		//check is key F is pressed
			{
				key_note=center_note + 14;
			}
			else
			{
				BLACK_KEY = FALSE;
				key_note=0;
				//printf("The key pressed is not a black key\n\r");
			}
		}
		else
		{
                      BLACK_KEY = FALSE;
                      key_note=0;
			//printf("It is definately not a black Key. Check for white key\n\r");
		}
		
		if(BLACK_KEY==FALSE)	//see if black key is already found. WHy take pains to check for white key also.
		{
			if(ISBETWEEN(key1_xmin ,x ,key1_xmax))	//check if white key1 is pressed
			{
				key_note=center_note - 18;
			}
			else if(ISBETWEEN(key2_xmin ,x ,key2_xmax))	//check if white key2 is pressed
			{
				key_note=center_note - 14;
			}
			else if(ISBETWEEN(key3_xmin ,x ,key3_xmax))	//check if white key3 is pressed
			{
				key_note=center_note - 12;
			}
			else if(ISBETWEEN(key4_xmin ,x ,key4_xmax))	//check if white key4 is pressed
			{
				key_note=center_note - 8;
			}
			else if(ISBETWEEN(key5_xmin ,x ,key5_xmax))	//check if white key5 is pressed
			{
				key_note=center_note - 6;
			}
			else if(ISBETWEEN(key6_xmin ,x ,key6_xmax))	//check if white key6 is pressed
			{
				key_note=center_note - 2;
			}
			else if(ISBETWEEN(key7_xmin ,x ,key7_xmax))	//check if white key7 is pressed
			{
				key_note=center_note;
			}
			else if(ISBETWEEN(key8_xmin ,x ,key8_xmax))	//check if white key8 is pressed
			{
				key_note=center_note + 4;
			}
			else if(ISBETWEEN(key9_xmin ,x ,key9_xmax))	//check if white key9 is pressed
			{
				key_note=center_note + 6;
			}
			else if(ISBETWEEN(key10_xmin ,x ,key10_xmax))	//check if white key10 is pressed
			{
				key_note=center_note + 10;
			}
			else if(ISBETWEEN(key11_xmin ,x ,key11_xmax))	//check if white key11 is pressed
			{
				key_note=center_note + 12;
			}
			else if(ISBETWEEN(key12_xmin ,x ,key12_xmax))	//check if white key12 is pressed
			{
				key_note=center_note + 16;
			}
			else if(ISBETWEEN(key13_xmin ,x ,key13_xmax))	//check if white key13 is pressed
			{
				key_note=center_note + 18;
			}
			else 	//touched within bounds. NO white key. No black key. SO what the hell is detected???
			{
				WHITE_KEY=FALSE;
				key_note=0;
			}
		}
		else	//white key check ELSE
		{
			WHITE_KEY=FALSE;
			//printf("Not checking for white key. Black key already detected in the previous check\n\r");
		}		//END of white key check
	}	
	else	//bound check else
	{
		BLACK_KEY=FALSE;
		WHITE_KEY=FALSE;
		//printf("Data is out of Bounds. X = %d   Y = %d\n\r\n\r",x,y);
		key_note=0;
	}//end of bound check

        tx0_send(&key, 1);
	return key;
}




char ps2_key_match(char scancode)
{
	char i=0;
	char keynote=0;
	char base_keynote = 3C-18;
	
	for(i=0;i<19;i++)
	{
		if(scancode == valid_scancode[i])
		{
			keynote = base_keynote + (i*2);
			break;
		}
	}
	return keynote;
}