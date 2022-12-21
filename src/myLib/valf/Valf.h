
#include <stdio.h>

#ifdef TESTING
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"

#endif // TESTING


#ifndef VALF_H
#define VALF_H



#ifdef __cplusplus
extern "C" {
#endif
    enum valf_Type{
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
        v4 = 0,
        v10 

    } ;
    typedef struct Valf Valf;
    struct Valf
    {

        lv_obj_t* stop_img;
        lv_obj_t* run_img;
        lv_obj_t* error_img;

        void (*on)(Valf* valf);
        void (*off)(Valf* valf);
        void (*error)(Valf* valf);
    };


    Valf valf_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, uint8_t position,uint8_t valfType);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





