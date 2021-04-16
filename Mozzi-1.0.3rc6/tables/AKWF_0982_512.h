#ifndef AKWF_0982_512_H_
#define AKWF_0982_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0982_512_NUM_CELLS 512
#define AKWF_0982_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0982_512_DATA [] = {1,
3, 6, 9, 12, 16, 19, 21, 23, 25, 27, 29, 31, 32, 34, 36, 36, 37, 38, 39, 41, 43,
45, 47, 49, 51, 54, 58, 62, 65, 70, 74, 78, 82, 87, 91, 96, 100, 104, 108, 112,
116, 118, 122, 123, 125, 126, 127, 127, 127, 127, 127, 126, 125, 124, 124, 123,
120, 119, 118, 116, 113, 112, 110, 107, 105, 103, 101, 99, 96, 93, 90, 86, 83,
78, 74, 68, 62, 58, 52, 46, 40, 34, 28, 21, 16, 10, 3, -1, -7, -11, -15, -20,
-23, -27, -30, -32, -35, -37, -40, -42, -43, -45, -48, -50, -53, -56, -59, -62,
-64, -68, -71, -74, -78, -80, -84, -87, -89, -92, -93, -95, -97, -98, -99, -99,
-101, -100, -101, -102, -101, -102, -102, -101, -103, -102, -102, -101, -102,
-102, -102, -101, -101, -100, -99, -98, -97, -94, -92, -90, -87, -85, -82, -79,
-74, -72, -67, -63, -60, -56, -52, -48, -44, -41, -36, -31, -28, -24, -19, -16,
-12, -8, -5, -2, 2, 5, 8, 10, 12, 15, 17, 19, 20, 22, 23, 24, 25, 25, 26, 27,
28, 28, 30, 30, 30, 31, 31, 31, 32, 31, 32, 31, 30, 30, 29, 28, 27, 25, 24, 22,
21, 18, 17, 17, 16, 15, 13, 13, 14, 14, 14, 15, 15, 16, 16, 17, 18, 19, 18, 17,
18, 17, 16, 15, 12, 12, 9, 8, 6, 4, 2, 1, -1, -1, -1, -1, -2, -1, -2, -1, 0, 1,
1, 2, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 2, 2, 2, 3, 4, 5, 7, 9, 9, 12, 15, 18,
21, 24, 29, 32, 37, 42, 46, 50, 54, 59, 62, 66, 70, 72, 76, 77, 80, 81, 83, 84,
86, 86, 86, 86, 86, 87, 86, 86, 86, 85, 84, 83, 82, 81, 81, 80, 78, 77, 76, 74,
73, 72, 69, 67, 66, 63, 60, 58, 55, 52, 49, 45, 42, 39, 34, 29, 26, 22, 18, 14,
10, 7, 3, -1, -4, -5, -9, -11, -13, -14, -16, -19, -19, -21, -22, -23, -25, -26,
-27, -29, -29, -32, -33, -36, -39, -41, -44, -46, -49, -52, -55, -59, -61, -65,
-67, -68, -70, -73, -74, -75, -76, -77, -77, -76, -75, -76, -74, -74, -73, -73,
-72, -71, -71, -71, -71, -72, -72, -72, -74, -74, -76, -76, -76, -77, -79, -78,
-78, -78, -78, -76, -75, -74, -72, -70, -67, -65, -62, -58, -56, -53, -50, -47,
-44, -42, -40, -38, -37, -35, -33, -32, -31, -30, -28, -27, -27, -26, -25, -24,
-23, -22, -21, -19, -18, -16, -15, -14, -12, -10, -9, -7, -5, -5, -4, -4, -3,
-3, -2, -3, -2, -3, -3, -5, -5, -7, -8, -9, -10, -11, -12, -14, -15, -17, -18,
-18, -20, -22, -23, -23, -24, -24, -24, -25, -25, -25, -24, -24, -22, -21, -21,
-20, -18, -17, -17, -15, -14, -14, -14, -14, -15, -15, -15, -16, -16, -17, -17,
-17, -16, -15, -14, -13, -11, -9, -6, -4, -2, };

#endif /* AKWF_0982_512_H_ */