
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef BUTTON_H
#define BUTTON_H



#ifdef __cplusplus
extern "C" {
#endif
    enum button_Type {
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
        BTNSTART = 0,
        BTNSTOP,
        BTNCIPSTART,
        BTNMENU

    };
    typedef struct Button Button;
    struct Button
    {

        lv_obj_t* btn;

        void (*click)(Button* button);
        /*void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    Button btn_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, const char* label,  uint8_t buttonType, lv_event_cb_t event_cb, bool isCheckable);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





