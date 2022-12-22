#include "cip_tank.h"

CipTank  cipTankOlustur(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    CipTank tboru;


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

    LV_IMG_DECLARE(cip_tank_normal);




    lv_obj_t* img1 = lv_img_create(main);

    lv_img_set_src(img1, &cip_tank_normal);


    lv_img_set_size_mode(img1, LV_IMG_SIZE_MODE_REAL);

    lv_obj_set_style_pad_all(img1, 0, 0);
    
    lv_obj_set_style_border_width(img1, 0, 0);

    lv_obj_clear_flag(img1, LV_OBJ_FLAG_SCROLLABLE);




  

    tboru.tank = img1;
    /* motor.off = off;
     motor.on = on;
     motor.error = error;*/
    return tboru;
}


CipTank cipTank_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    return cipTankOlustur(parent,x, y);
}


