#include <stdio.h>
#ifdef TESTING
#include "../position/position.h"
#else
#include "mylib/position/position.h"
#endif // TESTING


#ifndef BORU_H
#define BORU_H



#ifdef __cplusplus
extern "C" {
#endif


     enum boru_Type {
     
        b4 = 0,
        b6,
        b10,


    };

    typedef struct Boru Boru;
    struct Boru
    {

        lv_obj_t* boru;

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    Boru boru_Create(lv_obj_t* parent,lv_coord_t  x, lv_coord_t y, int16_t width, uint8_t position, uint8_t boruType);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





