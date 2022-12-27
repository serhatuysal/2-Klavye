
#include <stdio.h>
#ifdef _DEBUG
#include "../tools.hpp"
#else
#include "tools.hpp"

#endif // TESTING

#ifndef LABEL_H
#define LABEL_H

#ifdef __cplusplus
extern "C"
{
#endif
     enum MyFont {
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
         GothamNarrowBook14 = 0,
         GothamNarrowBook16 = 1,
       

    } ;
    class Label
    {
    private:
        /* data */
    public:
    
       static lv_obj_t * init(lv_obj_t *parent, lv_coord_t x, lv_coord_t y,   const char *text, int font, lv_color_t color)
        {
            lv_obj_t *_label = lv_label_create(parent);
            LV_FONT_DECLARE(ui_font_GothamNarrowBook14);
            LV_FONT_DECLARE(ui_font_GothamNarrowBook16);
            lv_label_set_recolor(_label, true);
            // char  stepString[50];
            // sprintf(stepString, "#FFFFFF %s", label);
            lv_label_set_text(_label, text);
            lv_obj_set_style_x(_label, x, 0);
            lv_obj_set_style_y(_label, y, 0);
            lv_obj_set_style_text_align(_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(_label, font==0 ? &ui_font_GothamNarrowBook14 : &ui_font_GothamNarrowBook16, LV_PART_MAIN | LV_STATE_DEFAULT);

            lv_obj_set_style_text_color(_label, color, 0);
           return _label;
        }
    };

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */
