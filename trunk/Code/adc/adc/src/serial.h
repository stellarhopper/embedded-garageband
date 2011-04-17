#ifndef SERIAL_H_
#define SERIAL_H_


#define BAUD_115200 0xFD
#define BAUD_57600 0xFB
#define BAUD_19200 0xF4
#define BAUD_9600 0xE8

#define MYTXD P1.4

void serial_init(unsigned char my_baud);
void print_welcome_msg(void);
void clear_screen(void);
void putchar (char c);
char getchar ();
int putstr (char *s);
void bit_bang_tx(char txchar);

#endif /*SERIAL_H_*/
