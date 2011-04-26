#ifndef KEY_MAP_H
#define KEY_MAP_H

#define xmax	4425
#define xmin	1225
#define ymax	3594
#define ymin	1806

#define black_key_ymin	1806
#define black_key_ymax	2912

#define keyA_xmin 	4284
#define keyA_xmax	4425	

#define keyB_xmin	3719
#define keyB_xmax	3896

#define keyC_xmin	3190
#define keyC_xmax	3367

#define keyD_xmin	2661
#define keyD_xmax	2838

#define keyE_xmin	2132
#define keyE_xmax	2309

#define keyF_xmin	1603
#define keyF_xmax	1780

#define key1_xmax	4425
#define key1_xmin	4349

#define key2_xmax	4349
#define key2_xmin	4072

#define key3_xmax	4072
#define key3_xmin	3795

#define key4_xmax	3795
#define key4_xmin	3543

#define key5_xmax	3543
#define key5_xmin	3291

#define key6_xmax	3291
#define key6_xmin	3014

#define key7_xmax	3014
#define key7_xmin	2737

#define key8_xmax	2737	
#define key8_xmin	2485

#define key9_xmax	2485
#define key9_xmin	2233

#define key10_xmax	2233
#define key10_xmin	1956

#define key11_xmax	1956
#define key11_xmin	1679

#define key12_xmax	1679
#define key12_xmin	1402

#define key13_xmax	1402
#define key13_xmin	1225


#define ISBETWEEN(B, A, C) ( ((A-B) >= 0) && ((A-C) <= 0) )
#define TRUE 1
#define FALSE 0

char piano_key_match(int x, int y);
char ps2_key_match(char scancode);
char valid_scancode[19] = {'q','2','w','3','e','4','r','5','t','6','y','7','u','8','i','9','o','0','p'};

#endif
