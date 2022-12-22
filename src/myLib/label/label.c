#include "label.h"



lv_obj_t* lblOlustur(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, const char* text, const lv_font_t* fontValue, lv_color_t color) {
    

    lv_obj_t* label = lv_label_create(parent);
    
    lv_label_set_recolor(label, true);
    //char  stepString[50];
    //sprintf(stepString, "#FFFFFF %s", label);
    lv_label_set_text(label, text);
    lv_obj_set_style_x(label, x, 0);
    lv_obj_set_style_y(label, y, 0);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, fontValue, LV_PART_MAIN | LV_STATE_DEFAULT);
   
        lv_obj_set_style_text_color(label,color, 0);
    
    return label;
    
}


lv_obj_t* lbl_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, const char* text, const lv_font_t* fontValue, lv_color_t color) {

    return lblOlustur(parent,x,y,text,fontValue,color);
}


