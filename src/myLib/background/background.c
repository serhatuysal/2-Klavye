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



    LV_IMG_DECLARE(info);
    lv_obj_t* img_info = lv_img_create(main);
    lv_img_set_src(img_info, &info);
    lv_img_set_size_mode(img_info, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(img_info, 0, 0);
    lv_obj_set_style_border_width(img_info, 0, 0);
    lv_obj_set_x(img_info, 10);
    lv_obj_set_y(img_info, 12);
    lv_obj_clear_flag(img_info, LV_OBJ_FLAG_SCROLLABLE);
    setVisibilty(img_info, false);



    LV_IMG_DECLARE(error);
    lv_obj_t* img_error = lv_img_create(main);
    lv_img_set_src(img_error, &error);
    lv_img_set_size_mode(img_error, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(img_error, 0, 0);
    lv_obj_set_style_border_width(img_error, 0, 0);
    lv_obj_set_x(img_error, 10);
    lv_obj_set_y(img_error, 12);
    lv_obj_clear_flag(img_error, LV_OBJ_FLAG_SCROLLABLE);
    setVisibilty(img_error, false);


    lv_obj_t* lbl_mesaj = lv_label_create(main);
    lv_obj_set_x(lbl_mesaj, 27);
    lv_obj_set_y(lbl_mesaj, 12);
    lv_label_set_recolor(lbl_mesaj, true);
    lv_obj_set_style_text_font(lbl_mesaj, &ui_font_GothamNarrowBook16, LV_PART_MAIN | LV_STATE_DEFAULT);
    //lv_obj_set_style_align(lbl_mesaj, LV_ALIGN_BOTTOM_MID, 0);




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



    tboru.background = main;
    tboru.lbl_mesaj = lbl_mesaj;
    tboru.img_info = img_info;
    tboru.img_error = img_error;
    //tboru.infoMessageShow = infoMessageShow;
   // tboru.errorMessageShow = errorMessageShow;
    return tboru;
}


BackGround backGround_Create() {

    return backGroundOlustur();
}


