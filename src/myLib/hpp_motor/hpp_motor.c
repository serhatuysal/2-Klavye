#include "hpp_motor.h"


static  void on(HppMotor* valf) {

    _ui_flag_modify(valf->stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(valf->run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);


}

static void off(HppMotor* valf) {
    _ui_flag_modify(valf->stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(valf->run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);

}
HppMotor  hppMotorOlustur(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    HppMotor tboru;


    lv_obj_t* main = lv_obj_create(parent);
    lv_obj_set_style_radius(main, 0, 0);
    lv_obj_set_style_pad_all(main, 0, 0);
    lv_obj_set_style_pad_gap(main, 0, 0);
    lv_obj_set_style_border_width(main, 0, 0);
 
    lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
    lv_obj_set_style_x(main, x, 0);
    lv_obj_set_style_y(main, y, 0);
    //lv_obj_set_size(main, GIRISTANKI_WITDH, GIRISTANKI_HEIGHT);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);

    LV_IMG_DECLARE(hpp_motor_stop);
    LV_IMG_DECLARE(hpp_motor_run);



    lv_obj_t* stop_img = lv_img_create(main);
    lv_img_set_src(stop_img, &hpp_motor_stop);
    lv_img_set_size_mode(stop_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(stop_img, 0, 0);
    lv_obj_set_style_border_width(stop_img, 0, 0);
    lv_obj_clear_flag(stop_img, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t* run_img = lv_img_create(main);
    lv_img_set_src(run_img, &hpp_motor_run);
    lv_img_set_size_mode(run_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(run_img, 0, 0);
    lv_obj_set_style_border_width(run_img, 0, 0);
    lv_obj_clear_flag(run_img, LV_OBJ_FLAG_SCROLLABLE);




    tboru.stop_img = stop_img;
    tboru.run_img = run_img;
    tboru.off = off;
    tboru.on = on;
    // motor.error = error;
    _ui_flag_modify(stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
  
    return tboru;
}


HppMotor hppMotor_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    return hppMotorOlustur(parent,x, y);
}


