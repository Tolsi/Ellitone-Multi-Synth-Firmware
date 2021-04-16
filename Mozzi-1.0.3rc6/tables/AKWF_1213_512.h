#ifndef AKWF_1213_512_H_
#define AKWF_1213_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1213_512_NUM_CELLS 512
#define AKWF_1213_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1213_512_DATA [] = {1,
8, 12, 18, 23, 30, 34, 40, 46, 52, 55, 61, 65, 70, 73, 76, 79, 82, 86, 88, 91,
93, 96, 99, 100, 104, 106, 109, 110, 113, 116, 116, 118, 120, 120, 122, 122,
121, 121, 120, 118, 116, 114, 112, 109, 106, 103, 100, 97, 93, 90, 87, 83, 81,
76, 73, 70, 65, 60, 56, 52, 46, 41, 35, 30, 24, 17, 11, 4, -1, -8, -14, -19,
-25, -30, -37, -42, -47, -53, -58, -62, -67, -73, -77, -81, -86, -92, -95, -100,
-104, -108, -113, -115, -119, -121, -123, -126, -126, -127, -128, -128, -127,
-126, -125, -124, -121, -119, -118, -115, -113, -110, -107, -104, -102, -100,
-97, -95, -93, -90, -88, -85, -83, -80, -79, -76, -74, -71, -67, -65, -62, -59,
-56, -52, -49, -45, -42, -38, -34, -30, -27, -22, -18, -13, -9, -4, -1, 3, 7,
12, 15, 18, 22, 25, 27, 30, 31, 34, 36, 38, 39, 40, 40, 42, 43, 43, 44, 44, 45,
46, 47, 48, 50, 52, 53, 55, 56, 59, 61, 64, 67, 69, 71, 74, 77, 80, 82, 83, 86,
87, 88, 89, 90, 90, 89, 88, 86, 85, 83, 80, 77, 75, 72, 68, 66, 62, 58, 54, 52,
49, 47, 45, 42, 40, 39, 39, 39, 38, 39, 39, 40, 40, 41, 42, 42, 44, 44, 44, 44,
44, 43, 42, 40, 38, 36, 33, 28, 25, 21, 15, 12, 6, 1, -4, -11, -16, -21, -25,
-30, -34, -37, -40, -43, -44, -44, -46, -46, -45, -43, -42, -39, -37, -34, -30,
-28, -24, -20, -17, -14, -12, -9, -7, -6, -4, -4, -4, -5, -6, -7, -8, -10, -12,
-15, -17, -21, -24, -27, -30, -31, -33, -35, -37, -37, -38, -37, -38, -35, -34,
-31, -29, -25, -23, -18, -16, -11, -7, -2, 2, 6, 9, 13, 17, 18, 20, 23, 24, 25,
24, 23, 22, 20, 18, 15, 12, 7, 4, -1, -6, -10, -14, -19, -23, -28, -31, -35,
-38, -40, -43, -46, -48, -49, -50, -51, -51, -50, -49, -48, -48, -47, -45, -43,
-42, -40, -38, -36, -34, -33, -32, -31, -29, -28, -29, -27, -27, -27, -27, -28,
-28, -29, -30, -30, -31, -33, -33, -34, -33, -33, -33, -32, -31, -30, -28, -27,
-24, -21, -18, -14, -12, -7, -5, 0, 3, 9, 13, 17, 22, 26, 31, 34, 40, 44, 47,
51, 56, 60, 63, 66, 69, 71, 73, 75, 76, 76, 76, 76, 74, 74, 72, 72, 70, 68, 66,
65, 63, 61, 59, 57, 55, 53, 50, 48, 45, 43, 39, 35, 33, 29, 25, 22, 18, 13, 10,
6, 2, -1, -6, -9, -12, -15, -18, -21, -25, -29, -32, -35, -37, -41, -44, -47,
-51, -54, -58, -62, -65, -68, -72, -75, -77, -79, -82, -83, -85, -86, -88, -88,
-87, -86, -86, -86, -85, -84, -82, -81, -81, -79, -78, -76, -75, -73, -72, -69,
-66, -64, -61, -58, -55, -52, -49, -45, -43, -41, -37, -35, -32, -29, -26, -23,
-21, -16, -14, -9, -5, 0, };

#endif /* AKWF_1213_512_H_ */
