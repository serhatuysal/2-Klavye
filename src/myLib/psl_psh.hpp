

#include <stdio.h>

#ifdef _DEBUG
#include "../tools.hpp"
#else
#include "tools.hpp"

#endif // TESTING

#ifndef PSL_PSH_H
#define PSL_PSH_H
#ifdef __cplusplus
extern "C"
{
#endif
    class PslPsh
    {
    private:
        lv_obj_t *run_img;
        lv_obj_t *error_img;

    public:
        void init(lv_obj_t *parent, lv_coord_t x, lv_coord_t y)
        {

            lv_obj_t *main = lv_obj_create(parent);
            lv_obj_set_style_radius(main, 0, 0);
            lv_obj_set_style_pad_all(main, 0, 0);
            lv_obj_set_style_pad_gap(main, 0, 0);
            lv_obj_set_style_border_width(main, 0, 0);

            lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
            lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
            lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
            // lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
            lv_obj_set_style_x(main, x, 0);
            lv_obj_set_style_y(main, y, 0);
            // lv_obj_set_size(main, GIRISTANKI_WITDH, GIRISTANKI_HEIGHT);
            lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);

            LV_IMG_DECLARE(PSL_PSH_normal);
            LV_IMG_DECLARE(PSL_PSH_error);

            lv_obj_t *run_img = lv_img_create(main);
            lv_img_set_src(run_img, &PSL_PSH_normal);
            lv_img_set_size_mode(run_img, LV_IMG_SIZE_MODE_REAL);
            lv_obj_set_style_pad_all(run_img, 0, 0);
            lv_obj_set_style_border_width(run_img, 0, 0);
            lv_obj_clear_flag(run_img, LV_OBJ_FLAG_SCROLLABLE);

            lv_obj_t *error_img = lv_img_create(main);
            lv_img_set_src(error_img, &PSL_PSH_error);
            lv_img_set_size_mode(error_img, LV_IMG_SIZE_MODE_REAL);
            lv_obj_set_style_pad_all(error_img, 0, 0);
            lv_obj_set_style_border_width(error_img, 0, 0);
            lv_obj_clear_flag(error_img, LV_OBJ_FLAG_SCROLLABLE);

            run_img = run_img;
            error_img = error_img;

            setVisibilty(run_img, true);
            setVisibilty(error_img, false);
        }
        void on()
        {
            setVisibilty(run_img, true);
            setVisibilty(error_img, false);
        }
        void error()
        {
            setVisibilty(run_img, false);
            setVisibilty(error_img, true);
        }
    };

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */
