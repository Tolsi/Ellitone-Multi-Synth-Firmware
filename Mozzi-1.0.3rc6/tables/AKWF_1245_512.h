#ifndef AKWF_1245_512_H_
#define AKWF_1245_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1245_512_NUM_CELLS 512
#define AKWF_1245_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1245_512_DATA [] = {8,
23, 34, 45, 56, 65, 72, 79, 85, 90, 93, 96, 98, 100, 101, 102, 102, 101, 102,
102, 101, 100, 99, 98, 96, 95, 94, 91, 87, 83, 79, 74, 68, 60, 51, 42, 31, 20,
9, -5, -18, -30, -44, -56, -68, -78, -86, -92, -97, -100, -100, -98, -94, -87,
-80, -71, -61, -49, -39, -26, -12, 3, 15, 24, 33, 40, 47, 52, 56, 58, 60, 62,
61, 61, 59, 59, 57, 54, 52, 50, 48, 45, 44, 41, 40, 38, 37, 37, 36, 36, 35, 35,
35, 34, 35, 35, 34, 34, 33, 32, 30, 29, 28, 26, 23, 21, 17, 14, 11, 8, 4, 0, -3,
-6, -9, -11, -14, -16, -18, -19, -20, -20, -19, -20, -19, -18, -17, -16, -14,
-14, -12, -11, -9, -8, -7, -7, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -4,
-3, -3, -3, -3, -2, 1, 1, 3, 5, 7, 10, 12, 13, 17, 18, 21, 23, 25, 27, 27, 28,
28, 26, 24, 22, 18, 13, 8, 2, -3, -11, -17, -25, -32, -38, -45, -50, -55, -58,
-62, -63, -62, -63, -61, -57, -53, -49, -44, -38, -32, -26, -19, -13, -7, -2, 4,
9, 13, 18, 20, 23, 27, 28, 31, 32, 33, 33, 35, 34, 33, 31, 31, 28, 26, 22, 19,
14, 10, 4, -2, -8, -15, -22, -29, -36, -45, -51, -60, -64, -73, -74, -81, -79,
-89, -36, 10, -8, 4, 4, 10, 12, 16, 20, 23, 24, 26, 28, 28, 30, 29, 29, 27, 27,
24, 24, 22, 19, 17, 16, 13, 13, 10, 9, 7, 6, 6, 6, 5, 6, 7, 9, 10, 12, 15, 18,
22, 26, 30, 35, 39, 44, 50, 55, 59, 64, 68, 71, 73, 73, 72, 70, 67, 61, 52, 43,
31, 18, 4, -9, -25, -39, -53, -66, -79, -89, -97, -102, -107, -107, -107, -105,
-99, -93, -87, -77, -68, -59, -49, -38, -28, -18, -8, 0, 9, 17, 24, 30, 36, 41,
46, 49, 52, 54, 55, 56, 56, 56, 56, 53, 50, 48, 44, 39, 33, 28, 21, 12, 4, -5,
-16, -26, -37, -49, -60, -71, -82, -91, -103, -108, -119, -120, -127, -54, 7,
-8, 5, 4, 11, 12, 17, 19, 23, 25, 26, 27, 30, 30, 30, 29, 28, 27, 25, 23, 22,
20, 17, 15, 13, 12, 10, 8, 6, 7, 6, 6, 6, 5, 7, 9, 10, 12, 15, 17, 22, 26, 31,
35, 41, 46, 51, 55, 59, 64, 69, 70, 73, 74, 73, 69, 65, 60, 51, 41, 30, 17, 3,
-12, -26, -40, -55, -67, -79, -90, -97, -103, -106, -107, -107, -104, -100, -92,
-86, -77, -67, -58, -47, -37, -27, -17, -8, 2, 10, 18, 26, 31, 37, 41, 46, 49,
53, 54, 56, 56, 57, 56, 55, 53, 51, 47, 43, 38, 33, 26, 20, 11, 2, -8, -17, -28,
-38, -49, -61, -73, -83, -94, -103, -111, -118, -123, -127, -128, -127, -126,
-120, -114, -105, -95, -84, -71, -56, -43, -29, -13, -2, };

#endif /* AKWF_1245_512_H_ */
