#ifndef AKWF_1256_512_H_
#define AKWF_1256_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1256_512_NUM_CELLS 512
#define AKWF_1256_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1256_512_DATA [] = {2,
6, 10, 13, 18, 22, 26, 29, 32, 36, 39, 42, 46, 50, 53, 55, 59, 61, 65, 67, 71,
73, 76, 78, 81, 84, 86, 90, 92, 94, 96, 99, 101, 103, 105, 107, 110, 112, 114,
115, 117, 119, 120, 123, 124, 126, 127, 127, 127, 127, 127, 126, 124, 119, 115,
110, 106, 100, 95, 90, 84, 80, 74, 69, 64, 58, 53, 48, 44, 38, 34, 29, 26, 20,
16, 12, 8, 4, -1, -4, -9, -12, -17, -21, -24, -27, -31, -34, -38, -41, -43, -47,
-50, -52, -56, -58, -60, -63, -65, -66, -68, -69, -70, -71, -71, -72, -71, -71,
-70, -68, -67, -65, -63, -62, -59, -57, -54, -49, -46, -43, -38, -34, -30, -26,
-22, -17, -13, -9, -5, -1, 3, 7, 10, 15, 18, 22, 25, 30, 33, 36, 39, 42, 46, 49,
52, 55, 58, 61, 65, 67, 69, 72, 75, 77, 79, 82, 84, 87, 89, 90, 91, 92, 93, 95,
94, 93, 91, 88, 85, 81, 77, 73, 67, 62, 59, 53, 48, 44, 39, 34, 29, 25, 21, 16,
12, 7, 3, -1, -4, -9, -12, -16, -21, -24, -28, -31, -34, -39, -42, -45, -48,
-51, -55, -57, -60, -63, -66, -69, -72, -75, -78, -80, -83, -85, -87, -91, -93,
-95, -98, -100, -103, -105, -106, -108, -110, -112, -112, -114, -115, -114,
-113, -111, -108, -104, -100, -95, -89, -84, -79, -74, -69, -63, -58, -53, -48,
-44, -40, -35, -29, -24, -20, -15, -12, -8, -3, 0, 4, 8, 13, 17, 21, 24, 28, 31,
34, 38, 42, 45, 48, 51, 54, 57, 61, 63, 67, 70, 72, 75, 77, 81, 83, 86, 89, 91,
93, 96, 98, 101, 102, 104, 107, 109, 110, 113, 114, 117, 119, 120, 122, 123,
125, 126, 126, 127, 127, 127, 127, 125, 122, 118, 114, 109, 104, 98, 93, 87, 83,
77, 72, 67, 62, 57, 52, 47, 42, 38, 32, 27, 24, 20, 15, 11, 6, 2, -2, -6, -10,
-14, -18, -21, -25, -28, -32, -35, -38, -43, -45, -49, -51, -54, -57, -60, -62,
-66, -68, -70, -73, -75, -77, -79, -81, -83, -84, -86, -87, -90, -90, -92, -92,
-93, -94, -94, -94, -92, -91, -89, -86, -82, -78, -75, -70, -65, -60, -56, -52,
-46, -42, -37, -32, -28, -24, -20, -15, -11, -7, -2, 1, 5, 9, 12, 16, 19, 24,
27, 31, 35, 37, 41, 45, 47, 50, 53, 56, 59, 62, 65, 67, 70, 71, 73, 75, 77, 77,
76, 75, 73, 69, 66, 61, 57, 52, 48, 43, 39, 35, 30, 25, 21, 16, 12, 8, 3, 0, -5,
-9, -12, -17, -21, -24, -27, -31, -34, -38, -42, -46, -48, -51, -54, -57, -61,
-63, -66, -70, -73, -74, -77, -81, -83, -86, -88, -91, -93, -95, -97, -100,
-102, -105, -106, -108, -110, -112, -113, -114, -116, -116, -115, -115, -112,
-110, -105, -101, -97, -91, -86, -81, -75, -70, -65, -59, -55, -50, -44, -40,
-34, -30, -26, -22, -17, -13, -9, -5, 0, };

#endif /* AKWF_1256_512_H_ */