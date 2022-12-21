
#include <stdio.h>

#ifdef TESTING
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef MEMBRANE_H
#define MEMBRANE_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct Membrane Membrane;
    struct Membrane
    {

        lv_obj_t* membrane;

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    Membrane membrane_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





