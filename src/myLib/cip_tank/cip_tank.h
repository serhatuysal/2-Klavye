﻿
#include <stdio.h>

#ifdef TESTING
#include "../position/position.h"
#else
#include "mylib/position/position.h"
#endif // TESTING

#ifndef CIPTANK_H
#define CIPTANK_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct CipTank CipTank;
    struct CipTank
    {

        lv_obj_t* tank;

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    CipTank cipTank_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





