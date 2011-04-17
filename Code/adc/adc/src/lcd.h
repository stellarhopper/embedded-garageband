/*
 * lcd.h
 *
 *  Created on: Mar 27, 2011
 *      Author: maulik
 */

#ifndef LCD_H_
#define LCD_H_

#define LCD_CHAR_WIDTH 16
#define LCD_CHAR_HEIGHT 4

#define LCD_RW P1_3
#define LCD_RS P1_2

#define DATA_RS 1
#define COMMAND_RS 0

#define WRITE_RW 0
#define READ_RW 1

#define LCD_BUSY P0_7
#define LCD_ADDR 0xF000
#define LCD_DATA_PTR *lcdPtr

#define LCD_CLR 0x01
#define LCDHOME 0x80

#define LCD_0_OFFSET 0x00
#define LCD_1_OFFSET 0x40
#define LCD_2_OFFSET 0x10
#define LCD_3_OFFSET 0x50

#define LINE_0_START 0x80
#define LINE_0_END 0x8F

#define LINE_1_START 0xC0
#define LINE_1_END 0xCF

#define LINE_2_START 0x90
#define LINE_2_END 0x9F

#define LINE_3_START 0xD0
#define LINE_3_END 0xDF

void init_lcd(void);
void lcd_put_command(char byte_wr_cmd);
void lcdbusywait(void);
void lcdgotoaddr (unsigned char ddram_add);
void lcdgotoxy (unsigned char row, unsigned char col);
void lcdputstr (char *disp_str);
void lcdputch (char byte_wr);
void clear_lcd ();
void go_to_home ();
void print_line_lcd(unsigned int row, char *disp_str);
void clear_line(unsigned int line);


volatile unsigned int *lcdPtr = (unsigned int*)(LCD_ADDR);
unsigned char start_busy_chk = 0;
unsigned char cursor_position = LCDHOME | LCD_0_OFFSET;


#endif /* LCD_H_ */
