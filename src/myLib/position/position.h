
#include <stdio.h>

#ifdef TESTING
#include "../../lvgl/lvgl.h"
#else
#include "lvgl.h"
#include "ui_helpers.h"
#endif // TESTING



#ifndef POSITION_H
#define POSITION_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef enum {
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
        LEFT_TO_RIGHT = 0,
        RIGHT_TO_LEFT = 1,
        DOWN_TO_UP = 2,
        UP_TO_DOWN = 3

    } position;
  




#ifdef TESTING
#define _UI_MODIFY_STATE_ADD 0
#define _UI_MODIFY_STATE_REMOVE 1
#define _UI_MODIFY_STATE_TOGGLE 2

#define _UI_MODIFY_FLAG_ADD 0
#define _UI_MODIFY_FLAG_REMOVE 1
#define _UI_MODIFY_FLAG_TOGGLE 2
    void _ui_flag_modify(lv_obj_t* target, int32_t flag, int value);
    void _ui_state_modify(lv_obj_t* target, int32_t state, int value);
    void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v);

#endif // TESTING



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





