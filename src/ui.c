// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
void ui_event_btnArtir(lv_event_t * e);
lv_obj_t * ui_btnArtir;
lv_obj_t * ui_lblArtir;
void ui_event_btnAzalt(lv_event_t * e);
lv_obj_t * ui_btnAzalt;
lv_obj_t * ui_lblAzalt;
void ui_event_Role1(lv_event_t * e);
lv_obj_t * ui_Role1;
void ui_event_btnCalistir(lv_event_t * e);
lv_obj_t * ui_btnCalistir;
lv_obj_t * ui_lblCalistir;
lv_obj_t * ui_Role1Text;
lv_obj_t * ui_lblSayi2;
lv_obj_t * ui_lblRole1Durum;
lv_obj_t * ui_lblRole2Durum;
lv_obj_t * ui_Screen1_Keyboard1;
void ui_event_Screen1_TextArea1(lv_event_t * e);
lv_obj_t * ui_Screen1_TextArea1;
lv_obj_t * led2;
///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_btnArtir(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        sayiArtirfunction(e);
        //(e);
    }
}
void ui_event_btnAzalt(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    //lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        sayiAzaltFunction(e);
    }
}
void ui_event_Role1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    //lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ledYak(e);
        //(e);
       // _ui_checked_set_text_value(ui_lblRole1Durum, target, "ON	", "OFF");
    }
}
void ui_event_btnCalistir(lv_event_t * e)
{

    lv_obj_t * ta = lv_event_get_target(e);
    //LV_LOG_USER("Calistir butonuna tikladiniz Deger: %s", lv_textarea_get_text(ui_Screen1_TextArea1));
    LV_LOG_USER("TextArea deger: %s ",lv_textarea_get_text(ui_Screen1_TextArea1));

    texteGoreCalistir(e);

    //if(event_code == LV_EVENT_CLICKED) {
    //    _ui_checked_set_text_value(ui_lblRole2Durum, target, "ON	", "OFF");
    //}
}
void ui_event_Screen1_TextArea1(lv_event_t * e)
{
    lv_obj_t * ta = lv_event_get_target(e);
    LV_LOG_USER("Enter was pressed. The current text is: %s", lv_textarea_get_text(ta));
    
    lv_event_code_t event_code = lv_event_get_code(e);
    //lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Screen1_Keyboard1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_Screen1_Keyboard1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    
    //lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        birTusatiklandi(e);
    }
}
///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_btnArtir = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_btnArtir, 80);
    lv_obj_set_height(ui_btnArtir, 38);
    lv_obj_set_x(ui_btnArtir, -189);
    lv_obj_set_y(ui_btnArtir, -110);
    lv_obj_set_align(ui_btnArtir, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnArtir, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnArtir, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblArtir = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_lblArtir, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblArtir, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblArtir, -190);
    lv_obj_set_y(ui_lblArtir, -108);
    lv_obj_set_align(ui_lblArtir, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblArtir, "Artir");
    lv_obj_set_style_text_color(ui_lblArtir, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblArtir, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnAzalt = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_btnAzalt, 80);
    lv_obj_set_height(ui_btnAzalt, 38);
    lv_obj_set_x(ui_btnAzalt, -94);
    lv_obj_set_y(ui_btnAzalt, -108);
    lv_obj_set_align(ui_btnAzalt, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnAzalt, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnAzalt, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblAzalt = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_lblAzalt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblAzalt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblAzalt, -93);
    lv_obj_set_y(ui_lblAzalt, -108);
    lv_obj_set_align(ui_lblAzalt, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblAzalt, "Azalt");
    lv_obj_set_style_text_color(ui_lblAzalt, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblAzalt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Role1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Role1, 80);
    lv_obj_set_height(ui_Role1, 38);
    lv_obj_set_x(ui_Role1, 100);
    lv_obj_set_y(ui_Role1, -111);
    lv_obj_set_align(ui_Role1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Role1, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Role1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_btnCalistir = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_btnCalistir, 80);
    lv_obj_set_height(ui_btnCalistir, 38);
    lv_obj_set_x(ui_btnCalistir, 103);
    lv_obj_set_y(ui_btnCalistir, 15);
    lv_obj_set_align(ui_btnCalistir, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnCalistir, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnCalistir, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblCalistir = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_lblCalistir, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblCalistir, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblCalistir, 103);
    lv_obj_set_y(ui_lblCalistir, 16);
    lv_obj_set_align(ui_lblCalistir, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblCalistir, "Calistir");
    lv_obj_set_style_text_color(ui_lblCalistir, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblCalistir, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Role1Text = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Role1Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Role1Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Role1Text, 99);
    lv_obj_set_y(ui_Role1Text, -109);
    lv_obj_set_align(ui_Role1Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Role1Text, "Role 1");
    lv_obj_set_style_text_color(ui_Role1Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Role1Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSayi2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_lblSayi2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSayi2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSayi2, -141);
    lv_obj_set_y(ui_lblSayi2, -68);
    lv_obj_set_align(ui_lblSayi2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSayi2, "Sayi: 0");

    ui_lblRole1Durum = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_lblRole1Durum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblRole1Durum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblRole1Durum, 101);
    lv_obj_set_y(ui_lblRole1Durum, -71);
    lv_obj_set_align(ui_lblRole1Durum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblRole1Durum, "Durum");

    ui_lblRole2Durum = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_lblRole2Durum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblRole2Durum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblRole2Durum, 178);
    lv_obj_set_y(ui_lblRole2Durum, 15);
    lv_obj_set_align(ui_lblRole2Durum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblRole2Durum, "Durum");

    ui_Screen1_Keyboard1 = lv_keyboard_create(ui_Screen1);
    lv_keyboard_set_mode(ui_Screen1_Keyboard1, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_Screen1_Keyboard1, 300);
    lv_obj_set_height(ui_Screen1_Keyboard1, 120);
    lv_obj_set_x(ui_Screen1_Keyboard1, -8);
    lv_obj_set_y(ui_Screen1_Keyboard1, 99);
    lv_obj_set_align(ui_Screen1_Keyboard1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Keyboard1, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_outline_color(ui_Screen1_Keyboard1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Screen1_Keyboard1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Screen1_Keyboard1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Screen1_Keyboard1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_TextArea1 = lv_textarea_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_TextArea1, 152);
    lv_obj_set_height(ui_Screen1_TextArea1, 42);
    lv_obj_set_x(ui_Screen1_TextArea1, -14);
    lv_obj_set_y(ui_Screen1_TextArea1, 16);
    lv_obj_set_align(ui_Screen1_TextArea1, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_Screen1_TextArea1, "Set Degeri Giriniz...");
    lv_obj_clear_flag(ui_Screen1_TextArea1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    

    lv_obj_add_event_cb(ui_btnArtir, ui_event_btnArtir, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnAzalt, ui_event_btnAzalt, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Role1, ui_event_Role1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnCalistir, ui_event_btnCalistir, LV_EVENT_CLICKED, NULL);
    lv_keyboard_set_textarea(ui_Screen1_Keyboard1, ui_Screen1_TextArea1);
    lv_obj_add_event_cb(ui_Screen1_Keyboard1, ui_event_Screen1_Keyboard1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_TextArea1, ui_event_Screen1_TextArea1, LV_EVENT_ALL, NULL); //LV_EVENT_VALUE_CHANGED
    
    //lv_obj_set_event_cb(ta, ta_event_cb);
    //lv_obj_add_event_cb(ui_Screen1_TextArea1, textarea_event_handler, LV_EVENT_READY, ta);

    led2  = lv_led_create(ui_Screen1);
    //lv_led_set_brightness(led2, 150);
    lv_led_set_color(led2, lv_palette_main(LV_PALETTE_RED));
    lv_obj_align(led2, LV_ALIGN_CENTER, 100, -40);
    //lv_led_on(led2);
    lv_led_off(led2);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
