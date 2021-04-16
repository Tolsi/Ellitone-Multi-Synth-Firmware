#ifndef AKWF_0900_512_H_
#define AKWF_0900_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0900_512_NUM_CELLS 512
#define AKWF_0900_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0900_512_DATA [] = {1,
1, 1, 2, 2, 4, 4, 5, 5, 6, 7, 7, 7, 7, 8, 8, 7, 9, 9, 9, 9, 9, 10, 9, 9, 10, 9,
10, 11, 10, 11, 10, 11, 10, 11, 12, 11, 13, 12, 12, 12, 13, 14, 14, 14, 15, 15,
15, 16, 16, 16, 17, 17, 17, 18, 20, 20, 20, 21, 21, 22, 23, 24, 23, 24, 25, 25,
26, 26, 28, 28, 29, 29, 30, 30, 32, 33, 32, 34, 33, 34, 34, 35, 35, 36, 36, 37,
37, 38, 38, 39, 39, 40, 40, 41, 42, 42, 41, 43, 43, 43, 44, 43, 43, 45, 45, 46,
45, 46, 46, 47, 47, 47, 48, 47, 49, 48, 49, 49, 50, 51, 50, 51, 51, 53, 52, 53,
53, 53, 54, 54, 55, 55, 56, 57, 56, 58, 58, 58, 59, 59, 60, 60, 61, 61, 62, 63,
63, 64, 64, 64, 65, 65, 66, 67, 67, 67, 68, 68, 69, 69, 69, 70, 71, 71, 71, 73,
72, 72, 73, 74, 74, 75, 76, 75, 76, 77, 78, 78, 77, 79, 79, 79, 79, 80, 80, 81,
81, 82, 82, 83, 84, 84, 84, 84, 84, 85, 85, 86, 86, 87, 87, 88, 87, 89, 89, 89,
89, 90, 90, 91, 92, 92, 92, 93, 94, 94, 94, 95, 96, 96, 97, 97, 97, 97, 98, 99,
98, 99, 100, 99, 100, 100, 100, 100, 100, 100, 100, 99, 98, 98, 97, 96, 95, 92,
90, 88, 86, 83, 81, 79, 75, 72, 67, 63, 59, 55, 50, 46, 40, 34, 29, 24, 18, 11,
5, -1, -7, -13, -19, -25, -32, -39, -45, -50, -56, -62, -67, -72, -78, -83, -87,
-92, -97, -100, -104, -108, -111, -114, -117, -119, -120, -122, -123, -126,
-126, -128, -127, -128, -128, -128, -128, -128, -127, -126, -125, -124, -124,
-122, -120, -119, -117, -116, -115, -113, -111, -110, -108, -107, -105, -102,
-102, -99, -98, -97, -94, -93, -92, -90, -89, -86, -85, -83, -82, -80, -79, -77,
-76, -74, -73, -71, -70, -68, -67, -66, -63, -63, -61, -61, -60, -58, -57, -56,
-56, -55, -54, -54, -53, -53, -52, -51, -51, -51, -51, -52, -52, -52, -52, -52,
-53, -53, -54, -54, -56, -56, -57, -58, -59, -60, -62, -62, -63, -64, -65, -66,
-66, -68, -68, -69, -70, -70, -70, -71, -71, -71, -71, -72, -72, -71, -71, -71,
-70, -70, -69, -68, -67, -66, -66, -64, -63, -62, -60, -58, -57, -56, -54, -53,
-52, -50, -48, -47, -44, -44, -42, -41, -38, -38, -36, -34, -33, -32, -30, -29,
-28, -27, -26, -25, -25, -25, -24, -23, -23, -23, -22, -22, -22, -22, -21, -22,
-21, -22, -22, -23, -23, -23, -24, -24, -24, -24, -25, -25, -25, -26, -26, -27,
-26, -26, -26, -28, -27, -27, -28, -27, -28, -27, -27, -27, -27, -27, -26, -25,
-25, -24, -23, -24, -23, -22, -21, -20, -20, -19, -18, -18, -16, -16, -15, -14,
-12, -11, -10, -10, -8, -8, -6, -6, -5, -4, -3, -2, -1, -1, -1, };

#endif /* AKWF_0900_512_H_ */
