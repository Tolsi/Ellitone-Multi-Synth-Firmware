#ifndef AKWF_1015_512_H_
#define AKWF_1015_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1015_512_NUM_CELLS 512
#define AKWF_1015_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1015_512_DATA [] =
{17, 127, 123, 118, 116, 110, 108, 102, 100, 93, 92, 84, 83, 76, 75, 68, 66, 60,
59, 52, 49, 44, 42, 36, 33, 28, 24, 21, 15, 13, 7, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0,
0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, -1, 1, -1, 0, 1, 0, -1, 1, 0, 1, 1, 0, 0,
0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 0, 0, 1, -1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1,
1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, -1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0,
0, 1, 0, 1, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 5, 9, 14, 19, 24, 28, 33, 36,
43, 45, 52, 53, 62, 61, 71, 70, 79, 79, 89, 88, 99, 96, 108, 106, 116, 115, 123,
124, -106, -128, -112, -120, -104, -111, -96, -102, -89, -92, -80, -83, -73,
-73, -64, -64, -56, -55, -48, -44, -39, -36, -31, -27, -22, -18, -14, -9, -2, 2,
-1, 0, -1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0,
1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, 0,
1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1,
1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, -1, 0, 0, 0, 1, 1, 0,
1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, -1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0,
1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0,
1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 1, -1, 1, -1, -4, -10,
-11, -18, -20, -26, -29, -34, -37, -42, -45, -50, -55, -59, -64, -67, -73, -74,
-83, -81, -92, -88, -102, -94, -113, -101, -125, -105, -128, -97, -43, -91, };

#endif /* AKWF_1015_512_H_ */
