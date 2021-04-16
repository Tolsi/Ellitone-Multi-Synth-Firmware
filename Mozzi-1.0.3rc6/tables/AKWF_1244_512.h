#ifndef AKWF_1244_512_H_
#define AKWF_1244_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1244_512_NUM_CELLS 512
#define AKWF_1244_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1244_512_DATA [] = {5,
11, 19, 26, 33, 40, 50, 57, 64, 71, 78, 84, 90, 96, 100, 104, 105, 107, 108,
107, 107, 105, 102, 100, 96, 92, 87, 83, 79, 74, 70, 65, 61, 57, 54, 51, 48, 46,
45, 43, 42, 43, 44, 45, 47, 49, 53, 56, 59, 63, 67, 71, 76, 80, 83, 87, 90, 92,
91, 92, 89, 85, 80, 74, 65, 54, 42, 28, 14, -1, -19, -35, -51, -66, -80, -94,
-105, -114, -122, -125, -128, -127, -125, -120, -113, -105, -95, -85, -73, -62,
-51, -38, -27, -17, -8, 2, 10, 17, 22, 27, 32, 35, 38, 39, 41, 41, 41, 42, 42,
41, 40, 39, 39, 37, 37, 35, 33, 32, 31, 29, 28, 26, 25, 23, 22, 19, 17, 14, 12,
10, 6, 4, 1, -2, -6, -8, -12, -15, -18, -21, -23, -25, -27, -29, -30, -32, -32,
-33, -33, -33, -33, -33, -33, -31, -31, -30, -29, -27, -26, -25, -24, -23, -21,
-20, -18, -17, -15, -14, -13, -11, -11, -9, -7, -6, -5, -3, -3, -2, -2, -1, -1,
0, -1, -2, -3, -5, -8, -9, -14, -17, -20, -21, -23, -27, -34, -38, -43, -49,
-54, -59, -62, -67, -69, -71, -71, -70, -68, -66, -61, -55, -47, -40, -31, -21,
-12, -3, 7, 16, 24, 31, 37, 42, 46, 48, 47, 47, 46, 44, 41, 37, 33, 28, 22, 18,
13, 8, 3, -3, -7, -10, -15, -17, -21, -23, -25, -27, -28, -29, -29, -28, -28,
-27, -25, -24, -20, -17, -14, -11, -7, -2, 3, 8, 13, 17, 23, 28, 35, 38, 45, 34,
-12, -20, -14, -13, -9, -7, -3, -2, 3, 5, 8, 10, 13, 15, 18, 20, 22, 24, 26, 26,
28, 30, 31, 32, 34, 34, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 46, 46, 46, 45,
43, 41, 37, 33, 28, 21, 13, 5, -6, -15, -27, -39, -52, -64, -77, -89, -100,
-110, -118, -123, -127, -128, -125, -120, -114, -104, -93, -78, -63, -47, -31,
-14, 3, 20, 34, 48, 59, 71, 79, 84, 89, 92, 92, 90, 86, 82, 75, 69, 60, 52, 44,
35, 26, 19, 11, 5, -2, -8, -13, -16, -20, -23, -25, -25, -28, -26, -26, -23,
-22, -19, -15, -11, -5, 1, 6, 14, 20, 27, 37, 43, 52, 57, 68, 71, 83, 82, 99,
52, -31, -16, -16, -13, -10, -6, -4, -1, 4, 5, 9, 10, 14, 16, 18, 19, 23, 24,
26, 26, 28, 29, 31, 32, 34, 35, 36, 37, 39, 40, 41, 43, 43, 44, 45, 46, 46, 45,
46, 45, 42, 40, 36, 33, 27, 21, 12, 3, -7, -17, -29, -41, -54, -66, -79, -90,
-102, -111, -118, -123, -127, -127, -125, -120, -113, -103, -91, -77, -63, -46,
-29, -12, 4, 21, 36, 49, 62, 71, 80, 86, 90, 91, 92, 89, 85, 80, 74, 67, 59, 51,
42, 34, 25, 18, 10, 3, -3, -8, -13, -18, -21, -23, -25, -27, -27, -26, -26, -24,
-21, -19, -15, -10, -4, 0, };

#endif /* AKWF_1244_512_H_ */