
#include <stdio.h>
#include "../helper/helper.h"
//#ifdef TESTING
////#include "../helper/helper.h"
//#else
////#include "mylib/helper/helper.h"
//#endif // TESTING

#ifndef LABEL_H
#define LABEL_H



#ifdef __cplusplus
extern "C" {
#endif
  
    


    lv_obj_t* lbl_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, const char* text, const lv_font_t* fontValue, lv_color_t color);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





