﻿#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_6_DIRSEK
#define LV_ATTRIBUTE_IMG_6_DIRSEK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_6_DIRSEK uint8_t Dirsek6_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xd0, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6e, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x6e, 0x10, 0x92, 0xd0, 0x92, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb7, 0xff, 0xb7, 0xff, 0xb7, 0xff, 0x92, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x6e, 0xd0, 0x92, 0xff, 0xb6, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x92, 0xff, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xd7, 0xff, 0xdb, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x6e, 0xe0, 0x92, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xb6, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0xdb, 0xff, 
  0x00, 0x00, 0x92, 0xff, 0xb6, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xb6, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0xb6, 0xff, 
  0x00, 0x00, 0x92, 0xff, 0xb6, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6e, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xd0, 
  0x00, 0x00, 0x92, 0xff, 0xb6, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x92, 0xff, 0x6e, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x92, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x92, 0xff, 0x72, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x92, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x92, 0xff, 0x92, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x49, 0xa0, 0x6e, 0xff, 0xb6, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x92, 0xff, 0x6e, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x52, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x6b, 0xd0, 0xf0, 0x7b, 0xff, 0xf0, 0x83, 0xff, 0x31, 0x8c, 0xff, 0x10, 0x84, 0xff, 0x10, 0x84, 0xff, 0x4d, 0x6b, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x63, 0x10, 0x8e, 0x73, 0xd0, 0xf0, 0x83, 0xff, 0x71, 0x8c, 0xff, 0xf3, 0x9c, 0xff, 0xf3, 0x9c, 0xff, 0x14, 0xa5, 0xff, 0x55, 0xad, 0xff, 0x96, 0xb5, 0xff, 0x72, 0x94, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x73, 0xd0, 0xf0, 0x83, 0xff, 0xf3, 0x9c, 0xff, 0xf8, 0xbd, 0xff, 0xfb, 0xde, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x3c, 0xe7, 0xff, 0xd7, 0xbd, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x83, 0xff, 0xf3, 0x9c, 0xff, 0x1c, 0xe7, 0xff, 0xba, 0xd6, 0xff, 0xf8, 0xbd, 0xff, 0xf8, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0x96, 0xb5, 0xff, 0xb7, 0xbd, 0xff, 0xbe, 0xf7, 0xff, 
  0x00, 0x00, 0x00, 0x6d, 0x6b, 0xe0, 0x51, 0x8c, 0xff, 0xf8, 0xbd, 0xff, 0xdb, 0xde, 0xff, 0xf8, 0xbd, 0xff, 0xb2, 0x94, 0xff, 0x51, 0x8c, 0xff, 0x31, 0x8c, 0xff, 0x31, 0x8c, 0xff, 0x30, 0x84, 0xff, 0x18, 0xc6, 0xff, 
  0x00, 0x00, 0x00, 0xf0, 0x83, 0xff, 0x14, 0xa5, 0xff, 0xbb, 0xde, 0xff, 0xf8, 0xbd, 0xff, 0xf3, 0x9c, 0xff, 0xcf, 0x7b, 0xff, 0xcf, 0x7b, 0xff, 0xaf, 0x73, 0xff, 0x8e, 0x73, 0xff, 0x6d, 0x6b, 0xff, 0x92, 0x94, 0xff, 
  0x00, 0x00, 0x00, 0xf0, 0x83, 0xff, 0xf3, 0x9c, 0xff, 0x1c, 0xe7, 0xff, 0xf8, 0xbd, 0xff, 0x51, 0x8c, 0xff, 0xcf, 0x7b, 0xff, 0x4d, 0x6b, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x73, 0xd0, 
  0x00, 0x00, 0x00, 0xf0, 0x83, 0xff, 0xf3, 0x9c, 0xff, 0x1c, 0xe7, 0xff, 0xf8, 0xbd, 0xff, 0x31, 0x84, 0xff, 0x6e, 0x6b, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xf0, 0x83, 0xff, 0x55, 0xad, 0xff, 0x1c, 0xe7, 0xff, 0xf8, 0xbd, 0xff, 0x31, 0x8c, 0xff, 0x8e, 0x73, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x84, 0xff, 0x14, 0xa5, 0xff, 0x1c, 0xe7, 0xff, 0xb7, 0xbd, 0xff, 0x31, 0x8c, 0xff, 0xaf, 0x7b, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x6a, 0x52, 0xa0, 0x6e, 0x73, 0xff, 0x92, 0x94, 0xff, 0x18, 0xc6, 0xff, 0xbe, 0xf7, 0xff, 0xd7, 0xbd, 0xff, 0x72, 0x94, 0xff, 0x4d, 0x6b, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x6a, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x6e, 0xd0, 0x7b, 0xf0, 0xff, 0x83, 0xf0, 0xff, 0x8c, 0x31, 0xff, 0x84, 0x10, 0xff, 0x84, 0x10, 0xff, 0x6b, 0x4d, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0c, 0x10, 0x73, 0x8e, 0xd0, 0x83, 0xf0, 0xff, 0x8c, 0x71, 0xff, 0x9c, 0xf3, 0xff, 0x9c, 0xf3, 0xff, 0xa5, 0x14, 0xff, 0xad, 0x55, 0xff, 0xb5, 0x96, 0xff, 0x94, 0x72, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x8e, 0xd0, 0x83, 0xf0, 0xff, 0x9c, 0xf3, 0xff, 0xbd, 0xf8, 0xff, 0xde, 0xfb, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x3c, 0xff, 0xbd, 0xd7, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xf0, 0xff, 0x9c, 0xf3, 0xff, 0xe7, 0x1c, 0xff, 0xd6, 0xba, 0xff, 0xbd, 0xf8, 0xff, 0xbd, 0xf8, 0xff, 0xbd, 0xb7, 0xff, 0xb5, 0x96, 0xff, 0xbd, 0xb7, 0xff, 0xf7, 0xbe, 0xff, 
  0x00, 0x00, 0x00, 0x6b, 0x6d, 0xe0, 0x8c, 0x51, 0xff, 0xbd, 0xf8, 0xff, 0xde, 0xdb, 0xff, 0xbd, 0xf8, 0xff, 0x94, 0xb2, 0xff, 0x8c, 0x51, 0xff, 0x8c, 0x31, 0xff, 0x8c, 0x31, 0xff, 0x84, 0x30, 0xff, 0xc6, 0x18, 0xff, 
  0x00, 0x00, 0x00, 0x83, 0xf0, 0xff, 0xa5, 0x14, 0xff, 0xde, 0xbb, 0xff, 0xbd, 0xf8, 0xff, 0x9c, 0xf3, 0xff, 0x7b, 0xcf, 0xff, 0x7b, 0xcf, 0xff, 0x73, 0xaf, 0xff, 0x73, 0x8e, 0xff, 0x6b, 0x6d, 0xff, 0x94, 0x92, 0xff, 
  0x00, 0x00, 0x00, 0x83, 0xf0, 0xff, 0x9c, 0xf3, 0xff, 0xe7, 0x1c, 0xff, 0xbd, 0xf8, 0xff, 0x8c, 0x51, 0xff, 0x7b, 0xcf, 0xff, 0x6b, 0x4d, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x6e, 0xd0, 
  0x00, 0x00, 0x00, 0x83, 0xf0, 0xff, 0x9c, 0xf3, 0xff, 0xe7, 0x1c, 0xff, 0xbd, 0xf8, 0xff, 0x84, 0x31, 0xff, 0x6b, 0x6e, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x83, 0xf0, 0xff, 0xad, 0x55, 0xff, 0xe7, 0x1c, 0xff, 0xbd, 0xf8, 0xff, 0x8c, 0x31, 0xff, 0x73, 0x8e, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x84, 0x30, 0xff, 0xa5, 0x14, 0xff, 0xe7, 0x1c, 0xff, 0xbd, 0xb7, 0xff, 0x8c, 0x31, 0xff, 0x7b, 0xaf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x52, 0x6a, 0xa0, 0x73, 0x6e, 0xff, 0x94, 0x92, 0xff, 0xc6, 0x18, 0xff, 0xf7, 0xbe, 0xff, 0xbd, 0xd7, 0xff, 0x94, 0x72, 0xff, 0x6b, 0x4d, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x4d, 0x4d, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x6c, 0x6b, 0xd0, 0x7c, 0x7b, 0x7b, 0xff, 0x7f, 0x7d, 0x7d, 0xff, 0x86, 0x85, 0x85, 0xff, 0x81, 0x80, 0x80, 0xff, 0x83, 0x81, 0x81, 0xff, 0x68, 0x68, 0x6a, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x10, 0x71, 0x70, 0x70, 0xd0, 0x7f, 0x7d, 0x7d, 0xff, 0x8b, 0x8a, 0x8a, 0xff, 0x9a, 0x9a, 0x9b, 0xff, 0x9a, 0x9a, 0x9b, 0xff, 0xa1, 0xa1, 0xa2, 0xff, 0xa8, 0xa7, 0xa8, 0xff, 0xaf, 0xaf, 0xaf, 0xff, 0x8c, 0x8c, 0x8f, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x6e, 0x6e, 0xd0, 0x7f, 0x7d, 0x7d, 0xff, 0x9a, 0x9a, 0x9b, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0xdb, 0xdb, 0xd9, 0xff, 0xde, 0xde, 0xdc, 0xff, 0xde, 0xde, 0xdd, 0xff, 0xe0, 0xe0, 0xdf, 0xff, 0xe2, 0xe2, 0xe0, 0xff, 0xb9, 0xb8, 0xba, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7d, 0x7d, 0xff, 0x9a, 0x9a, 0x9b, 0xff, 0xde, 0xde, 0xdc, 0xff, 0xd3, 0xd3, 0xd3, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0xb5, 0xb5, 0xb5, 0xff, 0xb0, 0xaf, 0xb0, 0xff, 0xb5, 0xb4, 0xb4, 0xff, 0xf3, 0xf3, 0xf1, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x6b, 0x6a, 0x69, 0xe0, 0x89, 0x88, 0x88, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0xd6, 0xd7, 0xd6, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0x93, 0x92, 0x93, 0xff, 0x88, 0x87, 0x88, 0xff, 0x86, 0x85, 0x86, 0xff, 0x84, 0x83, 0x84, 0xff, 0x83, 0x82, 0x83, 0xff, 0xbf, 0xbf, 0xc1, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x7d, 0x7d, 0xff, 0x9f, 0x9e, 0xa0, 0xff, 0xd4, 0xd4, 0xd4, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0x9a, 0x9a, 0x9b, 0xff, 0x79, 0x77, 0x77, 0xff, 0x79, 0x77, 0x77, 0xff, 0x74, 0x73, 0x72, 0xff, 0x6f, 0x6e, 0x6e, 0xff, 0x6b, 0x6a, 0x69, 0xff, 0x91, 0x91, 0x93, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x7d, 0x7d, 0xff, 0x9a, 0x9a, 0x9b, 0xff, 0xde, 0xde, 0xdc, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0x88, 0x87, 0x88, 0xff, 0x79, 0x77, 0x77, 0xff, 0x68, 0x68, 0x64, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x6b, 0x6e, 0xd0, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x7d, 0x7d, 0xff, 0x9a, 0x9a, 0x9b, 0xff, 0xe1, 0xe0, 0xdf, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0x84, 0x83, 0x83, 0xff, 0x6d, 0x6b, 0x6b, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x7d, 0x7d, 0xff, 0xa7, 0xa7, 0xa8, 0xff, 0xe0, 0xe0, 0xdf, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0x85, 0x83, 0x84, 0xff, 0x71, 0x70, 0x6f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x83, 0x82, 0x82, 0xff, 0xa0, 0x9f, 0xa0, 0xff, 0xde, 0xde, 0xdd, 0xff, 0xb5, 0xb5, 0xb5, 0xff, 0x86, 0x85, 0x86, 0xff, 0x75, 0x74, 0x74, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x4e, 0x4d, 0x4d, 0xa0, 0x6c, 0x6b, 0x6e, 0xff, 0x91, 0x91, 0x93, 0xff, 0xbf, 0xbf, 0xc1, 0xff, 0xf3, 0xf3, 0xf1, 0xff, 0xb9, 0xb8, 0xba, 0xff, 0x8c, 0x8c, 0x8f, 0xff, 0x68, 0x68, 0x6b, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t Dirsek6 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 12,
  .header.h = 12,
  .data_size = 144 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = Dirsek6_map,
};