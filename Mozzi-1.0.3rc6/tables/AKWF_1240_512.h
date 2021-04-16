#ifndef AKWF_1240_512_H_
#define AKWF_1240_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1240_512_NUM_CELLS 512
#define AKWF_1240_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1240_512_DATA [] = {0,
1, 2, 3, 4, 5, 6, 5, 8, 8, 9, 9, 11, 9, 11, 9, 25, 36, 23, 26, 22, 22, 20, 19,
17, 17, 15, 16, 14, 13, 13, 11, 10, 9, 10, 9, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 7,
6, 6, 7, 8, 8, 7, 8, 9, 10, 9, 10, 11, 11, 13, 13, 14, 15, 15, 16, 17, 16, 17,
19, 20, 20, 21, 22, 23, 24, 25, 25, 26, 28, 28, 29, 30, 31, 31, 33, 34, 34, 35,
35, 36, 37, 37, 39, 39, 40, 41, 41, 41, 42, 42, 43, 44, 43, 44, 44, 45, 46, 46,
45, 46, 46, 45, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 45, 46, 45,
45, 45, 45, 45, 44, 44, 44, 45, 45, 45, 45, 46, 45, 46, 44, 52, 13, -15, -3, -9,
-6, -9, -7, -9, -9, -10, -10, -10, -11, -11, -13, -14, -14, -15, -17, -16, -18,
-19, -20, -21, -21, -22, -24, -25, -26, -27, -28, -28, -30, -30, -30, -33, -33,
-34, -33, -36, -35, -37, -36, -39, -37, -40, -38, -40, -38, -40, -40, -41, -40,
-41, -40, -40, -41, -40, -41, -39, -42, -35, -45, 24, -51, -125, -94, -112, -99,
-107, -100, -105, -101, -103, -100, -100, -98, -98, -96, -95, -94, -92, -92,
-90, -89, -86, -85, -83, -82, -80, -78, -77, -74, -72, -71, -69, -67, -64, -63,
-60, -58, -56, -54, -52, -49, -47, -45, -42, -40, -39, -36, -34, -32, -30, -27,
-25, -23, -20, -19, -17, -14, -12, -10, -8, -6, -4, -2, 0, 1, 3, 5, 8, 9, 12,
13, 15, 16, 17, 19, 20, 22, 23, 24, 26, 27, 28, 29, 30, 31, 31, 34, 34, 35, 36,
36, 36, 37, 38, 38, 38, 39, 40, 39, 40, 40, 40, 41, 40, 40, 41, 41, 41, 40, 39,
39, 40, 39, 38, 38, 37, 36, 36, 35, 34, 35, 33, 33, 32, 31, 31, 30, 29, 28, 27,
26, 25, 24, 23, 22, 21, 20, 20, 19, 18, 16, 16, 14, 14, 13, 11, 11, 11, 9, 9, 9,
6, 6, 5, 5, 3, 3, 3, 1, 0, 1, 0, 0, -2, -2, -3, -4, -4, -6, -5, -6, -7, -7, -7,
-8, -8, -10, -9, -11, -12, -12, -12, -14, -14, -14, -15, -16, -17, -17, -18,
-20, -35, 13, 27, 15, 18, 11, 12, 5, 5, 1, 0, -3, -4, -8, -9, -13, -13, -16,
-17, -20, -21, -23, -25, -26, -27, -29, -30, -31, -32, -34, -35, -36, -36, -37,
-38, -39, -39, -39, -39, -40, -40, -40, -40, -40, -41, -40, -41, -39, -41, -39,
-40, -36, -38, -35, -37, -35, -35, -32, -34, -32, -32, -29, -30, -24, 26, -63,
-92, -71, -82, -72, -77, -69, -73, -67, -68, -63, -64, -60, -60, -56, -55, -53,
-51, -49, -47, -45, -43, -41, -39, -36, -34, -33, -31, -29, -26, -25, -23, -21,
-18, -17, -16, -14, -13, -11, -9, -7, -6, -5, -3, -2, -1, 0, };

#endif /* AKWF_1240_512_H_ */
