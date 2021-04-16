#ifndef AKWF_1160_512_H_
#define AKWF_1160_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1160_512_NUM_CELLS 512
#define AKWF_1160_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1160_512_DATA [] = {1,
2, 6, 7, 9, 11, 14, 16, 19, 19, 22, 23, 24, 27, 28, 30, 32, 32, 35, 36, 37, 38,
40, 41, 41, 43, 44, 44, 43, 45, 44, 44, 44, 44, 44, 42, 42, 41, 38, 37, 34, 33,
32, 33, 33, 32, 34, 36, 37, 39, 40, 42, 44, 46, 48, 51, 53, 54, 57, 59, 62, 63,
65, 67, 70, 72, 73, 76, 77, 79, 81, 82, 84, 86, 87, 88, 90, 91, 91, 93, 93, 95,
96, 96, 96, 98, 99, 99, 99, 100, 101, 102, 102, 102, 102, 103, 102, 103, 103,
103, 104, 102, 103, 104, 103, 103, 104, 104, 105, 105, 106, 108, 117, 127, 126,
122, 118, 115, 114, 112, 111, 109, 109, 108, 107, 106, 105, 102, 72, 22, 16, 31,
39, 44, 45, 46, 46, 46, 45, 45, 46, 45, 44, 44, 42, 41, 40, 39, 37, 37, 35, 34,
32, 31, 29, 28, 27, 26, 24, 24, 22, 21, 20, 19, 18, 18, 17, 17, 16, 17, 17, 18,
17, 20, 21, 24, 32, 58, 72, 64, 56, 51, 49, 49, 47, 47, 47, 48, 47, 48, 48, 48,
49, 50, 49, 50, 51, 51, 51, 51, 53, 53, 53, 54, 54, 53, 54, 55, 54, 55, 54, 54,
55, 54, 54, 54, 54, 53, 53, 52, 52, 51, 50, 49, 49, 48, 47, 45, 45, 45, 44, 42,
41, 39, 38, 37, 36, 34, 33, 31, 30, 29, 27, 25, 24, 22, 21, 19, 17, 15, 13, 11,
10, 8, 6, 4, 2, 1, -1, -3, -4, -7, -8, -10, -12, -13, -16, -17, -18, -20, -22,
-23, -25, -26, -27, -28, -29, -30, -31, -32, -33, -33, -34, -35, -35, -35, -35,
-35, -35, -36, -34, -34, -35, -33, -31, -30, -29, -27, -26, -26, -25, -26, -27,
-28, -28, -30, -31, -33, -34, -35, -38, -40, -42, -43, -45, -48, -49, -51, -53,
-55, -57, -60, -61, -62, -64, -66, -67, -68, -71, -72, -73, -75, -76, -77, -78,
-80, -79, -81, -82, -83, -84, -85, -86, -86, -87, -88, -88, -89, -89, -91, -90,
-91, -92, -93, -92, -92, -93, -93, -93, -93, -94, -95, -95, -94, -94, -95, -95,
-95, -96, -96, -96, -98, -94, -78, -54, -41, -39, -41, -42, -43, -43, -44, -44,
-45, -44, -45, -44, -43, -44, -43, -43, -42, -42, -42, -41, -40, -40, -38, -39,
-37, -38, -36, -37, -37, -36, -35, -35, -35, -35, -35, -35, -34, -35, -35, -35,
-35, -37, -37, -37, -39, -40, -42, -45, -49, -58, -84, -100, -93, -84, -80, -78,
-77, -77, -76, -77, -76, -76, -76, -77, -78, -78, -78, -78, -79, -79, -80, -80,
-81, -81, -81, -81, -81, -82, -81, -81, -82, -81, -81, -81, -81, -81, -80, -79,
-78, -79, -77, -77, -76, -74, -75, -74, -72, -71, -71, -70, -68, -66, -66, -64,
-63, -61, -61, -59, -58, -56, -54, -53, -51, -49, -48, -46, -45, -42, -40, -38,
-37, -35, -32, -30, -28, -26, -25, -23, -20, -18, -16, -12, -11, -8, -6, -4, -1,
};

#endif /* AKWF_1160_512_H_ */