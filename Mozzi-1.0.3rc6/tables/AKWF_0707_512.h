#ifndef AKWF_0707_512_H_
#define AKWF_0707_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0707_512_NUM_CELLS 512
#define AKWF_0707_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0707_512_DATA [] = {5,
13, 18, 26, 33, 39, 45, 51, 57, 64, 69, 74, 80, 84, 89, 94, 99, 103, 107, 110,
114, 116, 119, 121, 123, 124, 127, 126, 127, 127, 127, 127, 127, 127, 126, 124,
124, 121, 120, 117, 115, 113, 110, 108, 106, 101, 99, 95, 93, 90, 87, 84, 80,
77, 74, 71, 68, 65, 62, 59, 57, 54, 51, 49, 46, 45, 43, 41, 39, 38, 35, 35, 34,
33, 32, 31, 31, 30, 30, 29, 29, 30, 30, 30, 30, 30, 30, 31, 30, 31, 32, 32, 32,
32, 33, 33, 32, 33, 34, 33, 33, 34, 32, 32, 31, 30, 30, 30, 28, 28, 27, 25, 25,
23, 22, 20, 19, 17, 16, 13, 13, 11, 8, 8, 6, 4, 2, 0, -2, -3, -5, -7, -8, -9,
-10, -11, -11, -13, -14, -14, -15, -15, -15, -15, -16, -15, -15, -14, -13, -12,
-12, -9, -9, -7, -5, -4, -2, 0, 2, 4, 7, 9, 12, 13, 16, 19, 21, 23, 25, 28, 30,
33, 34, 37, 39, 42, 43, 45, 45, 47, 49, 48, 50, 51, 51, 51, 52, 51, 52, 51, 50,
49, 48, 46, 44, 43, 41, 39, 36, 34, 30, 29, 26, 23, 20, 16, 13, 10, 7, 3, 0, -4,
-6, -10, -14, -17, -20, -23, -26, -28, -32, -34, -36, -38, -40, -42, -43, -45,
-46, -47, -48, -48, -49, -48, -47, -48, -47, -46, -45, -43, -41, -40, -37, -36,
-34, -31, -28, -26, -23, -19, -17, -13, -10, -6, -4, 0, 4, 7, 10, 14, 17, 19,
22, 25, 29, 31, 34, 36, 38, 40, 42, 44, 45, 46, 46, 47, 47, 48, 48, 47, 47, 47,
46, 45, 44, 41, 40, 38, 35, 33, 31, 28, 25, 23, 20, 17, 13, 10, 7, 4, 0, -4, -7,
-10, -14, -16, -20, -24, -26, -29, -31, -33, -37, -38, -41, -43, -44, -46, -47,
-48, -49, -50, -50, -52, -51, -51, -52, -50, -50, -50, -48, -47, -46, -44, -42,
-40, -39, -37, -35, -33, -30, -28, -25, -23, -21, -18, -16, -13, -11, -9, -6,
-3, -2, 0, 2, 3, 6, 8, 9, 10, 11, 13, 13, 14, 16, 15, 15, 15, 15, 15, 15, 15,
13, 13, 12, 11, 10, 9, 7, 6, 4, 3, 2, 0, -2, -4, -6, -8, -9, -10, -13, -15, -16,
-17, -19, -20, -23, -23, -25, -26, -27, -29, -29, -30, -30, -32, -32, -32, -32,
-33, -33, -34, -33, -33, -33, -32, -32, -32, -32, -32, -31, -31, -31, -31, -30,
-30, -29, -30, -30, -29, -30, -29, -30, -30, -30, -32, -33, -33, -34, -35, -36,
-37, -39, -40, -43, -45, -47, -49, -51, -54, -57, -59, -62, -65, -68, -71, -74,
-76, -80, -84, -87, -90, -93, -96, -100, -102, -105, -109, -111, -114, -116,
-118, -120, -122, -123, -125, -126, -127, -127, -128, -128, -128, -128, -127,
-126, -124, -123, -120, -118, -115, -113, -110, -106, -103, -98, -94, -89, -83,
-80, -74, -69, -62, -56, -51, -44, -38, -31, -25, -18, -12, -5, 1, };

#endif /* AKWF_0707_512_H_ */
