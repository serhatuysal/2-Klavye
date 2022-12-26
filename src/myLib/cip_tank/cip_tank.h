
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
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
        int16_t wavePercent;
        lv_obj_t* wave1;
        //lv_obj_t* wave2;
        void (*setBarPercent)(CipTank* self, uint16_t percent);
        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    CipTank cipTank_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





