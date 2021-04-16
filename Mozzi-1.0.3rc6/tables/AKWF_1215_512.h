#ifndef AKWF_1215_512_H_
#define AKWF_1215_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1215_512_NUM_CELLS 512
#define AKWF_1215_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1215_512_DATA [] = {0,
1, 3, 3, 4, 7, 7, 10, 12, 14, 17, 21, 24, 27, 32, 37, 42, 48, 54, 60, 66, 74,
79, 82, 87, 94, 101, 106, 112, 117, 121, 124, 127, 127, 127, 127, 126, 124, 120,
115, 111, 104, 98, 91, 83, 76, 67, 58, 50, 41, 32, 24, 16, 8, 1, -7, -14, -21,
-27, -33, -39, -44, -48, -52, -56, -60, -63, -66, -68, -71, -73, -74, -77, -77,
-79, -80, -80, -81, -81, -81, -81, -81, -80, -79, -78, -78, -77, -76, -75, -73,
-71, -70, -68, -66, -65, -62, -60, -57, -56, -55, -52, -50, -48, -45, -44, -42,
-39, -37, -35, -33, -32, -29, -28, -27, -24, -23, -22, -20, -18, -17, -15, -14,
-12, -10, -9, -8, -7, -7, -4, -4, -2, -2, -1, 0, 1, 3, 3, 4, 5, 5, 6, 6, 7, 8,
8, 8, 9, 9, 10, 10, 10, 11, 11, 11, 12, 11, 12, 11, 11, 12, 12, 12, 12, 12, 12,
12, 12, 12, 13, 12, 13, 13, 13, 13, 12, 12, 13, 12, 12, 11, 11, 12, 11, 11, 11,
10, 10, 10, 10, 11, 10, 10, 10, 9, 10, 9, 9, 9, 8, 8, 7, 8, 8, 7, 7, 8, 8, 6, 6,
6, 6, 6, 5, 5, 5, 5, 4, 4, 5, 4, 3, 5, 4, 3, 3, 2, 3, 3, 3, 2, 2, 2, 1, 2, 2, 1,
1, 1, 1, 1, 1, 1, 0, 1, 1, 0, -1, -1, -1, -1, 0, -1, -1, -2, -1, -1, -1, -2, -2,
-2, -1, -2, -2, -2, -2, -3, -2, -3, -2, -3, -2, -2, -3, -2, -2, -3, -3, -3, -3,
-3, -3, -2, -3, -3, -3, -3, -3, -3, -2, -2, -3, -2, -3, -3, -3, -2, -2, -2, -2,
-2, -2, -3, -2, -2, -1, -2, -1, -1, -1, -2, -1, -1, -1, -2, -1, -1, -1, 0, 0, 0,
1, 0, 0, -1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 3, 2,
2, 2, 2, 2, 2, 3, 2, 3, 3, 2, 2, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 1,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1,
0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -2, -2, -1, -1, -2, -1, -2, -3, -2,
-2, -3, -3, -3, -3, -3, -3, -4, -4, -4, -3, -4, -5, -5, -4, -4, -5, -5, -5, -6,
-5, -5, -5, -5, -5, -5, -6, -6, -7, -6, -6, -7, -7, -7, -7, -8, -7, -7, -7, -8,
-8, -9, -10, -9, -9, -10, -10, -10, -10, -10, -10, -11, -10, -10, -10, -11, -11,
-10, -11, -11, -11, -10, -11, -10, -10, -10, -10, -9, -10, -9, -8, -9, -8, -7,
-7, -6, -6, -6, -5, -5, -4, -5, -4, -4, -3, -3, -1, -2, 0, -1, };

#endif /* AKWF_1215_512_H_ */
