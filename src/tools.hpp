#include <stdio.h>
#ifndef TOOLS_H
#define TOOLS_H

#ifdef _DEBUG
#include "../lvgl/lvgl.h"
#include "../src/mylib/helper.hpp"
#else
#include "lvgl.h"

#endif // TESTING
     enum position {
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
        LEFT_TO_RIGHT = 0,
        RIGHT_TO_LEFT = 1,
        DOWN_TO_UP = 2,
        UP_TO_DOWN = 3

    } ;

//LV_FONT_DECLARE(ui_font_GothamNarrowBook10);

#define _UI_MODIFY_STATE_ADD 0
#define _UI_MODIFY_STATE_REMOVE 1
#define _UI_MODIFY_STATE_TOGGLE 2

#define _UI_MODIFY_FLAG_ADD 0
#define _UI_MODIFY_FLAG_REMOVE 1
#define _UI_MODIFY_FLAG_TOGGLE 2
void _ui_flag_modify(lv_obj_t* target, int32_t flag, int value);
void _ui_state_modify(lv_obj_t* target, int32_t state, int value);
void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v);
void _ui_anim_callback_set_y(lv_anim_t* a, int32_t v);
void _ui_anim_callback_set_height(lv_anim_t* a, int32_t v);
int32_t _ui_anim_callback_get_height(lv_anim_t* a);
void setVisibilty(lv_obj_t* target, bool value);
void setChecked(lv_obj_t* target, bool value);
void setText(lv_obj_t* lbl, const char* text);
void setText2(lv_obj_t* lbl, const char* text, lv_color_t color);
void setColor(lv_obj_t* lbl, lv_color_t color);


    
void setVisibilty(lv_obj_t* target, bool value) {
    if (value) {
        _ui_flag_modify(target, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
       
    }
    else {
        _ui_flag_modify(target, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void setChecked(lv_obj_t* target, bool value) {
    if (value) {
        _ui_state_modify(target, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);

    }
    else {
        _ui_state_modify(target, LV_STATE_CHECKED, _UI_MODIFY_FLAG_REMOVE);
    }
}

void setText(lv_obj_t* lbl, const char* text) {
    lv_label_set_text(lbl, text);
}
void setText2(lv_obj_t* lbl, const char* text, lv_color_t color) {
    lv_label_set_text(lbl, text);
    lv_obj_set_style_text_color(lbl, color, 0);
}
void setColor(lv_obj_t* lbl, lv_color_t color) {
    lv_obj_set_style_text_color(lbl, color, 0);
}




 void _ui_flag_modify(lv_obj_t* target, int32_t flag, int value)
{
    if (value == _UI_MODIFY_FLAG_TOGGLE) {
        if (lv_obj_has_flag(target, flag)) lv_obj_clear_flag(target, flag);
        else lv_obj_add_flag(target, flag);
    }
    else if (value == _UI_MODIFY_FLAG_ADD) lv_obj_add_flag(target, flag);
    else lv_obj_clear_flag(target, flag);
}
void _ui_state_modify(lv_obj_t* target, int32_t state, int value)
{
    if (value == _UI_MODIFY_STATE_TOGGLE) {
        if (lv_obj_has_state(target, state)) lv_obj_clear_state(target, state);
        else lv_obj_add_state(target, state);
    }
    else if (value == _UI_MODIFY_STATE_ADD) lv_obj_add_state(target, state);
    else lv_obj_clear_state(target, state);
}

void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v)
{
    lv_obj_set_x((lv_obj_t*)a->user_data, v);
}
void _ui_anim_callback_set_y(lv_anim_t* a, int32_t v)
{
    lv_obj_set_y((lv_obj_t*)a->user_data, v);
}
void _ui_anim_callback_set_height(lv_anim_t* a, int32_t v)
{
    lv_obj_set_height((lv_obj_t*)a->user_data, v);
}

int32_t _ui_anim_callback_get_height(lv_anim_t* a)
{
    return lv_obj_get_height((lv_obj_t*)a->user_data);
}




#endif /* DIRSEK_H */





