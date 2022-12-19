
#include <stdio.h>

#ifdef TESTING
#include "../position/position.h"
#else
#include "mylib/position/position.h"
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

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    BackGround backGround_Create();




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





