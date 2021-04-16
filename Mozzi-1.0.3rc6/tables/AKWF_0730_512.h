#ifndef AKWF_0730_512_H_
#define AKWF_0730_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0730_512_NUM_CELLS 512
#define AKWF_0730_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0730_512_DATA [] = {0,
4, 5, 8, 9, 14, 13, 20, 12, -1, 5, 5, 9, 10, 13, 15, 17, 20, 22, 23, 26, 29, 31,
33, 35, 38, 40, 43, 44, 47, 49, 52, 53, 57, 58, 61, 62, 65, 67, 70, 72, 75, 76,
79, 80, 84, 86, 88, 90, 92, 95, 97, 99, 101, 103, 106, 108, 110, 113, 115, 117,
119, 122, 124, 127, 127, 125, 123, 121, 119, 116, 113, 112, 109, 107, 104, 102,
100, 97, 95, 94, 91, 89, 86, 84, 81, 79, 77, 75, 73, 70, 68, 65, 64, 61, 59, 57,
54, 52, 51, 47, 45, 43, 41, 39, 36, 34, 32, 29, 27, 25, 22, 21, 18, 16, 13, 11,
9, 6, 4, 2, -1, -3, -3, -2, -2, -3, -2, -3, -2, -3, -2, -2, -3, -2, -2, -3, -3,
-3, -3, -3, -3, -2, -2, -3, -2, -3, -2, -3, -2, -3, -3, -3, -2, -3, -2, -2, -2,
-3, -3, -2, -3, -3, -2, -3, -3, -2, -3, -2, -3, -3, -2, -3, -3, -3, -2, -3, -2,
-3, -3, -3, -2, -3, -2, -2, -2, -2, -3, -2, -2, -3, -2, -2, -3, -2, -3, -3, -2,
-3, -3, -2, -3, -2, -3, -3, -2, -3, -2, -2, -2, -2, -3, -3, -2, -3, -3, -3, -2,
-3, -2, -3, -3, -2, -3, -3, -3, -3, -4, -2, -3, -2, -2, -3, -2, -3, -2, -2, -3,
-2, -3, -2, -3, -3, -2, -3, -3, -3, -2, -3, -2, -3, -2, -3, -3, -5, -7, -9, -12,
-14, -17, -19, -22, -22, -29, -13, -3, -9, -9, -13, -13, -16, -19, -20, -23,
-24, -28, -27, -33, -31, -41, -21, 5, 1, 7, -1, 2, 4, 6, 7, 12, 12, 18, 3, -15,
-6, -7, -2, -1, 4, 4, 9, 10, 13, 15, 18, 19, 24, 24, 29, 29, 34, 35, 39, 41, 44,
45, 49, 52, 2, -10, -8, -13, -12, -17, -18, -20, -25, -15, -2, -10, -8, -13,
-13, -17, -18, -20, -23, -24, -28, -27, -33, -29, -41, -19, 22, 5, 3, -5, -11,
-17, -25, -30, -37, -45, -52, -57, -64, -66, -70, -70, -73, -75, -77, -78, -82,
-83, -86, -88, -90, -92, -94, -96, -98, -100, -102, -105, -106, -108, -111,
-113, -115, -117, -118, -121, -122, -120, -118, -116, -114, -111, -109, -107,
-104, -103, -101, -98, -96, -94, -92, -91, -88, -87, -84, -81, -80, -77, -76,
-73, -71, -69, -67, -64, -63, -60, -59, -56, -55, -52, -49, -48, -45, -44, -42,
-39, -37, -35, -34, -31, -28, -27, -24, -22, -21, -19, -16, -14, -12, -10, -9,
-6, -4, -1, -2, -1, -2, -1, -3, -1, -1, -2, -1, -3, -1, -1, -2, -1, -2, -1, -2,
-2, -2, -2, -2, -1, -2, -1, -2, -1, -1, -2, -2, -1, -2, -1, -2, -2, -2, -2, -2,
-2, -2, -1, -2, -2, -2, -1, -1, -2, -1, -2, -2, -2, -2, -2, -2, -1, -2, -2, -2,
-1, -2, -2, -1, -2, -2, -2, -1, -2, -2, -2, -2, 0, };

#endif /* AKWF_0730_512_H_ */