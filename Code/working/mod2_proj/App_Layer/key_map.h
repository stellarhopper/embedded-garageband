#ifndef KEY_MAP_H
#define KEY_MAP_H

#define xmax	4600 - x_offset
#define xmin	1100 + x_offset
#define ymax	3594
#define ymin	1806

#define x_offset 175
#define y_offset 175

#define black_key_ymin	1600
#define black_key_ymax	2912

#define keyA_xmin 	4407 - x_offset
#define keyA_xmax	4600 - x_offset

#define keyB_xmin	3828 - x_offset
#define keyB_xmax	4021 - x_offset

#define keyC_xmin	3250 - x_offset
#define keyC_xmax	3442 - x_offset

#define keyD_xmin	2671 - x_offset
#define keyD_xmax	2864 - x_offset

#define keyE_xmin	2092 - x_offset
#define keyE_xmax	2285 - x_offset

#define keyF_xmin	1514 - x_offset
#define keyF_xmax	1707 - x_offset

#define key1_xmax	4600 - x_offset
#define key1_xmin	4517 - x_offset

#define key2_xmax	4517 - x_offset
#define key2_xmin	4214 - x_offset

#define key3_xmax	4214 - x_offset
#define key3_xmin	3911 - x_offset

#define key4_xmax	3911 - x_offset
#define key4_xmin	3635 - x_offset

#define key5_xmax	3635 - x_offset
#define key5_xmin	3360 - x_offset

#define key6_xmax	3360 - x_offset
#define key6_xmin	3057 - x_offset

#define key7_xmax	3057 - x_offset
#define key7_xmin	2754 - x_offset

#define key8_xmax	2754 - x_offset
#define key8_xmin	2478 - x_offset

#define key9_xmax	2478 - x_offset
#define key9_xmin	2203 - x_offset

#define key10_xmax	2203 - x_offset
#define key10_xmin	1900 - x_offset

#define key11_xmax	1900 - x_offset
#define key11_xmin	1597 - x_offset

#define key12_xmax	1597 - x_offset
#define key12_xmin	1294 - x_offset

#define key13_xmax	1294 - x_offset
#define key13_xmin	1100 - x_offset


#define ISBETWEEN(B, A, C) ( ((A-B) >= 0) && ((A-C) <= 0) )
#define TRUE 1
#define FALSE 0

char piano_key_match(int x, int y);
char ps2_key_match(char scancode);

static const char valid_scancode[19] = {'q','2','w','3','e','4','r','5','t','6','y','7','u','8','i','9','o','0','p'};

#endif
