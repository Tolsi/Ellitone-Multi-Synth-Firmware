#ifndef AKWF_0825_512_H_
#define AKWF_0825_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0825_512_NUM_CELLS 512
#define AKWF_0825_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0825_512_DATA [] = {2,
5, 7, 10, 12, 15, 18, 21, 24, 27, 31, 34, 36, 40, 44, 46, 50, 53, 57, 59, 63,
66, 68, 71, 75, 76, 80, 82, 84, 87, 89, 91, 93, 96, 98, 100, 102, 104, 106, 107,
109, 110, 112, 113, 114, 116, 117, 117, 119, 120, 121, 122, 123, 123, 124, 124,
125, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 125, 126, 125, 124, 124, 124,
123, 123, 123, 123, 122, 121, 120, 121, 120, 119, 118, 118, 118, 117, 116, 116,
115, 115, 114, 113, 113, 114, 113, 113, 113, 113, 113, 113, 113, 113, 112, 112,
112, 112, 112, 112, 110, 108, 108, 105, 104, 103, 102, 101, 99, 98, 96, 94, 92,
91, 88, 86, 84, 81, 79, 76, 74, 72, 69, 68, 65, 63, 60, 57, 54, 53, 51, 48, 46,
45, 43, 40, 39, 37, 34, 33, 30, 28, 26, 23, 21, 19, 16, 14, 10, 9, 6, 3, 1, -2,
-4, -7, -9, -11, -13, -17, -18, -22, -23, -25, -28, -30, -32, -34, -37, -38,
-40, -44, -44, -46, -49, -50, -52, -55, -55, -57, -59, -61, -63, -63, -65, -66,
-68, -68, -70, -72, -73, -74, -74, -76, -78, -77, -79, -79, -80, -80, -81, -82,
-82, -82, -83, -83, -83, -84, -84, -84, -84, -83, -83, -82, -81, -80, -80, -78,
-78, -76, -75, -74, -73, -72, -71, -70, -69, -67, -66, -66, -64, -62, -62, -60,
-59, -58, -57, -56, -55, -53, -54, -52, -51, -50, -49, -48, -46, -45, -45, -45,
-44, -43, -42, -41, -41, -40, -39, -38, -37, -36, -37, -36, -35, -35, -35, -34,
-34, -34, -34, -34, -34, -34, -35, -34, -35, -36, -36, -36, -37, -38, -37, -38,
-37, -38, -38, -40, -39, -40, -40, -40, -41, -41, -41, -42, -42, -43, -44, -43,
-44, -43, -44, -45, -44, -45, -46, -45, -45, -46, -46, -47, -47, -46, -48, -48,
-48, -47, -48, -49, -49, -48, -48, -49, -50, -48, -49, -49, -49, -49, -49, -49,
-49, -49, -49, -50, -48, -49, -48, -48, -47, -48, -47, -47, -47, -47, -46, -47,
-46, -46, -46, -45, -46, -45, -45, -45, -45, -44, -45, -44, -44, -44, -44, -44,
-44, -43, -43, -42, -43, -43, -42, -42, -42, -41, -41, -41, -41, -41, -40, -40,
-39, -40, -39, -38, -39, -38, -38, -37, -37, -37, -36, -36, -35, -35, -34, -35,
-35, -34, -34, -34, -34, -34, -34, -35, -35, -36, -36, -37, -37, -37, -38, -39,
-39, -40, -40, -42, -42, -43, -43, -44, -45, -45, -45, -46, -46, -47, -48, -48,
-49, -49, -50, -50, -51, -51, -52, -53, -53, -52, -53, -53, -54, -54, -54, -54,
-54, -54, -55, -54, -54, -54, -53, -53, -53, -53, -52, -52, -51, -51, -51, -49,
-49, -49, -47, -47, -46, -46, -44, -43, -41, -40, -39, -37, -36, -35, -32, -31,
-28, -27, -26, -23, -23, -20, -18, -16, -15, -13, -9, -5, -3, 1, };

#endif /* AKWF_0825_512_H_ */