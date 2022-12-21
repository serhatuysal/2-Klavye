﻿
#include "helper.h"


void infoMessageShow(const char* mesaj) {
    setVisibilty(background.img_info, true);
    setVisibilty(background.img_error, false);
    char  stepString[1000];
    sprintf(stepString, "#FFFFFF %s", mesaj);
    lv_label_set_text(background.lbl_mesaj, stepString);

}
void errorMessageShow(const char* mesaj) {

    setVisibilty(background.img_info, false);
    setVisibilty(background.img_error, true);
    char  stepString[1000];
    sprintf(stepString, "#DD3333 %s", mesaj);
    lv_label_set_text(background.lbl_mesaj, stepString);
}

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


lv_obj_t* scadaMainCreate() {
    lv_obj_t* scada_Main = lv_obj_create(background.background);
    lv_obj_set_style_radius(scada_Main, 0, 0);
    lv_obj_set_style_pad_all(scada_Main, 0, 0);
    lv_obj_set_style_pad_gap(scada_Main, 0, 0);
    lv_obj_set_style_border_width(scada_Main, 0, 0);


    lv_obj_set_style_bg_opa(scada_Main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(scada_Main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(scada_Main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
    lv_obj_set_style_x(scada_Main, 8, 0);
    lv_obj_set_style_y(scada_Main, 40, 0);
    lv_obj_set_style_width(scada_Main, 465, 0);
    lv_obj_set_style_height(scada_Main, 200, 0);
    lv_obj_clear_flag(scada_Main, LV_OBJ_FLAG_SCROLLABLE);
    return scada_Main;
}

lv_obj_t* btnMainCreate() {
    lv_obj_t* btn_Main = lv_obj_create(background.background);
    lv_obj_set_style_radius(btn_Main, 0, 0);
    lv_obj_set_style_pad_all(btn_Main, 0, 0);
    lv_obj_set_style_pad_gap(btn_Main, 0, 0);
    lv_obj_set_style_border_width(btn_Main, 0, 0);


    lv_obj_set_style_bg_opa(btn_Main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(btn_Main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(btn_Main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(btn_Main, lv_color_make(100,100,0),0);
    lv_obj_set_style_x(btn_Main, 0, 0);
    lv_obj_set_style_y(btn_Main, 240, 0);
    lv_obj_set_style_width(btn_Main, 480, 0);
    lv_obj_set_style_height(btn_Main, 90, 0);
    lv_obj_clear_flag(btn_Main, LV_OBJ_FLAG_SCROLLABLE);
    return btn_Main;
}

#ifdef TESTING
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


#endif // TESTING

