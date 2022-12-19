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

#ifndef LV_ATTRIBUTE_IMG_DOSING_PUMP_RUN
#define LV_ATTRIBUTE_IMG_DOSING_PUMP_RUN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DOSING_PUMP_RUN uint8_t dosing_pump_run_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xd0, 0x92, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x92, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x70, 0x9e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x76, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 0xa0, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0x9a, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x55, 0x3c, 0x59, 0xbe, 0x7a, 0xff, 0x9e, 0xff, 0xba, 0xff, 0xbb, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9a, 0xff, 0x7a, 0xbe, 0x75, 0x3c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x55, 0x70, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x75, 0x70, 0x00, 0x00, 0x00, 0x00, 
  0x39, 0xd8, 0x39, 0xd0, 0x59, 0xe1, 0x5d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7e, 0xff, 0x79, 0xe1, 0x59, 0xd0, 0x39, 0xd0, 
  0x3c, 0xff, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x3c, 0xff, 
  0x35, 0xcd, 0x3d, 0xff, 0x5d, 0xff, 0x5d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0xc8, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x35, 0x70, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x55, 0x70, 
  0x51, 0x94, 0x49, 0xff, 0x6d, 0xff, 0x92, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xb7, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6e, 0xff, 0x51, 0x94, 
  0x51, 0x94, 0x49, 0xff, 0x6d, 0xff, 0x92, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xb7, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6e, 0xff, 0x51, 0x94, 
  0x51, 0x94, 0x49, 0xff, 0x6d, 0xff, 0x92, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xb7, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6e, 0xff, 0x51, 0x94, 
  0x35, 0xe7, 0x3d, 0xff, 0x5d, 0xff, 0x5d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x59, 0xe1, 
  0x3c, 0xff, 0x3c, 0xff, 0x5d, 0xff, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0x5d, 0xff, 0x3c, 0xff, 
  0x35, 0xa8, 0x39, 0xa0, 0x55, 0xc8, 0x5d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x7e, 0xff, 0x75, 0xc8, 0x59, 0xa0, 0x59, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x55, 0x70, 0x7d, 0xff, 0x7e, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0x9e, 0xff, 0x75, 0x70, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x55, 0x1f, 0x55, 0x70, 0x75, 0x70, 0x76, 0x70, 0x71, 0xe5, 0x92, 0xff, 0xb7, 0xff, 0xdb, 0xff, 0xb7, 0xff, 0x92, 0xe5, 0x96, 0x70, 0x76, 0x70, 0x75, 0x70, 0x75, 0x1f, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x52, 0xd0, 0x51, 0x8c, 0xff, 0x18, 0xc6, 0xff, 0xbe, 0xf7, 0xff, 0xd7, 0xbd, 0xff, 0x10, 0x84, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcb, 0x5c, 0x70, 0xaf, 0x7e, 0xff, 0xb2, 0x96, 0xff, 0xb5, 0xae, 0xff, 0xb7, 0xbe, 0xff, 0xba, 0xd6, 0xff, 0xb8, 0xc6, 0xff, 0xb5, 0xae, 0xff, 0xb3, 0x9e, 0xff, 0xcd, 0x6c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x65, 0xa0, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xcf, 0x7d, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x45, 0x3c, 0xaa, 0x55, 0xbe, 0x2c, 0x66, 0xff, 0xaf, 0x7e, 0xff, 0xf4, 0xa5, 0xff, 0x35, 0xae, 0xff, 0xb7, 0xbe, 0xff, 0xba, 0xd6, 0xff, 0xb8, 0xc6, 0xff, 0xb5, 0xae, 0xff, 0xb3, 0x9e, 0xff, 0x70, 0x86, 0xff, 0xac, 0x65, 0xbe, 0x0a, 0x55, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x44, 0x70, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf4, 0xa6, 0xff, 0x57, 0xbf, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xca, 0x54, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x84, 0x25, 0xd8, 0x45, 0x2e, 0xd0, 0xc8, 0x45, 0xe1, 0xaa, 0x56, 0xff, 0xad, 0x6e, 0xff, 0xaf, 0x7e, 0xff, 0xb2, 0x96, 0xff, 0xb5, 0xae, 0xff, 0xb7, 0xbe, 0xff, 0xba, 0xd6, 0xff, 0xb8, 0xc6, 0xff, 0xb5, 0xae, 0xff, 0xb3, 0x9e, 0xff, 0xb0, 0x86, 0xff, 0xad, 0x6e, 0xff, 0xca, 0x55, 0xe1, 0x48, 0x46, 0xd0, 0x45, 0x2e, 0xd0, 
  0xa2, 0x16, 0xff, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xe4, 0x27, 0xff, 
  0xc6, 0x34, 0xcd, 0xa5, 0x2e, 0xff, 0xa7, 0x3e, 0xff, 0xaa, 0x56, 0xff, 0xad, 0x6e, 0xff, 0xaf, 0x7e, 0xff, 0xb2, 0x96, 0xff, 0xb5, 0xae, 0xff, 0xb7, 0xbe, 0xff, 0xba, 0xd6, 0xff, 0xb8, 0xc6, 0xff, 0xb5, 0xae, 0xff, 0xb3, 0x9e, 0xff, 0xb0, 0x86, 0xff, 0xad, 0x6e, 0xff, 0xab, 0x5e, 0xff, 0xa8, 0x46, 0xff, 0x07, 0x3d, 0xc8, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xda, 0xce, 0xff, 0x1c, 0xdf, 0xff, 0x1b, 0xd7, 0xff, 0x19, 0xcf, 0xff, 0x18, 0xbf, 0xff, 0x17, 0xb7, 0xff, 0x52, 0x97, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0x1c, 0xd7, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0x15, 0xaf, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0x59, 0xc6, 0xff, 0x1c, 0xd7, 0xff, 0x1c, 0xd7, 0xff, 0x1c, 0xd7, 0xff, 0x1c, 0xd7, 0xff, 0x1c, 0xd7, 0xff, 0xd5, 0xa6, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc5, 0x2c, 0x70, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xc7, 0x3c, 0x70, 
  0xc7, 0x3b, 0x94, 0x6a, 0x52, 0xff, 0x0c, 0x63, 0xff, 0xae, 0x73, 0xff, 0x51, 0x8c, 0xff, 0xf4, 0xa4, 0xff, 0xb6, 0xb5, 0xff, 0x59, 0xce, 0xff, 0xfc, 0xe6, 0xff, 0xbe, 0xf7, 0xff, 0x3c, 0xe7, 0xff, 0x7a, 0xd6, 0xff, 0xd7, 0xbd, 0xff, 0x34, 0xa5, 0xff, 0x72, 0x94, 0xff, 0xcf, 0x7b, 0xff, 0x2c, 0x63, 0xff, 0xc8, 0x43, 0x94, 
  0xc7, 0x3b, 0x94, 0x6a, 0x52, 0xff, 0x0c, 0x63, 0xff, 0xae, 0x73, 0xff, 0x51, 0x8c, 0xff, 0xf4, 0xa4, 0xff, 0xb6, 0xb5, 0xff, 0x59, 0xce, 0xff, 0xfc, 0xe6, 0xff, 0xbe, 0xf7, 0xff, 0x3c, 0xe7, 0xff, 0x7a, 0xd6, 0xff, 0xd7, 0xbd, 0xff, 0x34, 0xa5, 0xff, 0x72, 0x94, 0xff, 0xcf, 0x7b, 0xff, 0x2c, 0x63, 0xff, 0xc8, 0x43, 0x94, 
  0xc7, 0x3b, 0x94, 0x6a, 0x52, 0xff, 0x0c, 0x63, 0xff, 0xae, 0x73, 0xff, 0x51, 0x8c, 0xff, 0xf4, 0xa4, 0xff, 0xb6, 0xb5, 0xff, 0x59, 0xce, 0xff, 0xfc, 0xe6, 0xff, 0xbe, 0xf7, 0xff, 0x3c, 0xe7, 0xff, 0x7a, 0xd6, 0xff, 0xd7, 0xbd, 0xff, 0x34, 0xa5, 0xff, 0x72, 0x94, 0xff, 0xcf, 0x7b, 0xff, 0x2c, 0x63, 0xff, 0xc8, 0x43, 0x94, 
  0x05, 0x2d, 0xe7, 0xa5, 0x2e, 0xff, 0xa7, 0x3e, 0xff, 0xaa, 0x56, 0xff, 0xad, 0x6e, 0xff, 0xaf, 0x7e, 0xff, 0xb2, 0x96, 0xff, 0xb5, 0xae, 0xff, 0xb7, 0xbe, 0xff, 0xba, 0xd6, 0xff, 0xb8, 0xc6, 0xff, 0xb5, 0xae, 0xff, 0xb3, 0x9e, 0xff, 0xb0, 0x86, 0xff, 0xad, 0x6e, 0xff, 0xab, 0x5e, 0xff, 0xa8, 0x46, 0xff, 0xc6, 0x35, 0xe1, 
  0xa2, 0x16, 0xff, 0xe3, 0x1f, 0xff, 0xe7, 0x3f, 0xff, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xeb, 0x5f, 0xff, 0xe7, 0x3f, 0xff, 0xe4, 0x27, 0xff, 
  0x65, 0x2d, 0xa8, 0xc6, 0x35, 0xa0, 0x08, 0x45, 0xc8, 0xaa, 0x56, 0xff, 0xad, 0x6e, 0xff, 0xaf, 0x7e, 0xff, 0xb2, 0x96, 0xff, 0xb5, 0xae, 0xff, 0xb7, 0xbe, 0xff, 0xba, 0xd6, 0xff, 0xb8, 0xc6, 0xff, 0xb5, 0xae, 0xff, 0xb3, 0x9e, 0xff, 0xb0, 0x86, 0xff, 0xad, 0x6e, 0xff, 0x0a, 0x55, 0xc8, 0xc8, 0x45, 0xa0, 0xc6, 0x35, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x44, 0x70, 0xea, 0x57, 0xff, 0xee, 0x77, 0xff, 0xf1, 0x8f, 0xff, 0xf5, 0xaf, 0xff, 0xf8, 0xc7, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf9, 0xcf, 0xff, 0xf6, 0xb7, 0xff, 0xf2, 0x97, 0xff, 0xef, 0x7f, 0xff, 0xca, 0x54, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x45, 0x1f, 0xca, 0x54, 0x70, 0xcb, 0x5c, 0x70, 0xcd, 0x6c, 0x70, 0xac, 0x63, 0xe5, 0x70, 0x84, 0xff, 0x75, 0xad, 0xff, 0x79, 0xce, 0xff, 0x95, 0xad, 0xff, 0x91, 0x8c, 0xe5, 0xcf, 0x7c, 0x70, 0xcd, 0x6c, 0x70, 0xcc, 0x64, 0x70, 0x2a, 0x55, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x6a, 0xd0, 0x8c, 0x51, 0xff, 0xc6, 0x18, 0xff, 0xf7, 0xbe, 0xff, 0xbd, 0xd7, 0xff, 0x84, 0x10, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0xcb, 0x70, 0x7e, 0xaf, 0xff, 0x96, 0xb2, 0xff, 0xae, 0xb5, 0xff, 0xbe, 0xb7, 0xff, 0xd6, 0xba, 0xff, 0xc6, 0xb8, 0xff, 0xae, 0xb5, 0xff, 0x9e, 0xb3, 0xff, 0x6c, 0xcd, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0xcc, 0xa0, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x7d, 0xcf, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x08, 0x3c, 0x55, 0xaa, 0xbe, 0x66, 0x2c, 0xff, 0x7e, 0xaf, 0xff, 0xa5, 0xf4, 0xff, 0xae, 0x35, 0xff, 0xbe, 0xb7, 0xff, 0xd6, 0xba, 0xff, 0xc6, 0xb8, 0xff, 0xae, 0xb5, 0xff, 0x9e, 0xb3, 0xff, 0x86, 0x70, 0xff, 0x65, 0xac, 0xbe, 0x55, 0x0a, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xc8, 0x70, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xa6, 0xf4, 0xff, 0xbf, 0x57, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x54, 0xca, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x25, 0x84, 0xd8, 0x2e, 0x45, 0xd0, 0x45, 0xc8, 0xe1, 0x56, 0xaa, 0xff, 0x6e, 0xad, 0xff, 0x7e, 0xaf, 0xff, 0x96, 0xb2, 0xff, 0xae, 0xb5, 0xff, 0xbe, 0xb7, 0xff, 0xd6, 0xba, 0xff, 0xc6, 0xb8, 0xff, 0xae, 0xb5, 0xff, 0x9e, 0xb3, 0xff, 0x86, 0xb0, 0xff, 0x6e, 0xad, 0xff, 0x55, 0xca, 0xe1, 0x46, 0x48, 0xd0, 0x2e, 0x45, 0xd0, 
  0x16, 0xa2, 0xff, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x27, 0xe4, 0xff, 
  0x34, 0xc6, 0xcd, 0x2e, 0xa5, 0xff, 0x3e, 0xa7, 0xff, 0x56, 0xaa, 0xff, 0x6e, 0xad, 0xff, 0x7e, 0xaf, 0xff, 0x96, 0xb2, 0xff, 0xae, 0xb5, 0xff, 0xbe, 0xb7, 0xff, 0xd6, 0xba, 0xff, 0xc6, 0xb8, 0xff, 0xae, 0xb5, 0xff, 0x9e, 0xb3, 0xff, 0x86, 0xb0, 0xff, 0x6e, 0xad, 0xff, 0x5e, 0xab, 0xff, 0x46, 0xa8, 0xff, 0x3d, 0x07, 0xc8, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xce, 0xda, 0xff, 0xdf, 0x1c, 0xff, 0xd7, 0x1b, 0xff, 0xcf, 0x19, 0xff, 0xbf, 0x18, 0xff, 0xb7, 0x17, 0xff, 0x97, 0x52, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xd7, 0x1c, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xaf, 0x15, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xc6, 0x59, 0xff, 0xd7, 0x1c, 0xff, 0xd7, 0x1c, 0xff, 0xd7, 0x1c, 0xff, 0xd7, 0x1c, 0xff, 0xd7, 0x1c, 0xff, 0xa6, 0xd5, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x2c, 0xc5, 0x70, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x3c, 0xc7, 0x70, 
  0x3b, 0xc7, 0x94, 0x52, 0x6a, 0xff, 0x63, 0x0c, 0xff, 0x73, 0xae, 0xff, 0x8c, 0x51, 0xff, 0xa4, 0xf4, 0xff, 0xb5, 0xb6, 0xff, 0xce, 0x59, 0xff, 0xe6, 0xfc, 0xff, 0xf7, 0xbe, 0xff, 0xe7, 0x3c, 0xff, 0xd6, 0x7a, 0xff, 0xbd, 0xd7, 0xff, 0xa5, 0x34, 0xff, 0x94, 0x72, 0xff, 0x7b, 0xcf, 0xff, 0x63, 0x2c, 0xff, 0x43, 0xc8, 0x94, 
  0x3b, 0xc7, 0x94, 0x52, 0x6a, 0xff, 0x63, 0x0c, 0xff, 0x73, 0xae, 0xff, 0x8c, 0x51, 0xff, 0xa4, 0xf4, 0xff, 0xb5, 0xb6, 0xff, 0xce, 0x59, 0xff, 0xe6, 0xfc, 0xff, 0xf7, 0xbe, 0xff, 0xe7, 0x3c, 0xff, 0xd6, 0x7a, 0xff, 0xbd, 0xd7, 0xff, 0xa5, 0x34, 0xff, 0x94, 0x72, 0xff, 0x7b, 0xcf, 0xff, 0x63, 0x2c, 0xff, 0x43, 0xc8, 0x94, 
  0x3b, 0xc7, 0x94, 0x52, 0x6a, 0xff, 0x63, 0x0c, 0xff, 0x73, 0xae, 0xff, 0x8c, 0x51, 0xff, 0xa4, 0xf4, 0xff, 0xb5, 0xb6, 0xff, 0xce, 0x59, 0xff, 0xe6, 0xfc, 0xff, 0xf7, 0xbe, 0xff, 0xe7, 0x3c, 0xff, 0xd6, 0x7a, 0xff, 0xbd, 0xd7, 0xff, 0xa5, 0x34, 0xff, 0x94, 0x72, 0xff, 0x7b, 0xcf, 0xff, 0x63, 0x2c, 0xff, 0x43, 0xc8, 0x94, 
  0x2d, 0x05, 0xe7, 0x2e, 0xa5, 0xff, 0x3e, 0xa7, 0xff, 0x56, 0xaa, 0xff, 0x6e, 0xad, 0xff, 0x7e, 0xaf, 0xff, 0x96, 0xb2, 0xff, 0xae, 0xb5, 0xff, 0xbe, 0xb7, 0xff, 0xd6, 0xba, 0xff, 0xc6, 0xb8, 0xff, 0xae, 0xb5, 0xff, 0x9e, 0xb3, 0xff, 0x86, 0xb0, 0xff, 0x6e, 0xad, 0xff, 0x5e, 0xab, 0xff, 0x46, 0xa8, 0xff, 0x35, 0xc6, 0xe1, 
  0x16, 0xa2, 0xff, 0x1f, 0xe3, 0xff, 0x3f, 0xe7, 0xff, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x5f, 0xeb, 0xff, 0x3f, 0xe7, 0xff, 0x27, 0xe4, 0xff, 
  0x2d, 0x65, 0xa8, 0x35, 0xc6, 0xa0, 0x45, 0x08, 0xc8, 0x56, 0xaa, 0xff, 0x6e, 0xad, 0xff, 0x7e, 0xaf, 0xff, 0x96, 0xb2, 0xff, 0xae, 0xb5, 0xff, 0xbe, 0xb7, 0xff, 0xd6, 0xba, 0xff, 0xc6, 0xb8, 0xff, 0xae, 0xb5, 0xff, 0x9e, 0xb3, 0xff, 0x86, 0xb0, 0xff, 0x6e, 0xad, 0xff, 0x55, 0x0a, 0xc8, 0x45, 0xc8, 0xa0, 0x35, 0xc6, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xc8, 0x70, 0x57, 0xea, 0xff, 0x77, 0xee, 0xff, 0x8f, 0xf1, 0xff, 0xaf, 0xf5, 0xff, 0xc7, 0xf8, 0xff, 0xe7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xcf, 0xf9, 0xff, 0xb7, 0xf6, 0xff, 0x97, 0xf2, 0xff, 0x7f, 0xef, 0xff, 0x54, 0xca, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x28, 0x1f, 0x54, 0xca, 0x70, 0x5c, 0xcb, 0x70, 0x6c, 0xcd, 0x70, 0x63, 0xac, 0xe5, 0x84, 0x70, 0xff, 0xad, 0x75, 0xff, 0xce, 0x79, 0xff, 0xad, 0x95, 0xff, 0x8c, 0x91, 0xe5, 0x7c, 0xcf, 0x70, 0x6c, 0xcd, 0x70, 0x64, 0xcc, 0x70, 0x55, 0x2a, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x4d, 0xd0, 0x86, 0x86, 0x86, 0xff, 0xbf, 0xbf, 0xbf, 0xff, 0xf2, 0xf2, 0xf1, 0xff, 0xba, 0xb9, 0xb9, 0xff, 0x82, 0x81, 0x81, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x99, 0x5b, 0x70, 0x7a, 0xd2, 0x7a, 0xff, 0x8f, 0xd2, 0x8f, 0xff, 0xa4, 0xd2, 0xa4, 0xff, 0xb9, 0xd2, 0xb9, 0xff, 0xce, 0xd2, 0xce, 0xff, 0xc0, 0xd2, 0xc0, 0xff, 0xaa, 0xd2, 0xaa, 0xff, 0x95, 0xd2, 0x95, 0xff, 0x69, 0x99, 0x69, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xb7, 0x60, 0xa0, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x74, 0xb7, 0x74, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa1, 0x40, 0x3c, 0x4e, 0xb4, 0x4e, 0xbe, 0x61, 0xc2, 0x61, 0xff, 0x7a, 0xd2, 0x7a, 0xff, 0x9e, 0xbd, 0x9e, 0xff, 0xa6, 0xc2, 0xa6, 0xff, 0xb9, 0xd2, 0xb9, 0xff, 0xce, 0xd2, 0xce, 0xff, 0xc0, 0xd2, 0xc0, 0xff, 0xaa, 0xd2, 0xaa, 0xff, 0x95, 0xd2, 0x95, 0xff, 0x7d, 0xcb, 0x7d, 0xff, 0x63, 0xb4, 0x63, 0xbe, 0x51, 0xa1, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x99, 0x42, 0x70, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa2, 0xdd, 0xa2, 0xff, 0xb9, 0xe9, 0xb9, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x52, 0x99, 0x52, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x22, 0xb0, 0x22, 0xd8, 0x27, 0xc8, 0x27, 0xd0, 0x3e, 0xb6, 0x3e, 0xe1, 0x4f, 0xd2, 0x4f, 0xff, 0x64, 0xd2, 0x64, 0xff, 0x7a, 0xd2, 0x7a, 0xff, 0x8f, 0xd2, 0x8f, 0xff, 0xa4, 0xd2, 0xa4, 0xff, 0xb9, 0xd2, 0xb9, 0xff, 0xce, 0xd2, 0xce, 0xff, 0xc0, 0xd2, 0xc0, 0xff, 0xaa, 0xd2, 0xaa, 0xff, 0x95, 0xd2, 0x95, 0xff, 0x80, 0xd2, 0x80, 0xff, 0x6a, 0xd2, 0x6a, 0xff, 0x53, 0xb6, 0x53, 0xe1, 0x40, 0xc8, 0x40, 0xd0, 0x2b, 0xc8, 0x2b, 0xd0, 
  0x13, 0xd2, 0x13, 0xff, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x1d, 0xff, 0x1d, 0xff, 
  0x2d, 0x97, 0x2d, 0xcd, 0x24, 0xd2, 0x24, 0xff, 0x3a, 0xd2, 0x3a, 0xff, 0x4f, 0xd2, 0x4f, 0xff, 0x64, 0xd2, 0x64, 0xff, 0x7a, 0xd2, 0x7a, 0xff, 0x8f, 0xd2, 0x8f, 0xff, 0xa4, 0xd2, 0xa4, 0xff, 0xb9, 0xd2, 0xb9, 0xff, 0xce, 0xd2, 0xce, 0xff, 0xc0, 0xd2, 0xc0, 0xff, 0xaa, 0xd2, 0xaa, 0xff, 0x95, 0xd2, 0x95, 0xff, 0x80, 0xd2, 0x80, 0xff, 0x6a, 0xd2, 0x6a, 0xff, 0x54, 0xd2, 0x54, 0xff, 0x3f, 0xd2, 0x3f, 0xff, 0x36, 0x9f, 0x36, 0xc8, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xcc, 0xd7, 0xc5, 0xff, 0xdd, 0xdf, 0xd5, 0xff, 0xd6, 0xdf, 0xce, 0xff, 0xcb, 0xdf, 0xc4, 0xff, 0xc0, 0xdf, 0xb9, 0xff, 0xb6, 0xdf, 0xae, 0xff, 0x92, 0xe7, 0x8e, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xdf, 0xdf, 0xd0, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xab, 0xdf, 0xa4, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xc7, 0xc7, 0xbc, 0xff, 0xdf, 0xdf, 0xd0, 0xff, 0xdf, 0xdf, 0xd0, 0xff, 0xdf, 0xdf, 0xd0, 0xff, 0xdf, 0xdf, 0xd0, 0xff, 0xdf, 0xdf, 0xd0, 0xff, 0xa7, 0xd7, 0xa1, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x2b, 0x99, 0x2b, 0x70, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x39, 0x99, 0x39, 0x70, 
  0x3b, 0x79, 0x3b, 0x94, 0x4c, 0x4c, 0x4c, 0xff, 0x5e, 0x5e, 0x5e, 0xff, 0x73, 0x73, 0x73, 0xff, 0x88, 0x88, 0x88, 0xff, 0x9d, 0x9d, 0x9d, 0xff, 0xb2, 0xb2, 0xb2, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xdd, 0xdd, 0xdd, 0xff, 0xf2, 0xf2, 0xf2, 0xff, 0xe3, 0xe3, 0xe3, 0xff, 0xcd, 0xcd, 0xcd, 0xff, 0xb8, 0xb8, 0xb8, 0xff, 0xa2, 0xa2, 0xa2, 0xff, 0x8d, 0x8d, 0x8d, 0xff, 0x77, 0x77, 0x77, 0xff, 0x62, 0x62, 0x62, 0xff, 0x41, 0x79, 0x41, 0x94, 
  0x3b, 0x79, 0x3b, 0x94, 0x4c, 0x4c, 0x4c, 0xff, 0x5e, 0x5e, 0x5e, 0xff, 0x73, 0x73, 0x73, 0xff, 0x88, 0x88, 0x88, 0xff, 0x9d, 0x9d, 0x9d, 0xff, 0xb2, 0xb2, 0xb2, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xdd, 0xdd, 0xdd, 0xff, 0xf2, 0xf2, 0xf2, 0xff, 0xe3, 0xe3, 0xe3, 0xff, 0xcd, 0xcd, 0xcd, 0xff, 0xb8, 0xb8, 0xb8, 0xff, 0xa2, 0xa2, 0xa2, 0xff, 0x8d, 0x8d, 0x8d, 0xff, 0x77, 0x77, 0x77, 0xff, 0x62, 0x62, 0x62, 0xff, 0x41, 0x79, 0x41, 0x94, 
  0x3b, 0x79, 0x3b, 0x94, 0x4c, 0x4c, 0x4c, 0xff, 0x5e, 0x5e, 0x5e, 0xff, 0x73, 0x73, 0x73, 0xff, 0x88, 0x88, 0x88, 0xff, 0x9d, 0x9d, 0x9d, 0xff, 0xb2, 0xb2, 0xb2, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xdd, 0xdd, 0xdd, 0xff, 0xf2, 0xf2, 0xf2, 0xff, 0xe3, 0xe3, 0xe3, 0xff, 0xcd, 0xcd, 0xcd, 0xff, 0xb8, 0xb8, 0xb8, 0xff, 0xa2, 0xa2, 0xa2, 0xff, 0x8d, 0x8d, 0x8d, 0xff, 0x77, 0x77, 0x77, 0xff, 0x62, 0x62, 0x62, 0xff, 0x41, 0x79, 0x41, 0x94, 
  0x28, 0xa1, 0x28, 0xe7, 0x24, 0xd2, 0x24, 0xff, 0x3a, 0xd2, 0x3a, 0xff, 0x4f, 0xd2, 0x4f, 0xff, 0x64, 0xd2, 0x64, 0xff, 0x7a, 0xd2, 0x7a, 0xff, 0x8f, 0xd2, 0x8f, 0xff, 0xa4, 0xd2, 0xa4, 0xff, 0xb9, 0xd2, 0xb9, 0xff, 0xce, 0xd2, 0xce, 0xff, 0xc0, 0xd2, 0xc0, 0xff, 0xaa, 0xd2, 0xaa, 0xff, 0x95, 0xd2, 0x95, 0xff, 0x80, 0xd2, 0x80, 0xff, 0x6a, 0xd2, 0x6a, 0xff, 0x54, 0xd2, 0x54, 0xff, 0x3f, 0xd2, 0x3f, 0xff, 0x30, 0xb6, 0x30, 0xe1, 
  0x13, 0xd2, 0x13, 0xff, 0x17, 0xff, 0x17, 0xff, 0x34, 0xff, 0x34, 0xff, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x57, 0xff, 0x57, 0xff, 0x3a, 0xff, 0x3a, 0xff, 0x1d, 0xff, 0x1d, 0xff, 
  0x24, 0xaa, 0x24, 0xa8, 0x2d, 0xb7, 0x2d, 0xa0, 0x41, 0x9f, 0x41, 0xc8, 0x4f, 0xd2, 0x4f, 0xff, 0x64, 0xd2, 0x64, 0xff, 0x7a, 0xd2, 0x7a, 0xff, 0x8f, 0xd2, 0x8f, 0xff, 0xa4, 0xd2, 0xa4, 0xff, 0xb9, 0xd2, 0xb9, 0xff, 0xce, 0xd2, 0xce, 0xff, 0xc0, 0xd2, 0xc0, 0xff, 0xaa, 0xd2, 0xaa, 0xff, 0x95, 0xd2, 0x95, 0xff, 0x80, 0xd2, 0x80, 0xff, 0x6a, 0xd2, 0x6a, 0xff, 0x52, 0x9f, 0x52, 0xc8, 0x41, 0xb7, 0x41, 0xa0, 0x30, 0xb7, 0x30, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x99, 0x42, 0x70, 0x50, 0xff, 0x50, 0xff, 0x6c, 0xff, 0x6c, 0xff, 0x89, 0xff, 0x89, 0xff, 0xa5, 0xff, 0xa5, 0xff, 0xc1, 0xff, 0xc1, 0xff, 0xde, 0xff, 0xde, 0xff, 0xfa, 0xff, 0xfa, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0xca, 0xff, 0xca, 0xff, 0xad, 0xff, 0xad, 0xff, 0x91, 0xff, 0x91, 0xff, 0x74, 0xff, 0x74, 0xff, 0x52, 0x99, 0x52, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xa5, 0x42, 0x1f, 0x4d, 0x99, 0x4d, 0x70, 0x5b, 0x99, 0x5b, 0x70, 0x66, 0x99, 0x66, 0x70, 0x5f, 0x72, 0x5f, 0xe5, 0x80, 0x8c, 0x80, 0xff, 0xa5, 0xab, 0xa4, 0xff, 0xca, 0xcb, 0xc9, 0xff, 0xaa, 0xae, 0xaa, 0xff, 0x85, 0x8f, 0x85, 0xe5, 0x74, 0x99, 0x74, 0x70, 0x69, 0x99, 0x69, 0x70, 0x5d, 0x99, 0x5d, 0x70, 0x52, 0xa5, 0x52, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t dosing_pump_run = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 18,
  .header.h = 25,
  .data_size = 450 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = dosing_pump_run_map,
};