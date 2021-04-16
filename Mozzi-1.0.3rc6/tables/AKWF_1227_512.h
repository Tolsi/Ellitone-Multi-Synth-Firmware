#ifndef AKWF_1227_512_H_
#define AKWF_1227_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1227_512_NUM_CELLS 512
#define AKWF_1227_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1227_512_DATA [] = {1,
6, 12, 18, 21, 26, 31, 35, 40, 44, 48, 52, 56, 59, 62, 65, 68, 71, 74, 76, 79,
82, 84, 88, 90, 92, 95, 97, 99, 101, 103, 104, 107, 109, 111, 112, 114, 116,
117, 118, 120, 120, 121, 122, 123, 124, 125, 126, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 126, 126, 125, 125, 124, 124, 123, 122, 122,
121, 119, 119, 118, 117, 117, 116, 114, 113, 112, 111, 110, 109, 107, 105, 103,
100, 98, 95, 92, 89, 85, 83, 80, 77, 74, 70, 67, 64, 61, 58, 55, 52, 50, 47, 45,
44, 41, 40, 37, 35, 34, 32, 31, 30, 27, 27, 26, 25, 23, 23, 22, 21, 21, 20, 20,
19, 18, 18, 17, 17, 17, 17, 17, 16, 17, 16, 16, 17, 17, 17, 16, 17, 18, 18, 18,
18, 19, 18, 20, 20, 21, 21, 21, 22, 22, 22, 23, 24, 24, 24, 25, 25, 26, 26, 27,
27, 27, 28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 30, 29, 29, 29, 30, 30, 29, 28,
29, 28, 27, 27, 27, 27, 26, 26, 24, 23, 23, 22, 22, 20, 20, 19, 18, 17, 16, 16,
15, 14, 13, 11, 11, 10, 8, 7, 6, 5, 4, 3, 2, 0, -1, -2, -4, -4, -6, -7, -8, -9,
-10, -11, -13, -13, -14, -15, -17, -18, -18, -19, -21, -21, -22, -23, -24, -24,
-25, -27, -27, -28, -28, -30, -30, -31, -31, -32, -31, -32, -34, -34, -33, -33,
-34, -35, -35, -35, -35, -35, -35, -35, -36, -36, -36, -36, -37, -36, -36, -36,
-36, -36, -36, -36, -35, -35, -35, -35, -35, -35, -35, -34, -34, -34, -35, -34,
-33, -33, -33, -33, -32, -33, -33, -33, -32, -32, -32, -32, -31, -31, -31, -31,
-32, -31, -31, -30, -31, -31, -30, -30, -31, -32, -31, -31, -32, -32, -32, -32,
-32, -32, -32, -33, -34, -34, -33, -34, -34, -34, -35, -35, -36, -35, -37, -37,
-37, -38, -38, -39, -39, -40, -39, -41, -41, -41, -42, -42, -43, -43, -44, -45,
-45, -46, -46, -47, -48, -48, -49, -49, -49, -51, -50, -52, -52, -52, -52, -53,
-53, -53, -54, -54, -54, -55, -56, -56, -56, -57, -57, -58, -57, -58, -58, -59,
-58, -59, -58, -60, -59, -59, -60, -60, -60, -59, -60, -60, -60, -60, -60, -60,
-60, -60, -60, -60, -60, -60, -60, -60, -60, -60, -60, -59, -59, -60, -59, -60,
-60, -59, -60, -59, -59, -59, -58, -58, -58, -58, -58, -57, -57, -58, -58, -57,
-58, -57, -56, -57, -56, -56, -57, -56, -56, -56, -56, -56, -56, -55, -55, -56,
-55, -56, -56, -56, -55, -56, -55, -55, -56, -56, -55, -56, -56, -56, -56, -56,
-56, -56, -56, -56, -56, -56, -57, -56, -56, -57, -57, -57, -57, -57, -57, -58,
-57, -58, -58, -58, -58, -59, -59, -58, -59, -59, -59, -59, -59, -57, -57, -54,
-52, -49, -46, -42, -37, -33, -28, -22, -18, -13, -6, -2, };

#endif /* AKWF_1227_512_H_ */