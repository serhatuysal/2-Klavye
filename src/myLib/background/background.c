#include "background.h"

BackGround  backGroundOlustur() {

    BackGround tboru;




    lv_obj_t* main = lv_obj_create(lv_scr_act());

    lv_obj_set_style_radius(main, 0, 0);
    lv_obj_set_style_pad_all(main, 0, 0);
    lv_obj_set_style_pad_gap(main, 0, 0);
    lv_obj_set_style_border_width(main, 0, 0);


    //lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_bg_color(main, lv_color_hex(0x262E42), 0);
    lv_obj_set_size(main, 480, 320);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);



    lv_obj_t* mesajBox = lv_obj_create(main);
    lv_obj_set_style_pad_all(mesajBox, 0, 0);
    lv_obj_set_style_border_width(mesajBox, 0, 0);
    lv_obj_set_style_outline_opa(mesajBox, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(mesajBox, LV_OPA_TRANSP, 0);
    lv_obj_set_style_bg_color(mesajBox, lv_color_hex(0x21282E), 0);
    lv_obj_set_style_radius(mesajBox, 10, 0);
    lv_obj_set_size(mesajBox, 360, 30);
    lv_obj_set_x(mesajBox, 5);
    lv_obj_set_y(mesajBox, 5);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);


    lv_obj_t* tarihSaatBox = lv_obj_create(main);
    lv_obj_set_style_pad_all(tarihSaatBox, 0, 0);
    lv_obj_set_style_border_width(tarihSaatBox, 0, 0);
    lv_obj_set_style_outline_opa(tarihSaatBox, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(tarihSaatBox, LV_OPA_TRANSP, 0);
    lv_obj_set_style_bg_color(tarihSaatBox, lv_color_hex(0x21282E), 0);
    lv_obj_set_style_radius(tarihSaatBox, 10, 0);
    lv_obj_set_size(tarihSaatBox, 105, 30);
    lv_obj_set_x(tarihSaatBox, 370);
    lv_obj_set_y(tarihSaatBox, 5);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);


    lv_obj_t* hr = lv_obj_create(main);
    lv_obj_set_style_pad_all(hr, 0, 0);
    lv_obj_set_style_border_width(hr, 0, 0);
    lv_obj_set_style_outline_opa(hr, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(hr, LV_OPA_TRANSP, 0);
    lv_obj_set_style_bg_color(hr, lv_color_hex(0x21282E), 0);
    lv_obj_set_style_radius(hr, 0, 0);
    lv_obj_set_size(hr, 480, 1);
    lv_obj_set_x(hr, 0);
    lv_obj_set_y(hr, 245);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);

    // LV_IMG_DECLARE(background_img);




    // lv_obj_t* img1 = lv_img_create(main);

    // lv_img_set_src(img1, &background_img);


    // lv_img_set_size_mode(img1, LV_IMG_SIZE_MODE_REAL);

    // lv_obj_set_style_pad_all(img1, 0, 0);

    // lv_obj_set_style_border_width(img1, 0, 0);

    // lv_obj_clear_flag(img1, LV_OBJ_FLAG_SCROLLABLE);



    tboru.background = main;

    return tboru;
}


BackGround backGround_Create() {

    return backGroundOlustur();
}


