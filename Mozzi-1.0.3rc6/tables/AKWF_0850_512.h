#ifndef AKWF_0850_512_H_
#define AKWF_0850_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0850_512_NUM_CELLS 512
#define AKWF_0850_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0850_512_DATA [] =
{-38, -80, 9, 127, 116, 127, 121, 127, 122, 127, 120, 127, 101, -78, -64, -71,
-67, -69, -69, -69, -68, -69, -69, -69, -69, -69, -68, -68, -68, -70, -69, -69,
-69, -68, -69, 0, 6, 2, 5, 3, 4, 3, 5, 3, 4, 3, 4, 3, 5, 3, 4, 3, 4, 4, 4, 4, 3,
6, 2, 9, 30, 27, 28, 27, 29, 28, 28, 29, 27, 28, 27, 29, 27, 30, 9, 2, 4, 3, 5,
3, 5, 3, 5, 3, 4, 4, 4, 4, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 6, -3, -7, -6,
-6, -8, -1, 5, 3, 4, 3, 4, 4, 4, 5, 4, 5, 2, 5, 2, 6, 1, 12, 36, 31, 33, 32, 33,
33, 32, 33, 32, 34, 32, 33, 32, 32, 33, 33, 32, 32, 33, 32, 33, 32, 36, 20, 0,
5, 2, 4, 3, 4, 3, 4, 4, 3, 5, 3, 6, -17, -23, -21, -23, -21, -22, -22, -22, -21,
-23, -22, -24, 0, 6, 2, 4, 3, 4, 3, 5, 3, 5, 3, 4, 3, 4, 3, 4, 4, 4, 3, 3, 4, 4,
4, 4, 4, 6, 15, 13, 14, 13, 15, 10, 3, 4, 3, 4, 3, 5, 3, 4, 3, 4, 3, 4, 4, 3, 3,
4, 4, 4, 3, 3, 20, 24, 24, 16, 0, 7, 1, 5, 2, 5, 3, 4, 4, 4, 5, -1, 13, -94,
-128, -114, -125, -117, -123, -117, -123, -118, -123, -118, -122, -119, -122,
-119, -122, -118, -123, -119, -122, -117, -124, -118, -124, -111, 5, 5, 2, 5, 1,
6, 1, 7, 0, 8, -2, 11, -8, 41, 100, 87, 93, 90, 91, 90, 91, 91, 90, 92, 90, 91,
91, 91, 91, 90, 93, 90, 93, 90, 94, 86, 102, 44, -6, 10, 0, 7, 1, 5, 3, 4, 3, 4,
4, 5, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 3, 4, 3, 5, 3, 4, 3, 5, 2, -38, -41, -39,
-39, -39, -41, -39, -41, -39, -40, -40, -39, -39, -39, -39, -40, -39, -40, -40,
-39, -39, -41, -39, -41, -37, -44, -15, 9, 0, 5, 3, 5, 3, 4, 3, 4, 4, 4, 4, 3,
4, 3, 4, 3, 4, 3, 5, 15, 16, 14, 15, 16, 15, 15, 15, 16, 7, 3, 5, 4, 4, 4, 4, 4,
3, 6, -6, -18, -15, -17, -15, -17, -16, -17, -16, -16, -16, -17, -17, -17, -17,
-16, -16, -16, -17, -16, -17, -15, -19, -6, 6, 3, 4, 4, 5, 3, 4, 4, 5, 4, 3, 4,
4, 3, 4, 3, 5, 2, 19, 26, 23, 25, 23, 25, 24, 25, 23, 26, 23, 25, 23, 26, 20, 2,
4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 3, 3, 4, 4, 3, 4, 3, 3, 4, 4, 4, 3, 4, 3, 3,
-5, -7, -7, -6, -6, 2, 5, 4, 5, 4, 4, 3, 5, 4, 4, 4, 4, 4, 4, 3, 4, 3, 4, 3, 4,
3, };

#endif /* AKWF_0850_512_H_ */
