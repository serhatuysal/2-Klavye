#ifdef __has_include
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

#ifndef LV_ATTRIBUTE_IMG_T_BORU_CIP
#define LV_ATTRIBUTE_IMG_T_BORU_CIP
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_T_BORU_CIP uint8_t T_Boru_cip_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x49, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xa0, 
  0x6e, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6e, 0xff, 
  0xb6, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x92, 0xff, 
  0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 
  0xff, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xff, 0xff, 
  0xdb, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0x92, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb2, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0xdb, 0xff, 
  0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x72, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0xb7, 0xff, 0xff, 0xff, 0x92, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0xb6, 0xff, 
  0x6e, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb6, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xd0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb6, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb7, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb7, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb7, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb7, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xb6, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xa0, 0x92, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xb7, 0xff, 0x92, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x6a, 0x52, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x52, 0xa0, 
  0x6e, 0x73, 0xff, 0x51, 0x8c, 0xff, 0x71, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x94, 0xff, 0x72, 0x94, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x72, 0x94, 0xff, 0x72, 0x94, 0xff, 0x72, 0x94, 0xff, 0x72, 0x94, 0xff, 0x4d, 0x6b, 0xff, 
  0x92, 0x94, 0xff, 0xb6, 0xb5, 0xff, 0xb6, 0xb5, 0xff, 0xb7, 0xb5, 0xff, 0xb7, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0xb7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0x72, 0x94, 0xff, 
  0x18, 0xc6, 0xff, 0xfc, 0xde, 0xff, 0xfc, 0xe6, 0xff, 0xfc, 0xe6, 0xff, 0xfc, 0xe6, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x1c, 0xe7, 0xff, 0x3c, 0xe7, 0xff, 0x3c, 0xe7, 0xff, 0x3c, 0xe7, 0xff, 0x3c, 0xe7, 0xff, 0xd7, 0xbd, 0xff, 
  0xbe, 0xf7, 0xff, 0xf8, 0xc5, 0xff, 0xf8, 0xc5, 0xff, 0xf8, 0xbd, 0xff, 0xf8, 0xbd, 0xff, 0xf7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xb6, 0xb5, 0xff, 0x35, 0xad, 0xff, 0x1c, 0xe7, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xd7, 0xbd, 0xff, 0xbe, 0xf7, 0xff, 
  0xd7, 0xbd, 0xff, 0xb3, 0x94, 0xff, 0xb2, 0x94, 0xff, 0xb2, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0xf0, 0x83, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0xd3, 0x9c, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x18, 0xc6, 0xff, 
  0x72, 0x94, 0xff, 0xaf, 0x73, 0xff, 0xae, 0x73, 0xff, 0x8e, 0x73, 0xff, 0x8e, 0x73, 0xff, 0x8e, 0x73, 0xff, 0x8e, 0x73, 0xff, 0x4d, 0x6b, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x92, 0x94, 0xff, 0x6d, 0x6b, 0xff, 0x4d, 0x6b, 0xff, 0x4d, 0x6b, 0xff, 0x4d, 0x6b, 0xff, 0x4d, 0x6b, 0xff, 0x4d, 0x6b, 0xff, 0x92, 0x94, 0xff, 
  0x4d, 0x6b, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x14, 0xa5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x73, 0xd0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x14, 0xa5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x73, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x14, 0xa5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x73, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x14, 0xa5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x6b, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x14, 0xa5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x14, 0xa5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0xff, 0x35, 0xa5, 0xff, 0x3c, 0xe7, 0xff, 0x14, 0xa5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x52, 0xa0, 0xcf, 0x7b, 0xff, 0x96, 0xb5, 0xff, 0xbe, 0xf7, 0xff, 0x55, 0xad, 0xff, 0xae, 0x7b, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x52, 0x6a, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x6a, 0xa0, 
  0x73, 0x6e, 0xff, 0x8c, 0x51, 0xff, 0x8c, 0x71, 0xff, 0x8c, 0x72, 0xff, 0x8c, 0x72, 0xff, 0x94, 0x72, 0xff, 0x94, 0x72, 0xff, 0x8c, 0x72, 0xff, 0x8c, 0x72, 0xff, 0x8c, 0x72, 0xff, 0x8c, 0x72, 0xff, 0x8c, 0x72, 0xff, 0x8c, 0x72, 0xff, 0x94, 0x72, 0xff, 0x94, 0x72, 0xff, 0x94, 0x72, 0xff, 0x94, 0x72, 0xff, 0x6b, 0x4d, 0xff, 
  0x94, 0x92, 0xff, 0xb5, 0xb6, 0xff, 0xb5, 0xb6, 0xff, 0xb5, 0xb7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xb7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0x94, 0x72, 0xff, 
  0xc6, 0x18, 0xff, 0xde, 0xfc, 0xff, 0xe6, 0xfc, 0xff, 0xe6, 0xfc, 0xff, 0xe6, 0xfc, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x1c, 0xff, 0xe7, 0x3c, 0xff, 0xe7, 0x3c, 0xff, 0xe7, 0x3c, 0xff, 0xe7, 0x3c, 0xff, 0xbd, 0xd7, 0xff, 
  0xf7, 0xbe, 0xff, 0xc5, 0xf8, 0xff, 0xc5, 0xf8, 0xff, 0xbd, 0xf8, 0xff, 0xbd, 0xf8, 0xff, 0xbd, 0xf7, 0xff, 0xbd, 0xd7, 0xff, 0xb5, 0xb6, 0xff, 0xad, 0x35, 0xff, 0xe7, 0x1c, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xbd, 0xd7, 0xff, 0xf7, 0xbe, 0xff, 
  0xbd, 0xd7, 0xff, 0x94, 0xb3, 0xff, 0x94, 0xb2, 0xff, 0x94, 0xb2, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x83, 0xf0, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0x9c, 0xd3, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0xc6, 0x18, 0xff, 
  0x94, 0x72, 0xff, 0x73, 0xaf, 0xff, 0x73, 0xae, 0xff, 0x73, 0x8e, 0xff, 0x73, 0x8e, 0xff, 0x73, 0x8e, 0xff, 0x73, 0x8e, 0xff, 0x6b, 0x4d, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0x94, 0x92, 0xff, 0x6b, 0x6d, 0xff, 0x6b, 0x4d, 0xff, 0x6b, 0x4d, 0xff, 0x6b, 0x4d, 0xff, 0x6b, 0x4d, 0xff, 0x6b, 0x4d, 0xff, 0x94, 0x92, 0xff, 
  0x6b, 0x4d, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x4d, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0xa5, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x6e, 0xd0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x4d, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0xa5, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x8e, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0xa5, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x8e, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0xa5, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x6e, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0xa5, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x4d, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0xa5, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x4d, 0xff, 0xa5, 0x35, 0xff, 0xe7, 0x3c, 0xff, 0xa5, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x6a, 0xa0, 0x7b, 0xcf, 0xff, 0xb5, 0x96, 0xff, 0xf7, 0xbe, 0xff, 0xad, 0x55, 0xff, 0x7b, 0xae, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x4e, 0x4d, 0x4d, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x4d, 0x4d, 0xa0, 
  0x6c, 0x6b, 0x6e, 0xff, 0x8a, 0x89, 0x89, 0xff, 0x8b, 0x8a, 0x8a, 0xff, 0x8c, 0x8b, 0x8a, 0xff, 0x8c, 0x8b, 0x8b, 0xff, 0x8d, 0x8c, 0x8c, 0xff, 0x8e, 0x8d, 0x8d, 0xff, 0x8c, 0x8b, 0x8a, 0xff, 0x8c, 0x8b, 0x8a, 0xff, 0x8c, 0x8b, 0x8b, 0xff, 0x8c, 0x8b, 0x8b, 0xff, 0x8c, 0x8b, 0x8b, 0xff, 0x8d, 0x8c, 0x8b, 0xff, 0x8d, 0x8c, 0x8c, 0xff, 0x8d, 0x8c, 0x8c, 0xff, 0x8e, 0x8d, 0x8c, 0xff, 0x8e, 0x8d, 0x8c, 0xff, 0x68, 0x68, 0x6a, 0xff, 
  0x91, 0x91, 0x93, 0xff, 0xb3, 0xb2, 0xb2, 0xff, 0xb3, 0xb3, 0xb3, 0xff, 0xb4, 0xb4, 0xb3, 0xff, 0xb5, 0xb4, 0xb4, 0xff, 0xb6, 0xb5, 0xb5, 0xff, 0xb6, 0xb6, 0xb6, 0xff, 0xb7, 0xb6, 0xb6, 0xff, 0xb5, 0xb4, 0xb4, 0xff, 0xb5, 0xb4, 0xb4, 0xff, 0xb5, 0xb5, 0xb4, 0xff, 0xb6, 0xb5, 0xb5, 0xff, 0xb6, 0xb5, 0xb5, 0xff, 0xb6, 0xb5, 0xb5, 0xff, 0xb6, 0xb6, 0xb5, 0xff, 0xb7, 0xb6, 0xb6, 0xff, 0xb7, 0xb6, 0xb6, 0xff, 0x8c, 0x8c, 0x8f, 0xff, 
  0xbf, 0xbf, 0xc1, 0xff, 0xdd, 0xdc, 0xdb, 0xff, 0xdd, 0xdd, 0xdc, 0xff, 0xde, 0xdd, 0xdc, 0xff, 0xde, 0xdd, 0xdc, 0xff, 0xdf, 0xde, 0xdd, 0xff, 0xdf, 0xdf, 0xdd, 0xff, 0xdf, 0xdf, 0xdd, 0xff, 0xdf, 0xdf, 0xde, 0xff, 0xe0, 0xdf, 0xde, 0xff, 0xe0, 0xe0, 0xde, 0xff, 0xe0, 0xe0, 0xdf, 0xff, 0xe1, 0xe0, 0xdf, 0xff, 0xe2, 0xe2, 0xe0, 0xff, 0xe2, 0xe2, 0xe0, 0xff, 0xe2, 0xe2, 0xe0, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0xb9, 0xb8, 0xba, 0xff, 
  0xf3, 0xf3, 0xf1, 0xff, 0xbe, 0xbd, 0xbd, 0xff, 0xbd, 0xbc, 0xbc, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0xbc, 0xbb, 0xbb, 0xff, 0xbb, 0xba, 0xba, 0xff, 0xba, 0xb9, 0xb9, 0xff, 0xb3, 0xb2, 0xb3, 0xff, 0xa5, 0xa4, 0xa4, 0xff, 0xe0, 0xe0, 0xde, 0xff, 0xb9, 0xb8, 0xb8, 0xff, 0xba, 0xb9, 0xb9, 0xff, 0xba, 0xb9, 0xb9, 0xff, 0xba, 0xb9, 0xb9, 0xff, 0xb9, 0xb8, 0xb9, 0xff, 0xb9, 0xb8, 0xb8, 0xff, 0xb8, 0xb8, 0xb8, 0xff, 0xf3, 0xf3, 0xf1, 0xff, 
  0xb9, 0xb8, 0xba, 0xff, 0x94, 0x93, 0x93, 0xff, 0x93, 0x93, 0x93, 0xff, 0x93, 0x92, 0x91, 0xff, 0x92, 0x91, 0x91, 0xff, 0x91, 0x90, 0x91, 0xff, 0x91, 0x90, 0x90, 0xff, 0x7e, 0x7d, 0x7c, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0x97, 0x96, 0x97, 0xff, 0x91, 0x90, 0x90, 0xff, 0x91, 0x90, 0x90, 0xff, 0x90, 0x8f, 0x90, 0xff, 0x90, 0x8f, 0x8f, 0xff, 0x90, 0x8f, 0x8f, 0xff, 0x90, 0x8f, 0x8f, 0xff, 0xbf, 0xbf, 0xc1, 0xff, 
  0x8c, 0x8c, 0x8f, 0xff, 0x74, 0x73, 0x71, 0xff, 0x73, 0x72, 0x71, 0xff, 0x72, 0x71, 0x70, 0xff, 0x71, 0x70, 0x6f, 0xff, 0x70, 0x6f, 0x6e, 0xff, 0x6f, 0x6e, 0x6d, 0xff, 0x6a, 0x69, 0x68, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0x90, 0x8f, 0x8f, 0xff, 0x6b, 0x6a, 0x68, 0xff, 0x6a, 0x69, 0x67, 0xff, 0x69, 0x68, 0x66, 0xff, 0x68, 0x67, 0x66, 0xff, 0x68, 0x67, 0x65, 0xff, 0x67, 0x66, 0x64, 0xff, 0x91, 0x91, 0x93, 0xff, 
  0x68, 0x68, 0x69, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x67, 0x65, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0x9f, 0x9e, 0x9e, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x6b, 0x6e, 0xd0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x66, 0x65, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0x9f, 0x9e, 0x9e, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x71, 0x6f, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0xa0, 0x9f, 0x9f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x70, 0x6e, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0xa0, 0xa0, 0x9f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x6c, 0x6b, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0xa1, 0xa1, 0xa0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x68, 0x67, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0xa1, 0xa1, 0xa0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x66, 0x64, 0xff, 0xa4, 0xa4, 0xa3, 0xff, 0xe3, 0xe3, 0xe1, 0xff, 0x9f, 0x9e, 0x9e, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x4d, 0x4d, 0xa0, 0x77, 0x76, 0x7a, 0xff, 0xaf, 0xae, 0xb0, 0xff, 0xf3, 0xf3, 0xf1, 0xff, 0xa8, 0xa8, 0xaa, 0xff, 0x73, 0x73, 0x76, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t T_Boru_cip = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 18,
  .header.h = 15,
  .data_size = 270 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = T_Boru_cip_map,
};
