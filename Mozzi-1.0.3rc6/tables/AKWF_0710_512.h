#ifndef AKWF_0710_512_H_
#define AKWF_0710_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0710_512_NUM_CELLS 512
#define AKWF_0710_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0710_512_DATA [] = {2,
6, 8, 13, 16, 19, 21, 25, 28, 31, 35, 38, 41, 44, 47, 50, 54, 57, 60, 63, 66,
69, 72, 76, 80, 83, 85, 88, 92, 95, 98, 102, 104, 108, 111, 115, 118, 121, 124,
127, 126, 122, 119, 115, 113, 110, 106, 103, 100, 96, 93, 90, 87, 84, 81, 78,
74, 72, 68, 65, 62, 58, 56, 52, 48, 46, 43, 38, 35, 33, 30, 26, 24, 20, 17, 13,
10, 7, 3, 0, -3, -7, -9, -10, -10, -12, -11, -13, -14, -15, -15, -16, -16, -17,
-18, -20, -20, -20, -21, -23, -23, -24, -24, -25, -26, -24, -24, -22, -21, -21,
-20, -20, -19, -17, -17, -16, -16, -14, -13, -13, -13, -11, -10, -9, -9, -8, -9,
-9, -10, -11, -11, -11, -11, -12, -12, -12, -13, -14, -14, -15, -15, -14, -15,
-16, -16, -16, -17, -17, -18, -18, -19, -19, -19, -20, -21, -20, -21, -22, -23,
-22, -23, -23, -23, -24, -25, -25, -25, -26, -25, -23, -22, -20, -19, -19, -17,
-16, -14, -14, -13, -12, -10, -9, -7, -7, -5, -4, -3, -2, -1, 0, 2, 3, 4, 5, 6,
9, 9, 11, 11, 12, 15, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 22, 21, 17, 15,
13, 10, 8, 5, 3, 1, -2, -4, -7, -9, -12, -14, -16, -19, -21, -23, -25, -26, -27,
-28, -29, -29, -30, -32, -32, -33, -33, -35, -36, -36, -37, -37, -38, -39, -40,
-41, -41, -43, -42, -40, -39, -37, -36, -33, -33, -30, -29, -28, -26, -25, -23,
-21, -19, -17, -16, -15, -13, -11, -9, -9, -6, -5, -3, -1, 0, 2, 4, 5, 6, 7, 9,
11, 13, 15, 16, 17, 19, 20, 23, 24, 25, 24, 22, 20, 19, 17, 16, 14, 13, 11, 10,
8, 7, 5, 3, 1, 0, -2, -3, -5, -6, -8, -9, -11, -12, -14, -16, -17, -19, -21,
-23, -24, -26, -27, -29, -31, -32, -33, -36, -37, -38, -40, -42, -43, -42, -41,
-40, -39, -38, -37, -37, -36, -35, -35, -34, -32, -32, -32, -30, -29, -28, -28,
-27, -26, -26, -23, -20, -18, -16, -13, -11, -10, -7, -4, -1, 1, 3, 5, 8, 10,
13, 15, 18, 20, 22, 25, 24, 23, 23, 21, 20, 19, 18, 16, 16, 13, 13, 12, 10, 9,
8, 6, 5, 4, 3, 2, 0, 0, -2, -3, -4, -5, -7, -7, -9, -10, -11, -12, -13, -15,
-16, -17, -18, -19, -20, -22, -23, -24, -26, -25, -25, -25, -24, -23, -23, -22,
-23, -22, -21, -21, -22, -21, -20, -19, -19, -18, -18, -18, -17, -17, -16, -16,
-16, -16, -16, -15, -14, -13, -13, -13, -13, -12, -13, -12, -11, -11, -11, -10,
-10, -10, -8, -9, -10, -10, -11, -12, -13, -13, -15, -15, -17, -17, -17, -18,
-19, -20, -21, -21, -22, -23, -24, -26, -26, -25, -24, -23, -22, -21, -21, -20,
-19, -19, -18, -17, -15, -15, -14, -13, -12, -12, -11, -9, -9, -9, -6, -3, -1,
};

#endif /* AKWF_0710_512_H_ */
