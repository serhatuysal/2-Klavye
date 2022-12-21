
#include <stdio.h>

#ifdef TESTING
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef FILTRE_H
#define FILTRE_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct Filtre Filtre;
    struct Filtre
    {

        lv_obj_t* stop_img;
        lv_obj_t* run_img;

        void (*on)(Filtre* motor);
        void (*off)(Filtre* motor);
       /* void (*error)(Motor* motor);*/
    };


    Filtre filtre_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





