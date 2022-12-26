#include "temiz_su_tanki.h"

void setBarPercent_TemizSuTanki(TemizSuTanki* self, uint16_t percent) {

    int16_t percentNegative = 100 - percent;
    int16_t wavePercent = ((percentNegative * 80) / 100)+10;

    

    const lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1500);
    lv_anim_set_user_data(&PropertyAnimation_0, self->wave1);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, self->wavePercent, wavePercent);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_in);
    lv_anim_set_delay(&PropertyAnimation_0, 0 + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);

    lv_anim_start(&PropertyAnimation_0);



    self->wavePercent = wavePercent;

}



void Wave1_Animation(lv_obj_t* TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 2000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 103);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void Wave2_Animation(lv_obj_t* TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 3000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, -100);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}

TemizSuTanki  temizSuTankiOlustur(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    TemizSuTanki tboru;


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
    lv_obj_set_size(main, 50, 100);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);





    lv_obj_t* main_background = lv_obj_create(main);
    lv_obj_set_style_radius(main_background, 0, 0);
    lv_obj_set_style_pad_all(main_background, 0, 0);
    lv_obj_set_style_pad_gap(main_background, 0, 0);
    lv_obj_set_style_border_width(main_background, 0, 0);
    // lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main_background, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main_background, LV_OPA_TRANSP, 0);
    lv_obj_set_style_bg_color(main_background, lv_color_hex(0x231F20), 0);
    //lv_obj_set_style_x(main_background, 0, 0);
    //lv_obj_set_style_y(main_background, 0, 0);
    lv_obj_set_size(main_background, 45, 92);
    lv_obj_set_style_radius(main_background, 10, 0);
    lv_obj_set_align(main_background, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(main_background, LV_OBJ_FLAG_SCROLLABLE);


    lv_obj_t* dalgaobj = lv_obj_create(main);
    lv_obj_set_style_radius(dalgaobj, 0, 0);
    lv_obj_set_style_pad_all(dalgaobj, 0, 0);
    lv_obj_set_style_pad_gap(dalgaobj, 0, 0);
    lv_obj_set_style_border_width(dalgaobj, 0, 0);
    lv_obj_set_style_outline_opa(dalgaobj, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(dalgaobj, LV_OPA_TRANSP, 0);

    lv_obj_set_style_x(dalgaobj, 5, 0);
    lv_obj_set_style_y(dalgaobj, 0, 0);
    lv_obj_set_size(dalgaobj, 41, 100);
    lv_obj_clear_flag(dalgaobj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_opa(dalgaobj, LV_OPA_TRANSP, 0);



    LV_IMG_DECLARE(temizsutanki2);
    lv_obj_t* img1 = lv_img_create(main);
    lv_img_set_src(img1, &temizsutanki2);
    lv_img_set_size_mode(img1, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(img1, 0, 0);
    lv_obj_set_style_border_width(img1, 0, 0);
    lv_obj_clear_flag(img1, LV_OBJ_FLAG_SCROLLABLE);

    LV_IMG_DECLARE(water_1);
    //LV_IMG_DECLARE(water_2);
    lv_obj_t* ui_Wave1 = lv_img_create(dalgaobj);
    lv_img_set_src(ui_Wave1, &water_1);
    lv_obj_set_width(ui_Wave1, 200);
    lv_obj_set_height(ui_Wave1, LV_SIZE_CONTENT);    /// 1

    lv_obj_set_x(ui_Wave1, 0);
    lv_obj_set_y(ui_Wave1, 90);
    lv_obj_set_align(ui_Wave1, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Wave1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Wave1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags


  /*  lv_obj_t* ui_Wave2 = lv_img_create(dalgaobj);
    lv_img_set_src(ui_Wave2, &water_2);
    lv_obj_set_width(ui_Wave2, 200);
    lv_obj_set_height(ui_Wave2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wave2, 0);
    lv_obj_set_y(ui_Wave2, 100 + 4);

    lv_obj_set_align(ui_Wave2, LV_ALIGN_TOP_LEFT);
    lv_obj_add_flag(ui_Wave2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Wave2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_opa(ui_Wave2, 80, 0);*/

    Wave1_Animation(ui_Wave1, 0);
    //Wave2_Animation(ui_Wave2, 0);


    tboru.tank = img1;
    tboru.wave1 = ui_Wave1;
   // tboru.wave2 = ui_Wave2;
    tboru.setBarPercent = setBarPercent_TemizSuTanki;
    tboru.wavePercent = 90;
    /* motor.off = off;
     motor.on = on;
     motor.error = error;*/
    return tboru;
}





TemizSuTanki temizSuTanki_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {

    return temizSuTankiOlustur(parent,x, y);
}


