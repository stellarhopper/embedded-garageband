#ifndef KEY_MAP_H
#define KEY_MAP_H

#define xmax	4425
#define xmin	1225
#define ymax	3594
#define ymin	1806


//Copy from here
#define square1_xmin	3568
#define square1_xmax	4425
#define square1_ymin	2629
#define square1_ymax	3594

#define square2_xmin	2963
#define square2_xmax	3820
#define square2_ymin	1834
#define square2_ymax	2799

#define square3_xmin	2384
#define square3_xmax	3241
#define square3_ymin	2629
#define square3_ymax	3594

#define square4_xmin	1830
#define square4_xmax	2686
#define square4_ymin	1834
#define square4_ymax	2799

#define square5_xmin	1251
#define square5_xmax	2107
#define square5_ymin	2629
#define square5_ymax	3594

char drum_key_match(int x, int y);
//copy till here


#define ISBETWEEN(B, A, C) ( ((A-B) >= 0) && ((A-C) <= 0) )
#define TRUE 1
#define FALSE 0

#endif
