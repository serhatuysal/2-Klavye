
#include <stdio.h>

#ifdef TESTING
#include "../position/position.h"
#else
#include "mylib/position/position.h"
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

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    DosingTank dosingTank_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





