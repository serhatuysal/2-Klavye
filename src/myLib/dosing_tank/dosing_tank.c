#include "dosing_tank.h"


void setBarPercent(DosingTank*self, uint16_t percent) {

    int16_t barvalue = (percent * 42) / 100;
   
    //lv_obj_set_size(self->bar, 8, barvalue);



   const lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, self->bar);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_height);
    lv_anim_set_values(&PropertyAnimation_0, self->barValue, barvalue);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_bounce);
    lv_anim_set_delay(&PropertyAnimation_0, 0 + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    
    lv_anim_start(&PropertyAnimation_0);
    self->barValue = barvalue;

}

DosingTank  dosingTankOlustur(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    DosingTank tboru;


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

    LV_IMG_DECLARE(dosing_tank_normal);




    lv_obj_t* img1 = lv_img_create(main);

    lv_img_set_src(img1, &dosing_tank_normal);


    lv_img_set_size_mode(img1, LV_IMG_SIZE_MODE_REAL);

    //lv_obj_set_style_width(img1, width, 0);
    //lv_obj_set_style_height(img1, height, 0);
    //lv_obj_set_style_radius(kasa, 10, 0);
    lv_obj_set_style_pad_all(img1, 0, 0);
    //lv_obj_set_style_bg_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
    //lv_obj_set_style_border_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
    lv_obj_set_style_border_width(img1, 0, 0);

    lv_obj_clear_flag(img1, LV_OBJ_FLAG_SCROLLABLE);





    lv_obj_t* bar = lv_obj_create(img1);
    lv_obj_set_style_radius(bar, 0, 0);
    lv_obj_set_style_pad_all(bar, 0, 0);
    lv_obj_set_style_pad_gap(bar, 0, 0);
    lv_obj_set_style_border_width(bar, 0, 0);


    //lv_obj_set_style_bg_opa(bar, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(bar, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(bar, LV_OPA_TRANSP, 0);
    lv_obj_set_style_bg_color(bar, lv_color_make(100, 100, 0), 0);
    lv_obj_set_style_x(bar, 6, 0);
    lv_obj_set_style_y(bar, 0, 0);
    lv_obj_set_size(bar, 8, 0);
    lv_obj_set_style_transform_pivot_x(bar, 5, 0);
    lv_obj_set_style_transform_pivot_y(bar, 24, 0);
    lv_obj_set_style_transform_angle(bar, -1800, 0);
    
    lv_obj_clear_flag(bar, LV_OBJ_FLAG_SCROLLABLE);


    tboru.tank = img1;
    tboru.bar = bar;
    tboru.barValue = 0;
    tboru.setBarPercent = setBarPercent;
    /* motor.off = off;
     motor.on = on;
     motor.error = error;*/
    return tboru;
}


DosingTank dosingTank_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    return dosingTankOlustur(parent, x, y);
}


