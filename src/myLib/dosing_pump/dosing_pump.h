
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef DOSINGPUMP_H
#define DOSINGPUMP_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct DosingPump DosingPump;
    struct DosingPump
    {

        lv_obj_t* stop_img;
        lv_obj_t* run_img;
        lv_obj_t* error_img;

        void (*on)(DosingPump* pump);
        void (*off)(DosingPump* pump);
        void (*error)(DosingPump* pump);
    };


    DosingPump dosingPump_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int16_t angle);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





