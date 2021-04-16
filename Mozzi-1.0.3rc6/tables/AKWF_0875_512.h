#ifndef AKWF_0875_512_H_
#define AKWF_0875_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0875_512_NUM_CELLS 512
#define AKWF_0875_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0875_512_DATA [] = {0,
1, 3, 3, 5, 7, 9, 10, 12, 15, 18, 20, 22, 25, 27, 30, 33, 35, 40, 42, 46, 49,
53, 57, 60, 63, 64, 66, 69, 70, 72, 73, 74, 75, 78, 80, 82, 84, 86, 88, 91, 92,
94, 95, 96, 98, 98, 99, 100, 102, 105, 105, 104, 104, 103, 102, 101, 101, 102,
102, 103, 104, 108, 110, 112, 114, 116, 119, 121, 121, 124, 125, 126, 127, 127,
127, 127, 127, 126, 126, 125, 122, 121, 119, 115, 111, 109, 105, 101, 97, 95,
91, 87, 84, 81, 78, 75, 72, 70, 66, 63, 61, 57, 54, 52, 49, 46, 43, 39, 37, 34,
31, 28, 25, 23, 20, 18, 15, 11, 9, 6, 3, 1, -3, -6, -8, -11, -14, -17, -20, -24,
-27, -30, -34, -38, -42, -46, -50, -54, -57, -60, -63, -66, -69, -71, -72, -75,
-77, -79, -81, -82, -85, -87, -89, -92, -94, -95, -97, -98, -100, -100, -101,
-101, -101, -100, -99, -99, -98, -97, -96, -94, -93, -93, -91, -90, -89, -88,
-87, -86, -84, -84, -84, -83, -81, -80, -79, -77, -76, -75, -73, -72, -71, -70,
-70, -68, -68, -67, -66, -65, -65, -64, -62, -61, -59, -58, -57, -54, -52, -51,
-49, -48, -46, -44, -43, -42, -40, -38, -37, -36, -34, -32, -31, -30, -27, -26,
-24, -23, -21, -19, -17, -15, -13, -11, -9, -6, -4, -2, -1, 1, 2, 4, 5, 6, 7, 7,
9, 10, 12, 13, 14, 14, 17, 19, 20, 21, 23, 25, 26, 26, 27, 28, 28, 30, 30, 31,
32, 33, 34, 35, 37, 38, 40, 43, 44, 46, 47, 48, 50, 51, 50, 50, 52, 53, 53, 53,
54, 55, 55, 56, 58, 58, 58, 59, 60, 62, 62, 64, 65, 67, 68, 69, 69, 70, 70, 69,
69, 68, 66, 64, 62, 60, 58, 55, 52, 48, 46, 43, 39, 36, 33, 28, 24, 21, 17, 14,
10, 8, 5, 3, 1, -1, -4, -6, -8, -9, -11, -13, -14, -16, -17, -19, -19, -19, -19,
-20, -19, -19, -19, -19, -20, -21, -21, -22, -22, -22, -23, -23, -25, -25, -24,
-26, -27, -26, -27, -27, -27, -28, -27, -28, -28, -29, -30, -31, -32, -33, -35,
-36, -37, -39, -39, -41, -42, -43, -44, -46, -46, -48, -48, -50, -50, -51, -52,
-53, -55, -56, -57, -57, -59, -59, -59, -60, -61, -61, -63, -63, -63, -63, -64,
-65, -65, -65, -65, -66, -66, -66, -66, -66, -66, -65, -64, -63, -63, -62, -60,
-59, -58, -57, -56, -55, -53, -52, -51, -51, -49, -49, -49, -47, -47, -46, -45,
-44, -43, -42, -40, -39, -38, -37, -35, -35, -33, -32, -31, -29, -28, -26, -23,
-22, -21, -19, -17, -15, -14, -12, -11, -10, -10, -9, -9, -9, -8, -9, -8, -9,
-8, -7, -7, -7, -6, -6, -6, -6, -8, -7, -9, -9, -10, -10, -10, -10, -10, -9, -9,
-9, -9, -9, -8, -8, -9, -9, -9, -9, -10, -10, -8, -9, -7, -5, -5, -4, -2, -1, 0,
};

#endif /* AKWF_0875_512_H_ */