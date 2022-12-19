#include "dosing_pump.h"


static  void on(DosingPump* valf) {

    _ui_flag_modify(valf->stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(valf->run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(valf->error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);

}

static void off(DosingPump* valf) {
    _ui_flag_modify(valf->stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(valf->run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(valf->error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}

static void error(DosingPump* valf) {
    _ui_flag_modify(valf->stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(valf->run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(valf->error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}
DosingPump  DosingPumpOlustur(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int16_t angle) {

    DosingPump tboru;


    lv_obj_t* main = lv_obj_create(parent);
    lv_obj_set_style_radius(main, 0, 0);
    lv_obj_set_style_pad_all(main, 0, 0);
    lv_obj_set_style_pad_gap(main, 0, 0);
    lv_obj_set_style_border_width(main, 0, 0);
    lv_obj_set_style_transform_angle(main, angle * 10, 0);
    lv_obj_set_style_transform_pivot_x(main, 18, 0);
    lv_obj_set_style_transform_pivot_y(main, 15, 0);

    lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
    lv_obj_set_style_x(main, x, 0);
    lv_obj_set_style_y(main, y, 0);
    //lv_obj_set_size(main, GIRISTANKI_WITDH, GIRISTANKI_HEIGHT);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);

    LV_IMG_DECLARE(dosing_pump_stop);
    LV_IMG_DECLARE(dosing_pump_run);
    LV_IMG_DECLARE(dosing_pump_error);



    lv_obj_t* stop_img = lv_img_create(main);
    lv_img_set_src(stop_img, &dosing_pump_stop);
    lv_img_set_size_mode(stop_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(stop_img, 0, 0);
    lv_obj_set_style_border_width(stop_img, 0, 0);
    lv_obj_clear_flag(stop_img, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t* run_img = lv_img_create(main);
    lv_img_set_src(run_img, &dosing_pump_run);
    lv_img_set_size_mode(run_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(run_img, 0, 0);
    lv_obj_set_style_border_width(run_img, 0, 0);
    lv_obj_clear_flag(run_img, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t* error_img = lv_img_create(main);
    lv_img_set_src(error_img, &dosing_pump_run);
    lv_img_set_size_mode(error_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(error_img, 0, 0);
    lv_obj_set_style_border_width(error_img, 0, 0);
    lv_obj_clear_flag(error_img, LV_OBJ_FLAG_SCROLLABLE);


    tboru.stop_img = stop_img;
    tboru.run_img = run_img;
    tboru.error_img = error_img;
    tboru.off = off;
    tboru.on = on;
    tboru.error = error;
    _ui_flag_modify(stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    return tboru;
}


DosingPump dosingPump_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int16_t angle) {

    return DosingPumpOlustur(parent,x, y,angle);
}


