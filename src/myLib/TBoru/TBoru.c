#include "TBoru.h"

TBoru  tBoruOlustur(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int8_t tBoruType) {

    TBoru tboru;


    lv_obj_t* main = lv_obj_create(parent);
    lv_obj_set_style_radius(main, 0, 0);
    lv_obj_set_style_pad_all(main, 0, 0);
    lv_obj_set_style_pad_gap(main, 0, 0);
    lv_obj_set_style_border_width(main, 0, 0);


    lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_x(main, x, 0);
    lv_obj_set_style_y(main, y, 0);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);





    lv_obj_t* img1 = lv_img_create(main);
    if (tBoruType==t6) {
        LV_IMG_DECLARE(T_Boru6);
        lv_img_set_src(img1, &T_Boru6);
    }else if (tBoruType == t10) {
        LV_IMG_DECLARE(T_Boru10);
        lv_img_set_src(img1, &T_Boru10);
    }
    else if (tBoruType == tDOSING) {
        LV_IMG_DECLARE(T_Boru_dosing);
        lv_img_set_src(img1, &T_Boru_dosing);
    }
    
    else if (tBoruType == tCIP) {
        LV_IMG_DECLARE(T_Boru_cip);
        lv_img_set_src(img1, &T_Boru_cip);
    }



    
   



    lv_img_set_size_mode(img1, LV_IMG_SIZE_MODE_REAL);

    //lv_obj_set_style_width(img1, width, 0);
    //lv_obj_set_style_height(img1, height, 0);
    //lv_obj_set_style_radius(kasa, 10, 0);
    lv_obj_set_style_pad_all(img1, 0, 0);
    //lv_obj_set_style_bg_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
    //lv_obj_set_style_border_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
    lv_obj_set_style_border_width(img1, 0, 0);

    lv_obj_clear_flag(img1, LV_OBJ_FLAG_SCROLLABLE);
    //lv_img_set_zoom(img1, (256*width)/64);



  /*  lv_obj_t* tank_image = lv_img_create(main);
    lv_img_set_src(tank_image, &tank_28;
    lv_obj_set_width(tank_image, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(tank_image, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(tank_image, -186);
    lv_obj_set_y(tank_image, -8);
    lv_obj_set_align(tank_image, LV_ALIGN_CENTER);
    lv_obj_add_flag(tank_image, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(tank_image, LV_OBJ_FLAG_SCROLLABLE);*/

    tboru.tboru = img1;
    /* motor.off = off;
     motor.on = on;
     motor.error = error;*/
    return tboru;
}


TBoru tBoru_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int8_t tBoruType) {

    return tBoruOlustur(parent, x, y,tBoruType);
}


