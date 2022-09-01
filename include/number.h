#ifndef NUMBER_H
#define NUMBER_H

#include <TFT_eSPI.h> 

#include "font/O_3660_i0.h"
#include "font/O_3660_i1.h"
#include "font/O_3660_i2.h"
#include "font/O_3660_i3.h"
#include "font/O_3660_i4.h"
#include "font/O_3660_i5.h"
#include "font/O_3660_i6.h"
#include "font/O_3660_i7.h"
#include "font/O_3660_i8.h"
#include "font/O_3660_i9.h"

#include "font/W_3660_i0.h"
#include "font/W_3660_i1.h"
#include "font/W_3660_i2.h"
#include "font/W_3660_i3.h"
#include "font/W_3660_i4.h"
#include "font/W_3660_i5.h"
#include "font/W_3660_i6.h"
#include "font/W_3660_i7.h"
#include "font/W_3660_i8.h"
#include "font/W_3660_i9.h"

#include "font/W_1830_i0.h"
#include "font/W_1830_i1.h"
#include "font/W_1830_i2.h"
#include "font/W_1830_i3.h"
#include "font/W_1830_i4.h"
#include "font/W_1830_i5.h"
#include "font/W_1830_i6.h"
#include "font/W_1830_i7.h"
#include "font/W_1830_i8.h"
#include "font/W_1830_i9.h"


const uint8_t dian[] PROGMEM= {
	0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, 0x4A, 0x46, 0x49, 0x46, 0x00, 0x01, 0x01, 0x01, 0x00, 0x48, 
	0x00, 0x48, 0x00, 0x00, 0xFF, 0xE2, 0x02, 0x28, 0x49, 0x43, 0x43, 0x5F, 0x50, 0x52, 0x4F, 0x46, 
	0x49, 0x4C, 0x45, 0x00, 0x01, 0x01, 0x00, 0x00, 0x02, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x30, 
	0x00, 0x00, 0x6D, 0x6E, 0x74, 0x72, 0x52, 0x47, 0x42, 0x20, 0x58, 0x59, 0x5A, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x63, 0x73, 0x70, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xF6, 0xD6, 0x00, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0xD3, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x64, 0x65, 0x73, 0x63, 0x00, 0x00, 
	0x00, 0xF0, 0x00, 0x00, 0x00, 0x74, 0x72, 0x58, 0x59, 0x5A, 0x00, 0x00, 0x01, 0x64, 0x00, 0x00, 
	0x00, 0x14, 0x67, 0x58, 0x59, 0x5A, 0x00, 0x00, 0x01, 0x78, 0x00, 0x00, 0x00, 0x14, 0x62, 0x58, 
	0x59, 0x5A, 0x00, 0x00, 0x01, 0x8C, 0x00, 0x00, 0x00, 0x14, 0x72, 0x54, 0x52, 0x43, 0x00, 0x00, 
	0x01, 0xA0, 0x00, 0x00, 0x00, 0x28, 0x67, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0xA0, 0x00, 0x00, 
	0x00, 0x28, 0x62, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0xA0, 0x00, 0x00, 0x00, 0x28, 0x77, 0x74, 
	0x70, 0x74, 0x00, 0x00, 0x01, 0xC8, 0x00, 0x00, 0x00, 0x14, 0x63, 0x70, 0x72, 0x74, 0x00, 0x00, 
	0x01, 0xDC, 0x00, 0x00, 0x00, 0x3C, 0x6D, 0x6C, 0x75, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0C, 0x65, 0x6E, 0x55, 0x53, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 
	0x00, 0x1C, 0x00, 0x73, 0x00, 0x52, 0x00, 0x47, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x59, 0x5A, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x6F, 0xA2, 0x00, 0x00, 0x38, 0xF5, 0x00, 0x00, 0x03, 0x90, 0x58, 0x59, 
	0x5A, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x99, 0x00, 0x00, 0xB7, 0x85, 0x00, 0x00, 
	0x18, 0xDA, 0x58, 0x59, 0x5A, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0xA0, 0x00, 0x00, 
	0x0F, 0x84, 0x00, 0x00, 0xB6, 0xCF, 0x70, 0x61, 0x72, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x00, 0x00, 0x00, 0x02, 0x66, 0x66, 0x00, 0x00, 0xF2, 0xA7, 0x00, 0x00, 0x0D, 0x59, 0x00, 0x00, 
	0x13, 0xD0, 0x00, 0x00, 0x0A, 0x5B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x59, 
	0x5A, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0xD6, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0xD3, 0x2D, 0x6D, 0x6C, 0x75, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x0C, 0x65, 0x6E, 0x55, 0x53, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x47, 
	0x00, 0x6F, 0x00, 0x6F, 0x00, 0x67, 0x00, 0x6C, 0x00, 0x65, 0x00, 0x20, 0x00, 0x49, 0x00, 0x6E, 
	0x00, 0x63, 0x00, 0x2E, 0x00, 0x20, 0x00, 0x32, 0x00, 0x30, 0x00, 0x31, 0x00, 0x36, 0xFF, 0xDB, 
	0x00, 0x43, 0x00, 0x0A, 0x07, 0x07, 0x08, 0x07, 0x06, 0x0A, 0x08, 0x08, 0x08, 0x0B, 0x0A, 0x0A, 
	0x0B, 0x0E, 0x18, 0x10, 0x0E, 0x0D, 0x0D, 0x0E, 0x1D, 0x15, 0x16, 0x11, 0x18, 0x23, 0x1F, 0x25, 
	0x24, 0x22, 0x1F, 0x22, 0x21, 0x26, 0x2B, 0x37, 0x2F, 0x26, 0x29, 0x34, 0x29, 0x21, 0x22, 0x30, 
	0x41, 0x31, 0x34, 0x39, 0x3B, 0x3E, 0x3E, 0x3E, 0x25, 0x2E, 0x44, 0x49, 0x43, 0x3C, 0x48, 0x37, 
	0x3D, 0x3E, 0x3B, 0xFF, 0xDB, 0x00, 0x43, 0x01, 0x0A, 0x0B, 0x0B, 0x0E, 0x0D, 0x0E, 0x1C, 0x10, 
	0x10, 0x1C, 0x3B, 0x28, 0x22, 0x28, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 
	0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 
	0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 
	0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0xFF, 0xC0, 0x00, 0x11, 0x08, 0x00, 0x1E, 0x00, 
	0x05, 0x03, 0x01, 0x22, 0x00, 0x02, 0x11, 0x01, 0x03, 0x11, 0x01, 0xFF, 0xC4, 0x00, 0x17, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x04, 0x05, 0x07, 0xFF, 0xC4, 0x00, 0x22, 0x10, 0x00, 0x00, 0x06, 0x01, 0x04, 0x03, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x11, 0x00, 
	0x12, 0x13, 0x21, 0x31, 0x06, 0x22, 0x51, 0x41, 0xFF, 0xC4, 0x00, 0x14, 0x01, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC4, 
	0x00, 0x14, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xDA, 0x00, 0x0C, 0x03, 0x01, 0x00, 0x02, 0x11, 0x03, 0x11, 0x00, 
	0x3F, 0x00, 0xE4, 0x4E, 0xA3, 0x24, 0x18, 0xA0, 0xDD, 0x77, 0x8C, 0x5C, 0xB7, 0x49, 0xD1, 0x75, 
	0xA0, 0xA2, 0xA9, 0x18, 0x85, 0x54, 0xB4, 0x03, 0x65, 0x11, 0x0F, 0x60, 0xA1, 0x0E, 0x43, 0xE8, 
	0x63, 0x2A, 0x94, 0xF2, 0x39, 0x69, 0xA6, 0x31, 0xEC, 0xA4, 0x1D, 0xEF, 0x37, 0x8D, 0x4B, 0x69, 
	0xA9, 0x36, 0xC8, 0x5D, 0xB2, 0xD1, 0x42, 0xAC, 0x00, 0x04, 0x78, 0x29, 0x7B, 0xBE, 0xB1, 0x81, 
	0x4C, 0xFB, 0x4F, 0x19, 0x6F, 0x15, 0x10, 0xA4, 0x1C, 0x8B, 0x97, 0x4F, 0x56, 0x43, 0x54, 0x92, 
	0x6A, 0x94, 0x40, 0xA8, 0xA9, 0xA4, 0x9C, 0x17, 0xD0, 0xB6, 0x16, 0x27, 0xFD, 0x37, 0x41, 0xCF, 
	0xD6, 0x61, 0xE3, 0x03, 0xFF, 0xD9
};

class Number
{
private:


public:
  //void init();
  void printfW3660(int numx,int numy,int numn);
  void printfO3660(int numx,int numy,int numn);
  void printfW1830(int numx,int numy,int numn);
  void printfdian(int numx,int numy);
};


#endif
