
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef HPPMOTOR_H
#define HPPMOTOR_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct HppMotor HppMotor;
    struct HppMotor
    {

        lv_obj_t* stop_img;
        lv_obj_t* run_img;

        void (*on)(HppMotor* motor);
        void (*off)(HppMotor* motor);
       /* void (*error)(Motor* motor);*/
    };


    HppMotor hppMotor_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





