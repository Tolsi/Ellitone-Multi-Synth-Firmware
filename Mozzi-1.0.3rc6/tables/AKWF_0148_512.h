#ifndef AKWF_0148_512_H_
#define AKWF_0148_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0148_512_NUM_CELLS 512
#define AKWF_0148_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0148_512_DATA [] = {0,
-1, 0, 1, 2, 2, 4, 3, 5, 5, 6, 8, 9, 11, 12, 13, 14, 14, 15, 16, 17, 19, 20, 21,
22, 21, 23, 24, 25, 26, 28, 29, 31, 31, 32, 31, 34, 34, 34, 33, 32, 31, 30, 28,
28, 26, 25, 23, 21, 19, 17, 13, 12, 9, 7, 7, 5, 4, 4, 4, 3, 3, 3, 2, 3, 4, 5, 6,
7, 8, 10, 13, 15, 15, 16, 17, 19, 19, 19, 19, 19, 20, 20, 22, 24, 25, 25, 26,
27, 28, 30, 32, 34, 37, 39, 41, 44, 47, 49, 53, 56, 58, 61, 65, 66, 70, 73, 75,
76, 79, 80, 80, 81, 81, 81, 81, 80, 81, 80, 79, 77, 75, 72, 71, 68, 65, 63, 60,
56, 53, 50, 47, 44, 40, 37, 34, 30, 26, 24, 21, 19, 16, 13, 11, 9, 7, 4, 2, 0,
-2, -5, -6, -8, -9, -8, -8, -8, -6, -5, -4, -2, -1, 1, 3, 5, 7, 9, 12, 14, 16,
18, 19, 21, 23, 25, 26, 28, 28, 31, 33, 36, 39, 43, 46, 50, 55, 59, 63, 67, 71,
77, 82, 88, 94, 99, 105, 112, 116, 120, 123, 126, 127, 127, 127, 127, 127, 126,
123, 120, 116, 111, 106, 98, 89, 81, 70, 61, 51, 40, 30, 20, 10, -1, -10, -20,
-28, -37, -45, -54, -63, -70, -79, -86, -93, -98, -104, -108, -110, -112, -114,
-115, -117, -117, -117, -116, -115, -113, -111, -109, -107, -103, -100, -96,
-91, -87, -82, -78, -73, -67, -61, -55, -49, -42, -35, -28, -22, -13, -5, 3, 10,
18, 25, 32, 39, 47, 55, 62, 69, 76, 80, 84, 89, 91, 94, 96, 96, 98, 97, 96, 97,
95, 94, 92, 89, 87, 84, 79, 76, 71, 66, 62, 57, 51, 45, 39, 30, 23, 14, 6, -3,
-12, -20, -27, -36, -42, -50, -57, -64, -70, -75, -81, -85, -91, -95, -99, -104,
-106, -109, -111, -112, -114, -116, -117, -117, -115, -114, -112, -108, -105,
-99, -94, -89, -85, -80, -73, -66, -58, -52, -46, -39, -33, -27, -22, -17, -12,
-5, 1, 5, 10, 13, 17, 21, 25, 28, 31, 32, 35, 36, 37, 38, 40, 41, 42, 42, 42,
42, 42, 43, 44, 44, 45, 45, 46, 47, 47, 47, 45, 43, 42, 40, 37, 35, 33, 30, 28,
25, 19, 14, 8, 4, -2, -8, -13, -17, -23, -28, -34, -40, -45, -53, -58, -62, -67,
-73, -78, -82, -87, -92, -95, -101, -104, -108, -111, -115, -116, -118, -118,
-119, -117, -116, -116, -115, -115, -113, -112, -111, -110, -108, -107, -105,
-103, -101, -99, -98, -95, -93, -90, -89, -86, -85, -84, -82, -81, -79, -76,
-73, -70, -66, -62, -59, -55, -51, -48, -43, -38, -33, -30, -27, -23, -20, -17,
-15, -13, -11, -10, -9, -9, -7, -7, -5, -3, -3, -1, -1, 0, 0, 0, 0, -1, 0, -1,
0, -1, -1, 0, 0, 0, -1, 1, 0, 0, 1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 1, };

#endif /* AKWF_0148_512_H_ */