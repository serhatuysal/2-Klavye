
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef DOSINGTANK_H
#define DOSINGTANK_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct DosingTank DosingTank;
    struct DosingTank
    {

        lv_obj_t* tank;
        lv_obj_t* bar;
        int16_t barValue;
        void (*setBarPercent)(DosingTank* self, uint16_t percent);
        /*void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    DosingTank dosingTank_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





