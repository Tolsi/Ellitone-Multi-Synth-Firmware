#ifndef AKWF_1303_512_H_
#define AKWF_1303_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1303_512_NUM_CELLS 512
#define AKWF_1303_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1303_512_DATA [] = {0,
1, 3, 4, 4, 6, 7, 7, 8, 9, 11, 12, 13, 16, 16, 18, 18, 21, 21, 23, 24, 25, 27,
28, 29, 30, 31, 32, 33, 34, 35, 37, 37, 39, 39, 40, 41, 42, 43, 43, 45, 44, 45,
46, 46, 46, 48, 47, 48, 48, 48, 49, 49, 50, 51, 51, 52, 52, 52, 53, 52, 52, 52,
52, 51, 51, 52, 51, 51, 50, 51, 50, 50, 50, 50, 49, 49, 49, 48, 49, 48, 48, 47,
48, 47, 48, 47, 48, 48, 48, 48, 48, 49, 49, 48, 49, 50, 50, 50, 51, 52, 52, 53,
53, 53, 53, 54, 54, 55, 56, 56, 57, 57, 58, 59, 59, 59, 61, 61, 62, 61, 62, 63,
63, 63, 64, 64, 66, 65, 67, 67, 67, 67, 69, 69, 69, 70, 71, 72, 72, 71, 73, 73,
73, 73, 74, 75, 75, 75, 75, 75, 76, 76, 77, 78, 78, 78, 79, 79, 80, 80, 80, 80,
81, 81, 81, 81, 82, 82, 82, 83, 82, 83, 83, 84, 83, 83, 84, 84, 84, 83, 83, 83,
83, 83, 83, 82, 82, 82, 81, 81, 80, 81, 80, 79, 80, 78, 78, 79, 77, 76, 75, 75,
75, 74, 73, 73, 71, 70, 70, 69, 67, 69, 70, 59, 58, 57, 57, 57, 57, 56, 53, 51,
49, 48, 46, 45, 42, 40, 38, 35, 33, 30, 28, 25, 22, 20, 18, 14, 12, 8, 8, 3, 6,
-8, -45, -41, -45, -45, -46, -47, -49, -51, -51, -53, -54, -56, -56, -59, -57,
-61, -59, -63, -61, -64, -61, -65, -62, -66, -62, -67, -60, -72, -91, -56, -61,
-61, -62, -63, -63, -65, -65, -67, -67, -68, -68, -69, -70, -71, -70, -71, -71,
-72, -72, -73, -74, -74, -74, -75, -74, -74, -76, -76, -76, -76, -76, -77, -77,
-77, -77, -76, -77, -77, -76, -77, -78, -76, -76, -76, -76, -77, -77, -75, -76,
-75, -75, -74, -75, -74, -74, -73, -73, -72, -72, -73, -72, -71, -70, -70, -69,
-70, -69, -69, -68, -68, -67, -68, -65, -67, -65, -68, -64, -68, -62, -67, -61,
-67, -60, -68, -115, -58, -57, -59, -57, -60, -56, -60, -56, -60, -56, -59, -56,
-57, -55, -56, -52, -54, -52, -50, -48, -48, -48, -47, -46, -47, -46, -46, -45,
-44, -45, -44, -44, -43, -43, -42, -43, -42, -42, -41, -42, -40, -42, -40, -42,
-41, -41, -41, -41, -43, -43, -43, -43, -44, -44, -44, -44, -44, -45, -46, -47,
-47, -47, -47, -47, -48, -47, -47, -48, -47, -48, -47, -47, -47, -47, -47, -47,
-47, -47, -47, -46, -46, -46, -46, -46, -45, -44, -45, -45, -44, -44, -43, -43,
-42, -42, -42, -41, -40, -40, -40, -39, -39, -38, -37, -37, -37, -36, -35, -34,
-34, -33, -33, -32, -31, -30, -30, -28, -28, -27, -27, -25, -24, -24, -22, -22,
-20, -21, -19, -19, -17, -17, -15, -15, -14, -13, -13, -12, -11, -10, -9, -7,
-7, -6, -4, -4, -3, -3, -3, -3, -2, -1, 0, 0, };

#endif /* AKWF_1303_512_H_ */
