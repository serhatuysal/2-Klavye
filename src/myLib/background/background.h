
#include <stdio.h>

#ifdef TESTING
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef BACKGROUND_H
#define BACKGROUND_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct BackGround BackGround;
    struct BackGround
    {

        lv_obj_t* background;
        lv_obj_t* lbl_mesaj;
        lv_obj_t* img_info;
        lv_obj_t* img_error;

        //void (*infoMessageShow)(BackGround* self,const char* mesaj);
        //void (*errorMessageShow)(BackGround* self,const char* mesaj);
        /*void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    BackGround backGround_Create();




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





