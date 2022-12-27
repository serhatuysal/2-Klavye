
#include <stdio.h>

#ifdef _DEBUG
#include "../tools.hpp"
#else
#include "tools.hpp"

#endif // TESTING

#ifndef DIRSEK4_H
#define DIRSEK4_H



#ifdef __cplusplus
extern "C" {
#endif
class Dirsek4
{
private:
    lv_obj_t* dirsek;
public:
   void init(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int16_t angle){

    lv_obj_t* main = lv_obj_create(parent);
    lv_obj_set_style_radius(main, 0, 0);
    lv_obj_set_style_pad_all(main, 0, 0);
    lv_obj_set_style_pad_gap(main, 0, 0);
    lv_obj_set_style_border_width(main, 0, 0);
    lv_obj_set_style_transform_angle(main, angle * 10, 0);
    lv_obj_set_style_transform_pivot_x(main, 5, 0);
    lv_obj_set_style_transform_pivot_y(main, 5, 0);

    lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
    lv_obj_set_style_x(main, x, 0);
    lv_obj_set_style_y(main, y, 0);
    //lv_obj_set_size(main, GIRISTANKI_WITDH, GIRISTANKI_HEIGHT);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);

    LV_IMG_DECLARE(Dirsek4);




    lv_obj_t* img1 = lv_img_create(main);

    lv_img_set_src(img1, &Dirsek4);


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

    dirsek = img1;
   }
};



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





