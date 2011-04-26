#ifndef KEY_MAP_H
#define KEY_MAP_H

#define xmax	4600
#define xmin	1100
#define ymax	3800
#define ymin	1600

#define black_key_ymin	1600
#define black_key_ymax	2961

#define keyA_xmin 	4407
#define keyA_xmax	4600	

#define keyB_xmin	3828
#define keyB_xmax	4021

#define keyC_xmin	3250
#define keyC_xmax	3442

#define keyD_xmin	2671
#define keyD_xmax	2864

#define keyE_xmin	2092
#define keyE_xmax	2285

#define keyF_xmin	1514
#define keyF_xmax	1707

#define key1_xmax	4600
#define key1_xmin	4517

#define key2_xmax	4517
#define key2_xmin	4214

#define key3_xmax	4214
#define key3_xmin	3911

#define key4_xmax	3911
#define key4_xmin	3635

#define key5_xmax	3635
#define key5_xmin	3360

#define key6_xmax	3360
#define key6_xmin	3057

#define key7_xmax	3057
#define key7_xmin	2754

#define key8_xmax	2754	
#define key8_xmin	2478

#define key9_xmax	2478
#define key9_xmin	2203

#define key10_xmax	2203
#define key10_xmin	1900

#define key11_xmax	1900
#define key11_xmin	1597

#define key12_xmax	1597
#define key12_xmin	1294

#define key13_xmax	1294
#define key13_xmin	1100


#define ISBETWEEN(B, A, C) ( ((A-B) >= 0) && ((A-C) <= 0) )
#define TRUE 1
#define FALSE 0

char piano_key_match(int x, int y);
char ps2_key_match(char scancode);
char valid_scancode[19] = {'q','2','w','3','e','4','r','5','t','6','y','7','u','8','i','9','o','0','p'};

#endif
