#ifndef KEY_MAP_H
#define KEY_MAP_H

#define xmax	4425
#define xmin	1225
#define ymax	3594
#define ymin	1806


#define string1_ymax	3480
#define string1_ymin	3253

#define string2_ymax	3168
#define string2_ymin	2969
	
#define string3_ymax	2884
#define string3_ymin	2685

#define string4_ymax	2572
#define string4_ymin	2402

#define string5_ymax	2316
#define string5_ymin	2146
	
#define string6_ymax	2061
#define string6_ymin	1891


#define ISBETWEEN(B, A, C) ( ((A-B) >= 0) && ((A-C) <= 0) )
#define TRUE 1
#define FALSE 0

char guitar_key_match(int x, int y);

#endif
