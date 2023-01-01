
#include <stdio.h>

#ifdef _DEBUG
#include "../tools.hpp"

#else
#include "tools.hpp"
//#include <EEPROM.h>
#endif // TESTING

#ifndef SYSTENSETTINGS_H
#define SYSTENSETTINGS_H

#ifdef __cplusplus
extern "C"
{
#endif

	class SystemSettings
	{
	private:
		static void set_language_event(lv_event_t* e)
		{
			lv_event_code_t code = lv_event_get_code(e);
			lv_obj_t* obj = lv_event_get_target(e);
			if (code == LV_EVENT_VALUE_CHANGED) {
				static const char* btns[] = { "", "",NULL};
				btns[0] = L.get("yes");
				btns[1] = L.get("no");
				lv_obj_t* changeLanguageQuestionMessageBox = lv_msgbox_create(NULL, "", L.get("changeLanguageQuestionMessageBox"), btns, false);
				lv_obj_set_user_data(changeLanguageQuestionMessageBox, obj);
				lv_obj_add_event_cb(changeLanguageQuestionMessageBox, changeLanguageQuestionMessageBox_event, LV_EVENT_VALUE_CHANGED, NULL);
				lv_group_focus_obj(lv_msgbox_get_btns(changeLanguageQuestionMessageBox));
				lv_obj_add_state(lv_msgbox_get_btns(changeLanguageQuestionMessageBox), LV_STATE_FOCUS_KEY);
				lv_obj_center(changeLanguageQuestionMessageBox);
		
			}
		}


		static void changeLanguageQuestionMessageBox_event(lv_event_t* e)
		{
			lv_event_code_t code = lv_event_get_code(e);
			lv_obj_t* msgbox = lv_event_get_current_target(e);
			if (code == LV_EVENT_VALUE_CHANGED) {
				uint16_t index = lv_msgbox_get_active_btn(msgbox);
				lv_msgbox_close(msgbox);
				if (index == 0) { //Yes
					lv_obj_t* dropDown = (lv_obj_t*)lv_obj_get_user_data(msgbox);
					uint16_t  dropDownSelectedIndex = lv_dropdown_get_selected(dropDown);
					L.CodeType = LanguageCodeType(dropDownSelectedIndex);
					// EEPROM.write(0, dropDownSelectedIndex);
					// ESP.restart();
				}
				else {

				}
			}
		}
	public:

		lv_obj_t* init(lv_obj_t* parent, lv_coord_t x, lv_coord_t y)
		{
			LV_FONT_DECLARE(ui_font_GothamNarrowBook14);
			lv_obj_t* main = lv_obj_create(parent);
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
			lv_obj_t* dropdown = lv_dropdown_create(main);
			lv_dropdown_set_options(dropdown, L.get("languageDropDownList"));
			//LV_IMG_DECLARE(img_caret_down)
		  lv_dropdown_set_symbol(dropdown, LV_SYMBOL_DOWN);
			lv_obj_set_style_text_font(dropdown, &ui_font_GothamNarrowBook14, LV_PART_MAIN);
			lv_obj_set_style_text_font(lv_dropdown_get_list(dropdown), &ui_font_GothamNarrowBook14, LV_PART_MAIN);

			lv_obj_align(dropdown, LV_ALIGN_TOP_MID, 0, 20);
			lv_obj_add_event_cb(dropdown, set_language_event, LV_EVENT_ALL, NULL);
			return main;
		}
	};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */
