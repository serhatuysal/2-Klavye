
#include <stdio.h>
#ifdef _DEBUG
#include "../tools.hpp"
#else
#include "tools.hpp"

#endif // TESTING

#ifndef BUTTON_H
#define BUTTON_H



#ifdef __cplusplus
extern "C" {
#endif
    enum button_Type {
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
        BTNSTART = 0,
        BTNSTOP,
        BTNCIPSTART,
        BTNMENU

    };
    class Button
    {
    private:
   
    public:
     lv_obj_t* btn;
     void init(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, const char* label,  uint8_t buttonType, lv_event_cb_t event_cb, bool isCheckable){
lv_obj_t* main = lv_obj_create(parent);
    lv_obj_set_style_radius(main, 0, 0);
    lv_obj_set_style_pad_all(main, 0, 0);
    lv_obj_set_style_pad_gap(main, 0, 0);
    lv_obj_set_style_border_width(main, 0, 0);


    lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(main, lv_color_make(0,100,0),0);
    lv_obj_set_style_x(main, x, 0);
    lv_obj_set_style_y(main, y, 0);
    lv_obj_set_size(main, 70,80);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);


    LV_IMG_DECLARE(button_start_normal);
    LV_IMG_DECLARE(button_start_pressed);

    LV_IMG_DECLARE(button_stop_normal);
    LV_IMG_DECLARE(button_stop_pressed);

    LV_IMG_DECLARE(button_cipstart_normal);
    LV_IMG_DECLARE(button_cipstart_pressed);

    LV_IMG_DECLARE(button_menu_normal);
    LV_IMG_DECLARE(button_menu_pressed);




    lv_obj_t* ui_BTN_Power = lv_obj_create(main);
    lv_obj_set_width(ui_BTN_Power, 70);
    lv_obj_set_height(ui_BTN_Power, 70);
    lv_obj_set_align(ui_BTN_Power, LV_ALIGN_TOP_MID);
   lv_obj_add_flag(ui_BTN_Power, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_radius(ui_BTN_Power, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BTN_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    if (buttonType == BTNSTART) {
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_start_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
       if(isCheckable) lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_start_pressed, LV_PART_MAIN | LV_STATE_CHECKED);
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_start_pressed, LV_PART_MAIN | LV_STATE_PRESSED);
    }
    else if (buttonType == BTNSTOP) {
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_stop_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
        if (isCheckable) lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_stop_pressed, LV_PART_MAIN | LV_STATE_CHECKED);
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_stop_pressed, LV_PART_MAIN | LV_STATE_PRESSED);
    }
    else if (buttonType == BTNCIPSTART) {
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_cipstart_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
        if (isCheckable) lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_cipstart_pressed, LV_PART_MAIN | LV_STATE_CHECKED);
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_cipstart_pressed, LV_PART_MAIN | LV_STATE_PRESSED);
    }
    else if (buttonType == BTNMENU) {
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_menu_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
        if (isCheckable) lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_menu_pressed, LV_PART_MAIN | LV_STATE_CHECKED);
        lv_obj_set_style_bg_img_src(ui_BTN_Power, &button_menu_pressed, LV_PART_MAIN | LV_STATE_PRESSED);
    }
  
 
    lv_obj_set_style_bg_opa(ui_BTN_Power, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(ui_BTN_Power, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(ui_BTN_Power, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(ui_BTN_Power, lv_color_hex(0XFFFFFF), 0);

    lv_obj_t* btn_label = lv_label_create(main);
       LV_FONT_DECLARE(ui_font_GothamNarrowBook16);
    lv_label_set_recolor(btn_label, true);
    lv_label_set_text(btn_label, label);
    setColor(btn_label, lv_color_hex(0xFFFFFF));
    lv_obj_set_style_align(btn_label, LV_ALIGN_BOTTOM_MID, 0);
    lv_obj_set_style_text_font(btn_label, &ui_font_GothamNarrowBook16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_BTN_Power, event_cb, LV_EVENT_ALL, &main);

    btn = ui_BTN_Power;
    //tboru.click = click;    
     }
    };
    
   



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





