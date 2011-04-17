/*
 * lcd.c
 *
 *  Created on: Mar 27, 2011
 *      Author: maulik
 */

#include "myproject.h"


/*
* FUNCTION      :       init_lcd()
* PURPOSE       :       Initializes LCD
* ACCEPTS       :       None
* RETURNS       :       None
* NOTES         :   	Initializes LCD
*/
void init_lcd(void)                                     // Init routine as per HD44780 data sheet
{
    LCD_RS = COMMAND_RS;                                // RS = 0
    LCD_RW = WRITE_RW;                                  // RW = 0

    delay_millisec(16);                                 // Wait more than 15ms
    lcd_put_command(0x38);                              // Initialize for 8 bit , 2 line
    delay_millisec(5);                                  // Wait more than 4.1ms
    lcd_put_command(0x38);
    delay_millisec(1);                                  // Wait more than 0.1ms
    lcd_put_command(0x38);
    delay_millisec(1);                                  // Wait more than 0.1ms
    lcd_put_command(0x0D);                              // Display On; Cursor Off; Blink on
    lcd_put_command(0x01);                              // Clear the display

    delay_millisec(5);                                  // Wait more than 1.64ms
    start_busy_chk = TRUE;
}


/*
* FUNCTION      :       lcdbusywait()
* PURPOSE       :       checks busy signal
* ACCEPTS       :       None
* RETURNS       :       None
* NOTES         :   	checks the busy signal and spins in a while loop
*/
/*==============================================*/
void lcdbusywait(void)
{
  volatile unsigned char busy_byte_read = 0;

  if (start_busy_chk == TRUE)
    {
          P0 = 0xFF ;                                  // Set port as input
          LCD_RS   = COMMAND_RS;
          LCD_RW   = READ_RW;
          do
            {
                busy_byte_read = LCD_DATA_PTR;
            }while (busy_byte_read & 0x80);
    }
}


/*
* FUNCTION      :       lcdputcommand()
* PURPOSE       :       writes byte on LCD
* ACCEPTS       :       byte to write
* RETURNS       :       None
* NOTES         :   	writes byte on LCD
*/
/*==============================================*/
/*================================================*/
void lcd_put_command(char byte_wr_cmd)                             // Write a command to the LCD.
{
    lcdbusywait();                              // Is the LCD ready to take the command?
    LCD_RS = COMMAND_RS;                        // Register Select Low for writing command
    LCD_RW = WRITE_RW;                              // R!W low for write
    LCD_DATA_PTR = byte_wr_cmd;                               // Command byte to register
    LCD_RS   = COMMAND_RS;
    LCD_RW   = READ_RW;
}




/*
* FUNCTION      :       lcdputch()
* PURPOSE       :       char to write
* ACCEPTS       :       None
* RETURNS       :       None
* NOTES         :   	writes a char on LCD display
*/
/*==============================================*/
/*=============================================*/
void lcdputch(char byte_wr)                                                      // Write a character to the LCD.
{
    lcdbusywait();                                      // Is the LCD ready to take the command?
    LCD_RS = DATA_RS;                                   // Register Select High for writing data
    LCD_RW = WRITE_RW;                                  // R!W low for write
    LCD_DATA_PTR = byte_wr;                             // Data byte to data port

    switch (cursor_position)
      {
        case LINE_0_END:
          {
              lcd_put_command(LINE_1_START);
              cursor_position = LINE_1_START;
              break;
          }

        case LINE_1_END:
          {
              lcd_put_command(LINE_2_START);
              cursor_position = LINE_2_START;
              break;
          }

        case LINE_2_END:
          {
              lcd_put_command(LINE_3_START);
              cursor_position = LINE_3_START;
              break;
          }

        case LINE_3_END:
          {
              lcd_put_command(LINE_0_START);
              cursor_position = LINE_0_START;
              break;
          }

        default:
          {
              cursor_position++;
              break;
          }
      }

    //printf("cursor_position = %x\n\r", cursor_position);
    LCD_RS   = COMMAND_RS;
    LCD_RW   = READ_RW;
}


/*
* FUNCTION      :       lcdputstr()
* PURPOSE       :       string to write
* ACCEPTS       :       None
* RETURNS       :       None
* NOTES         :   	writes a string on LCD display
*/
/*==============================================*/
/*=============================================*/
void lcdputstr (char *disp_str)                   // Write the 2 line message to LCD
{
        int i;
        for (i=0; disp_str[i]!='\0' ; i++)
                lcdputch(disp_str[i]);
}




/*
* FUNCTION      :       print_line_lcd()
* PURPOSE       :       prints data on a specific line
* ACCEPTS       :       Line to print and the string data
* RETURNS       :       None
* NOTES         :   	None
*/
/*=============================================*/
void print_line_lcd(unsigned int row, char *disp_str)
{
        if (row <= 3)
          {
                lcdgotoxy(row,0);

                if ( (strlen(disp_str)-1) > LCD_CHAR_WIDTH )
                    disp_str[LCD_CHAR_WIDTH] = 0;


                lcdputstr(disp_str);
          }
}






/*
* FUNCTION      :       lcdgotoaddr()
* PURPOSE       :       jumps cursor to an address
* ACCEPTS       :       ddram address
* RETURNS       :       None
* NOTES         :   	None
*/

/*=============================================*/
void lcdgotoaddr (unsigned char ddram_add)
{
        if(ddram_add < 0x80)
          {
                lcdbusywait();
                lcd_put_command(LCDHOME + ddram_add);
                cursor_position = LCDHOME + ddram_add;
          }
}



/*
* FUNCTION      :       lcdgotoxy()
* PURPOSE       :       jumps cursor to an address (x,y)
* ACCEPTS       :       row and col
* RETURNS       :       None
* NOTES         :   	None
*/
/*=============================================*/
void lcdgotoxy (unsigned char row, unsigned char col)
{
        if((row < 4) && (col < 0x10))
          {
                switch (row)
                  {
                        case 0: lcdgotoaddr(LCD_0_OFFSET + col); break;
                        case 1: lcdgotoaddr(LCD_1_OFFSET + col); break;
                        case 2: lcdgotoaddr(LCD_2_OFFSET + col); break;
                        case 3: lcdgotoaddr(LCD_3_OFFSET + col); break;
                        default: lcdgotoaddr(LCDHOME);
                  }
          }
}


/*
* FUNCTION      :       go_to_home()
* PURPOSE       :       jumps to home position
* ACCEPTS       :       NONE
* RETURNS       :       None
* NOTES         :   	None
*/
/*=============================================*/
void go_to_home ()
{
        lcd_put_command(LCDHOME);                                                                        //-- cursor go to 0x00
        cursor_position = LCDHOME;
}





/*
* FUNCTION      :       clear_lcd()
* PURPOSE       :       clears the LCD
* ACCEPTS       :       NONE
* RETURNS       :       None
* NOTES         :   	None
*/
/*==============================================*/
void clear_lcd ()
{
        lcd_put_command(LCD_CLR);                                                                       //-- clear LCD display
        lcd_put_command(LCDHOME);                                                                        //-- cursor go to 0x00
        cursor_position = LINE_0_START;
        delay_millisec(5);
}


/*
* FUNCTION      :       clear_line()
* PURPOSE       :       clears a particular line
* ACCEPTS       :       line to be cleared
* RETURNS       :       None
* NOTES         :   	None
*/
/*=============================================*/
void clear_line(unsigned int line)
{
        if (line <= 3)
          {
                print_line_lcd(line,"                ");
                lcdgotoxy(line,0);
          }
}



