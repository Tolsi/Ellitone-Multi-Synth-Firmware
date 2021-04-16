#ifndef AKWF_0115_512_H_
#define AKWF_0115_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0115_512_NUM_CELLS 512
#define AKWF_0115_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0115_512_DATA [] =
{-2, -6, -8, -12, -15, -18, -21, -24, -28, -30, -34, -36, -40, -43, -46, -50,
-53, -55, -59, -62, -64, -66, -69, -70, -72, -73, -75, -76, -78, -78, -78, -78,
-78, -76, -75, -74, -71, -70, -67, -64, -62, -59, -57, -54, -52, -49, -46, -44,
-42, -40, -37, -36, -35, -34, -32, -32, -31, -31, -30, -30, -30, -29, -29, -31,
-30, -33, -33, -34, -35, -37, -37, -39, -41, -43, -45, -47, -49, -52, -53, -56,
-58, -60, -63, -65, -68, -71, -72, -75, -76, -79, -80, -82, -84, -86, -86, -87,
-88, -89, -90, -89, -90, -90, -90, -89, -87, -87, -86, -85, -84, -83, -81, -81,
-79, -79, -78, -78, -77, -77, -76, -76, -76, -77, -78, -77, -79, -79, -80, -80,
-81, -83, -84, -85, -83, -82, -84, -91, -104, -111, -110, -105, -101, -101,
-107, -112, -115, -115, -112, -111, -110, -111, -112, -111, -110, -108, -106,
-104, -102, -100, -98, -94, -90, -87, -82, -78, -73, -69, -65, -60, -55, -50,
-44, -39, -37, -37, -30, -14, 9, 24, 25, 22, 14, 16, 24, 34, 41, 44, 42, 41, 42,
44, 47, 50, 50, 51, 51, 50, 50, 50, 50, 51, 50, 48, 46, 44, 43, 42, 41, 40, 38,
35, 33, 31, 30, 31, 30, 22, 11, 2, 0, 5, 11, 13, 8, 1, -2, -1, 1, 2, 4, 4, 5, 4,
4, 6, 8, 11, 12, 13, 14, 14, 15, 15, 18, 18, 18, 18, 18, 17, 17, 16, 15, 14, 12,
11, 9, 8, 5, 3, 2, 0, -1, -3, -4, -6, -9, -9, -11, -13, -14, -16, -17, -18, -20,
-21, -22, -22, -23, -23, -24, -24, -24, -24, -23, -22, -22, -21, -19, -18, -17,
-15, -13, -10, -6, -4, -1, 2, 6, 9, 12, 16, 19, 24, 27, 30, 33, 37, 40, 43, 46,
48, 51, 53, 55, 58, 59, 60, 62, 62, 63, 64, 64, 64, 64, 63, 63, 62, 60, 60, 58,
58, 56, 54, 52, 50, 49, 46, 45, 43, 41, 39, 37, 35, 33, 31, 29, 28, 27, 26, 24,
24, 23, 22, 23, 22, 22, 22, 23, 23, 24, 25, 25, 28, 28, 30, 31, 32, 33, 34, 34,
35, 37, 37, 38, 38, 38, 38, 38, 38, 37, 38, 37, 35, 35, 34, 32, 31, 31, 30, 27,
27, 26, 24, 23, 22, 21, 19, 18, 17, 16, 15, 14, 13, 13, 11, 11, 10, 12, 11, 11,
11, 12, 13, 14, 15, 17, 19, 21, 24, 25, 30, 32, 36, 38, 42, 45, 49, 51, 53, 52,
52, 58, 79, 108, 121, 120, 110, 101, 104, 114, 123, 127, 127, 124, 123, 122,
124, 125, 126, 125, 124, 123, 120, 118, 116, 116, 114, 112, 109, 106, 103, 101,
99, 95, 93, 89, 87, 83, 80, 76, 74, 70, 67, 64, 61, 58, 56, 53, 50, 48, 46, 45,
42, 41, 40, 39, 38, 37, 36, 35, 34, 34, 34, 32, 32, 32, 31, 29, 29, 28, 26, 25,
24, 22, 19, 18, 15, 12, 10, 7, 5, 2, 0, };

#endif /* AKWF_0115_512_H_ */