
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef TBORU_H
#define TBORU_H



#ifdef __cplusplus
extern "C" {
#endif

     enum tBoru_Type{
       
        t6 = 0,
        t10,
        tDOSING,
        tCIP,
        

    } ;

    typedef struct TBoru TBoru;
    struct TBoru
    {

        lv_obj_t* tboru;

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    TBoru tBoru_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y,int8_t tBoruType);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





