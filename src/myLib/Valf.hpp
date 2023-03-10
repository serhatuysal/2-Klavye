
#include <stdio.h>

#ifdef _DEBUG
#include "../tools.hpp"
#else
#include "tools.hpp"

#endif // TESTING


#ifndef VALF_H
#define VALF_H



#ifdef __cplusplus
extern "C" {
#endif
    enum valf_Type{
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
        v4 = 0,
        v10 

    } ;
class Valf
{
private:
    /* data */
public:
 lv_obj_t* stop_img;
        lv_obj_t* run_img;
        lv_obj_t* error_img;
   void init(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, uint8_t position,uint8_t valfType){
lv_obj_t* main = lv_obj_create(parent);
    lv_obj_set_style_radius(main, 0, 0);
    lv_obj_set_style_pad_all(main, 0, 0);
    lv_obj_set_style_pad_gap(main, 0, 0);
    lv_obj_set_style_border_width(main, 0, 0);
    lv_obj_set_style_x(main, x, 0);
    lv_obj_set_style_y(main, y, 0);
    if (position == LEFT_TO_RIGHT) {
        lv_obj_set_style_transform_angle(main, 0, 0);
        lv_obj_set_style_transform_pivot_x(main, 0, 0);
        lv_obj_set_style_transform_pivot_y(main, 0, 0);
    }
   /* if (position == RIGHT_TO_LEFT) {
        lv_obj_set_style_transform_angle(main, 900, 0);
        lv_obj_set_style_transform_pivot_x(main, 0, 0);
        lv_obj_set_style_transform_pivot_y(main, 0, 0);
    }*/
    if (position == UP_TO_DOWN) {
        lv_obj_set_style_transform_angle(main, 0, 0);
        lv_obj_set_style_transform_pivot_x(main, 0, 0);
        lv_obj_set_style_transform_pivot_y(main, 0, 0);
    }
    if (position == DOWN_TO_UP) {
        lv_obj_set_style_transform_angle(main, -900, 0);
        lv_obj_set_style_transform_pivot_x(main, valfType==v4 ? 20:28, 0);
        lv_obj_set_style_transform_pivot_y(main,valfType==v4 ?25: 28, 0);
        lv_obj_set_style_x(main, valfType==v4 ? x-20 : x-28, 0);
        lv_obj_set_style_y(main, valfType == v4 ? y-25: y-28, 0);
    }

    lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
  
    //lv_obj_set_size(main, GIRISTANKI_WITDH, GIRISTANKI_HEIGHT);
    lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);

  

    lv_obj_t* stop_img = lv_img_create(main);
    lv_obj_t* run_img = lv_img_create(main);
    lv_obj_t* error_img = lv_img_create(main);


    if (valfType == v4) {
        LV_IMG_DECLARE(Valf4_error);
        LV_IMG_DECLARE(Valf4_stop);
        LV_IMG_DECLARE(Valf4_run);
        lv_img_set_src(stop_img, &Valf4_stop);
        lv_img_set_src(run_img, &Valf4_run);
        lv_img_set_src(error_img, &Valf4_error);

    }
    else if (valfType == v10) {
        LV_IMG_DECLARE(Valf10_error);
        LV_IMG_DECLARE(Valf10_stop);
        LV_IMG_DECLARE(Valf10_run);
        lv_img_set_src(stop_img, &Valf10_stop);
        lv_img_set_src(run_img, &Valf10_run);
        lv_img_set_src(error_img, &Valf10_error);
    }



   
    lv_img_set_size_mode(stop_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(stop_img, 0, 0);
    lv_obj_set_style_border_width(stop_img, 0, 0);
    lv_obj_clear_flag(stop_img, LV_OBJ_FLAG_SCROLLABLE);



    lv_img_set_size_mode(run_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(run_img, 0, 0);
    lv_obj_set_style_border_width(run_img, 0, 0);
    lv_obj_clear_flag(run_img, LV_OBJ_FLAG_SCROLLABLE);



    lv_img_set_size_mode(error_img, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(error_img, 0, 0);
    lv_obj_set_style_border_width(error_img, 0, 0);
    lv_obj_clear_flag(error_img, LV_OBJ_FLAG_SCROLLABLE);

    stop_img = stop_img;
    run_img = run_img;
    error_img = error_img;
   
    _ui_flag_modify(stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
   }
   void on(){
   _ui_flag_modify(stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
   }
   void off(){
   _ui_flag_modify(stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    _ui_flag_modify(run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
   }
   void error(){
_ui_flag_modify(stop_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(run_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    _ui_flag_modify(error_img, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
   }
};



   


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





