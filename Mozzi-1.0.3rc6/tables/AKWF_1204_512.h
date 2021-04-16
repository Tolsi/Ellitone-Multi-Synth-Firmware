#ifndef AKWF_1204_512_H_
#define AKWF_1204_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1204_512_NUM_CELLS 512
#define AKWF_1204_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1204_512_DATA [] = {1,
11, 21, 32, 43, 53, 64, 74, 82, 90, 95, 100, 105, 109, 112, 115, 117, 119, 121,
122, 123, 124, 125, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 126, 125, 125, 124, 122, 121, 120, 117, 114, 110,
106, 100, 94, 86, 79, 71, 65, 60, 54, 51, 47, 44, 42, 40, 38, 37, 35, 34, 33,
32, 31, 29, 29, 27, 25, 24, 22, 21, 18, 16, 13, 11, 8, 4, 1, -3, -8, -13, -18,
-22, -27, -33, -37, -41, -46, -49, -52, -53, -56, -56, -55, -55, -53, -49, -44,
-39, -34, -30, -26, -23, -21, -21, -19, -19, -19, -19, -20, -21, -21, -22, -22,
-23, -25, -25, -26, -26, -26, -28, -29, -29, -30, -30, -31, -31, -32, -33, -33,
-34, -35, -35, -36, -36, -37, -38, -39, -39, -41, -43, -44, -47, -49, -53, -56,
-61, -67, -74, -81, -88, -93, -98, -102, -106, -108, -110, -110, -110, -109,
-108, -107, -104, -101, -98, -95, -91, -87, -84, -80, -76, -71, -68, -65, -62,
-60, -58, -56, -54, -52, -51, -50, -48, -47, -47, -46, -45, -44, -43, -42, -41,
-38, -38, -35, -32, -29, -25, -20, -14, -8, -1, 7, 14, 19, 24, 28, 32, 34, 36,
38, 38, 40, 40, 42, 42, 42, 43, 43, 43, 42, 43, 42, 43, 43, 43, 43, 43, 43, 42,
42, 42, 41, 41, 40, 39, 38, 37, 37, 35, 34, 33, 30, 28, 25, 21, 16, 11, 5, -4,
-13, -24, -34, -44, -57, -67, -76, -83, -91, -97, -102, -106, -109, -113, -115,
-117, -119, -121, -123, -123, -123, -125, -126, -126, -126, -127, -128, -128,
-127, -128, -128, -128, -128, -128, -128, -128, -127, -127, -126, -126, -126,
-126, -125, -123, -121, -121, -119, -116, -114, -109, -104, -99, -93, -84, -78,
-71, -64, -59, -54, -50, -47, -44, -42, -40, -38, -37, -35, -34, -33, -32, -30,
-30, -28, -27, -25, -24, -22, -20, -19, -16, -14, -10, -8, -3, 0, 4, 9, 14, 19,
24, 28, 33, 38, 43, 47, 50, 53, 54, 56, 56, 55, 54, 51, 47, 43, 39, 33, 29, 25,
23, 21, 20, 20, 19, 19, 19, 20, 20, 21, 22, 22, 23, 23, 25, 26, 27, 27, 29, 29,
29, 30, 31, 31, 32, 32, 33, 33, 34, 35, 35, 36, 37, 38, 38, 39, 40, 41, 43, 44,
47, 49, 54, 57, 63, 68, 75, 83, 89, 94, 99, 103, 106, 108, 109, 110, 110, 109,
107, 106, 104, 101, 98, 95, 90, 86, 82, 79, 75, 71, 67, 65, 61, 59, 57, 56, 54,
52, 51, 50, 49, 48, 46, 46, 45, 44, 43, 41, 40, 39, 37, 34, 32, 28, 25, 19, 13,
6, -1, -8, -15, -20, -25, -29, -32, -35, -36, -38, -39, -40, -40, -41, -41, -42,
-42, -43, -43, -43, -43, -43, -43, -43, -42, -42, -43, -42, -42, -42, -41, -40,
-41, -40, -39, -39, -38, -36, -35, -33, -32, -30, -27, -23, -20, -15, -10, -2,
};

#endif /* AKWF_1204_512_H_ */
