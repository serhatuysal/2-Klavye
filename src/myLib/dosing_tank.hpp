
#include <stdio.h>

#ifdef _DEBUG
#include "../tools.hpp"
#else
#include "tools.hpp"

#endif // TESTING

#ifndef DOSINGTANK_H
#define DOSINGTANK_H



#ifdef __cplusplus
extern "C" {
#endif
	class DosingTank
	{
	private:
		/* data */
	public:
		lv_obj_t* tank;
		lv_obj_t* bar;
		int16_t barValue;
		void init(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y) {
			lv_obj_t* main = lv_obj_create(parent);
			lv_obj_set_style_radius(main, 0, 0);
			lv_obj_set_style_pad_all(main, 0, 0);
			lv_obj_set_style_pad_gap(main, 0, 0);
			lv_obj_set_style_border_width(main, 0, 0);


			lv_obj_set_style_bg_opa(main, LV_OPA_TRANSP, 0);
			lv_obj_set_style_outline_opa(main, LV_OPA_TRANSP, 0);
			lv_obj_set_style_border_opa(main, LV_OPA_TRANSP, 0);
			//lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
			lv_obj_set_style_x(main, x, 0);
			lv_obj_set_style_y(main, y, 0);
			//lv_obj_set_size(main, GIRISTANKI_WITDH, GIRISTANKI_HEIGHT);
			lv_obj_clear_flag(main, LV_OBJ_FLAG_SCROLLABLE);

			LV_IMG_DECLARE(dosing_tank_normal);




			lv_obj_t* img1 = lv_img_create(main);

			lv_img_set_src(img1, &dosing_tank_normal);


			lv_img_set_size_mode(img1, LV_IMG_SIZE_MODE_REAL);

			//lv_obj_set_style_width(img1, width, 0);
			//lv_obj_set_style_height(img1, height, 0);
			//lv_obj_set_style_radius(kasa, 10, 0);
			lv_obj_set_style_pad_all(img1, 0, 0);
			//lv_obj_set_style_bg_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
			//lv_obj_set_style_border_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
			lv_obj_set_style_border_width(img1, 0, 0);

			lv_obj_clear_flag(img1, LV_OBJ_FLAG_SCROLLABLE);





			lv_obj_t* _bar = lv_obj_create(img1);
			lv_obj_set_style_radius(_bar, 0, 0);
			lv_obj_set_style_pad_all(_bar, 0, 0);
			lv_obj_set_style_pad_gap(_bar, 0, 0);
			lv_obj_set_style_border_width(_bar, 0, 0);


			//lv_obj_set_style_bg_opa(bar, LV_OPA_TRANSP, 0);
			lv_obj_set_style_outline_opa(_bar, LV_OPA_TRANSP, 0);
			lv_obj_set_style_border_opa(_bar, LV_OPA_TRANSP, 0);
			lv_obj_set_style_bg_color(_bar, lv_color_make(100, 100, 0), 0);
			lv_obj_set_style_x(_bar, 6, 0);
			lv_obj_set_style_y(_bar, 0, 0);
			lv_obj_set_size(_bar, 8, 0);
			lv_obj_set_style_transform_pivot_x(_bar, 5, 0);
			lv_obj_set_style_transform_pivot_y(_bar, 24, 0);
			lv_obj_set_style_transform_angle(_bar, -1800, 0);

			lv_obj_clear_flag(_bar, LV_OBJ_FLAG_SCROLLABLE);


			tank = img1;
			bar = _bar;
			barValue = 0;

		}
		void setBarPercent(uint16_t percent) {
			int16_t _barvalue = (percent * 42) / 100;
			lv_anim_t PropertyAnimation_0;
			lv_anim_init(&PropertyAnimation_0);
			lv_anim_set_time(&PropertyAnimation_0, 1000);
			lv_anim_set_user_data(&PropertyAnimation_0, bar);
			lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_height);
			lv_anim_set_values(&PropertyAnimation_0, barValue, _barvalue);
			lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_bounce);
			lv_anim_set_delay(&PropertyAnimation_0, 0 + 0);
			lv_anim_set_playback_time(&PropertyAnimation_0, 0);
			lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
			lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
			lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
			lv_anim_set_early_apply(&PropertyAnimation_0, false);
			lv_anim_start(&PropertyAnimation_0);
			barValue = _barvalue;
		}
	};









#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





