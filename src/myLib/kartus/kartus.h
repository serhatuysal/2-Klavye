
#include <stdio.h>

#ifdef TESTING
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef KARTUS_H
#define KARTUS_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct Kartus Kartus;
    struct Kartus
    {

        lv_obj_t* kartus;

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    Kartus kartus_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





