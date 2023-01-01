#include <stdio.h>
#ifndef HELPER_H
#define HELPER_H

#ifdef _DEBUG
#include "../../lvgl/lvgl.h"
#include "button.hpp"
#include "background.hpp"
#include "filtre.hpp"
#include "dirsek_10.hpp"
#include "TBoru.hpp"
#include "Valf.hpp"
#include "cip_tank.hpp"
#include "dosing_tank.hpp"
#include "hpp_motor.hpp"
#include "kartus.hpp"
#include "membrane.hpp"
#include "psl_psh.hpp"
#include "dosing_pump.hpp"
#include "temiz_su_tanki.hpp"
#include "dirsek_6.hpp"
#include "Boru.hpp"
#include "dirsek_4.hpp"
#include "language.hpp"
#include "ArduinoJson.h"
#include "system_settings.hpp"
// #include "../../src/mylib/label/label.h"
#else
#include "lvgl.h"
#include "mylib/button.hpp"
#include "mylib/background.hpp"
#include "mylib/filtre.hpp"
#include "mylib/dirsek_10.hpp"
#include "mylib/TBoru.hpp"
#include "mylib/Valf.hpp"
#include "mylib/cip_tank.hpp"
#include "mylib/dosing_tank.hpp"
#include "mylib/hpp_motor.hpp"
#include "mylib/kartus.hpp"
#include "mylib/membrane.hpp"
#include "mylib/psl_psh.hpp"
#include "mylib/dosing_pump.hpp"
#include "mylib/temiz_su_tanki.hpp"
#include "mylib/dirsek_6.hpp"
#include "mylib/Boru.hpp"
#include "mylib/dirsek_4.hpp"
#include "myLib/language.hpp"
#include "myLib/system_settings.hpp"

#endif // TESTING

#ifdef __cplusplus
extern "C"
{
#endif

	lv_obj_t *scadaMainCreate();
	lv_obj_t *btnMainCreate();
	static void menuPopupOlustur(lv_obj_t *parent);
	static void scroll_begin_event(lv_event_t *e);
	void tabb(lv_obj_t *parent);
	void ui_event_BTN_CipStart(lv_event_t *e);
	void ui_event_BTN_Start(lv_event_t *e);
	void ui_event_BTN_Stop(lv_event_t *e);
	void ui_event_BTN_Menu(lv_event_t *e);
	void infoMessageShow(const char *mesaj);
	void errorMessageShow(const char *mesaj);
	Button btn_menu;
	Button btn_start;
	Button btn_stop;
	Button btn_cipstart;
	DosingPump dosing_pump;
	DosingTank dosing_tank;
	Valf ev2;
	Valf ev3;
	HppMotor cip_pump;
	Valf ev4;
	CipTank cipTank;
	TemizSuTanki temiz_su_tanki;
	PslPsh psh;
	PslPsh psl;
	Valf ev1;
	HppMotor hpp;
	Filtre filtre;
	lv_obj_t *win;

	BackGround background;
	Boru boru1;
	Boru boru2;
	Boru boru3;
	Boru boru4;
	Boru boru5;
	Boru boru6;
	Boru boru7;
	Boru boru8;
	Boru boru12;
	Boru boru13;
	Boru ev4_boru;
	Boru boru_dosing;
	Boru boru6_1;
	TBoru tboru_1;
	TBoru tboru_2;
	TBoru tboru_3;
	Dirsek10 dirsek10_2;
	Dirsek10 dirsek10_3;
	Dirsek4 dirsek4_3;
	Dirsek6 dirsek6_1;
	Kartus kartus;
	Membrane membrane;

	SystemSettings systemSettings;
	void ui_init()
	{

		L.init(EN);

		background.init();
		lv_obj_t *scada_Main = scadaMainCreate();
		filtre.init(scada_Main, 0, 72);

		boru1.init(scada_Main, 20, 72, 35, DOWN_TO_UP, b10);
		dirsek10_2.init(scada_Main, 10, 16, 0);
		ev1.init(scada_Main, 35, 0, LEFT_TO_RIGHT, v10);
		tboru_1.init(scada_Main, 63, 16, t10);
		boru2.init(scada_Main, 84, 26, 16, LEFT_TO_RIGHT, b10);
		tboru_2.init(scada_Main, 100, 16, tDOSING);
		boru3.init(scada_Main, 121, 26, 16, LEFT_TO_RIGHT, b10);
		kartus.init(scada_Main, 137, 14);

		boru4.init(scada_Main, 175, 70, 30, LEFT_TO_RIGHT, b10);
		psl.init(scada_Main, 178, 37);

		hpp.init(scada_Main, 205, 17);

		boru5.init(scada_Main, 229, 70, 31, LEFT_TO_RIGHT, b10);
		psh.init(scada_Main, 232, 37);

		membrane.init(scada_Main, 260, 51);
		boru6.init(scada_Main, 359, 59, 15, LEFT_TO_RIGHT, b6);
		tboru_3.init(scada_Main, 370, 53, tCIP);
		boru6_1.init(scada_Main, 380, 59, 53, LEFT_TO_RIGHT, b6);

		dirsek6_1.init(scada_Main, 430, 53, 90);
		boru7.init(scada_Main, 443, 100, 37, DOWN_TO_UP, b6);
		temiz_su_tanki.init(scada_Main, 416, 100);

		boru8.init(scada_Main, 377, 68, 68, UP_TO_DOWN, b4);
		ev3.init(scada_Main, 389, 80, DOWN_TO_UP, v4);
		cipTank.init(scada_Main, 357, 130);

		ev4_boru.init(scada_Main, 359, 77, 45, LEFT_TO_RIGHT, b4);
		dirsek4_3.init(scada_Main, 402, 73, 90);
		ev4.init(scada_Main, 420, 80, DOWN_TO_UP, v4);

		boru13.init(scada_Main, 357, 183, 270, RIGHT_TO_LEFT, b10);
		cip_pump.init(scada_Main, 205, 139);
		dirsek10_3.init(scada_Main, 68, 165, -90);

		boru12.init(scada_Main, 69, 38, 131, UP_TO_DOWN, b10);
		ev2.init(scada_Main, 80, 70, DOWN_TO_UP, v10);

		boru_dosing.init(scada_Main, 109, 38, 32, UP_TO_DOWN, b4);
		dosing_pump.init(scada_Main, 102, 70, 0);
		dosing_tank.init(scada_Main, 99, 95);

		lv_obj_t *btn_Main = btnMainCreate();
		btn_start.init(btn_Main, 190, 0, L.get("btnStart"), BTNSTART, ui_event_BTN_Start, false);
		btn_stop.init(btn_Main, 260, 0, L.get("btnStop"), BTNSTOP, ui_event_BTN_Stop, false);
		btn_cipstart.init(btn_Main, 330, 0, L.get("btnCipStart"), BTNCIPSTART, ui_event_BTN_CipStart, false);
		btn_menu.init(btn_Main, 400, 0, L.get("btnMenu"), BTNMENU, ui_event_BTN_Menu, true);

		menuPopupOlustur(background.background);

		setVisibilty(win, false);
	};

	lv_obj_t *scadaMainCreate()
	{
		lv_obj_t *scada_Main = lv_obj_create(background.background);
		lv_obj_set_style_radius(scada_Main, 0, 0);
		lv_obj_set_style_pad_all(scada_Main, 0, 0);
		lv_obj_set_style_pad_gap(scada_Main, 0, 0);
		lv_obj_set_style_border_width(scada_Main, 0, 0);

		lv_obj_set_style_bg_opa(scada_Main, LV_OPA_TRANSP, 0);
		lv_obj_set_style_outline_opa(scada_Main, LV_OPA_TRANSP, 0);
		lv_obj_set_style_border_opa(scada_Main, LV_OPA_TRANSP, 0);
		// lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
		lv_obj_set_style_x(scada_Main, 8, 0);
		lv_obj_set_style_y(scada_Main, 42, 0);
		lv_obj_set_style_width(scada_Main, 465, 0);
		lv_obj_set_style_height(scada_Main, 200, 0);
		lv_obj_clear_flag(scada_Main, LV_OBJ_FLAG_SCROLLABLE);
		return scada_Main;
	}

	lv_obj_t *btnMainCreate()
	{
		lv_obj_t *btn_Main = lv_obj_create(background.background);
		lv_obj_set_style_radius(btn_Main, 0, 0);
		lv_obj_set_style_pad_all(btn_Main, 0, 0);
		lv_obj_set_style_pad_gap(btn_Main, 0, 0);
		lv_obj_set_style_border_width(btn_Main, 0, 0);

		lv_obj_set_style_bg_opa(btn_Main, LV_OPA_TRANSP, 0);
		lv_obj_set_style_outline_opa(btn_Main, LV_OPA_TRANSP, 0);
		lv_obj_set_style_border_opa(btn_Main, LV_OPA_TRANSP, 0);
		// lv_obj_set_style_bg_color(btn_Main, lv_color_make(100,100,0),0);
		lv_obj_set_style_x(btn_Main, 0, 0);
		lv_obj_set_style_y(btn_Main, 240, 0);
		lv_obj_set_style_width(btn_Main, 480, 0);
		lv_obj_set_style_height(btn_Main, 90, 0);
		lv_obj_clear_flag(btn_Main, LV_OBJ_FLAG_SCROLLABLE);
		return btn_Main;
	}
	void ui_event_BTN_Menu(lv_event_t *e)
	{

		lv_event_code_t event_code = lv_event_get_code(e);
		lv_obj_t *target = lv_event_get_target(e);
		if (event_code == LV_EVENT_CLICKED)
		{

			setVisibilty(win, true);
		}
	}

	static void event_handler(lv_event_t *e)
	{
		lv_obj_t *obj = lv_event_get_target(e);
		setVisibilty(win, false);
	}
	static void menuPopupOlustur(lv_obj_t *parent)
	{

		win = lv_win_create(lv_scr_act(), 40);
		lv_obj_t *btn;
		// lv_obj_set_style_radius(win, 20, 0);
		lv_obj_set_style_pad_all(win, 0, 0);
		// lv_obj_set_style_pad_gap(win, 10, 0);
		// lv_obj_set_style_border_width(win, 10, 0);

		lv_obj_t *header = lv_win_get_header(win);
		lv_obj_t *titleLbel = Label().init(header, 0, 0, "Menü", GothamNarrowBook16, lv_color_hex(0x000000));
		lv_obj_set_flex_grow(titleLbel, 1);
		btn = lv_win_add_btn(win, LV_SYMBOL_CLOSE, 60);
		lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
		lv_obj_t *cont = lv_win_get_content(win); /*Content can be added here*/
		lv_obj_set_style_pad_all(cont, 0, 0);
		tabb(cont);
	}

	void tabb(lv_obj_t *parent)
	{
		/*Create a Tab view object*/
		lv_obj_t *tabview;
		tabview = lv_tabview_create(parent, LV_DIR_LEFT, 120);
		lv_obj_add_event_cb(lv_tabview_get_content(tabview), scroll_begin_event, LV_EVENT_SCROLL_BEGIN, NULL);

		lv_obj_set_style_bg_color(tabview, lv_palette_lighten(LV_PALETTE_RED, 2), 0);

		lv_obj_t *tab_btns = lv_tabview_get_tab_btns(tabview);
		lv_obj_set_style_bg_color(tab_btns, lv_palette_darken(LV_PALETTE_GREY, 3), 0);
		lv_obj_set_style_text_color(tab_btns, lv_palette_lighten(LV_PALETTE_GREY, 5), 0);
		lv_obj_set_style_border_side(tab_btns, LV_BORDER_SIDE_RIGHT, LV_PART_ITEMS | LV_STATE_CHECKED);

		/*Add 3 tabs (the tabs are page (lv_page) and can be scrolled*/
		lv_obj_t *tab1 = lv_tabview_add_tab(tabview, "Tab 1");
		lv_obj_t *tab2 = lv_tabview_add_tab(tabview, L.get("SystemSettings"));
		lv_obj_t *tab3 = lv_tabview_add_tab(tabview, "Tab 3");


		/*Add content to the tabs*/
		lv_obj_t *label = lv_label_create(tab1);
		lv_label_set_text(label, "First tab");

		systemSettings.init(tab2, 0, 0);
		
		label = lv_label_create(tab3);
		lv_label_set_text(label, "Third tab");

	

		lv_obj_clear_flag(lv_tabview_get_content(tabview), LV_OBJ_FLAG_SCROLLABLE);
	}
	static void scroll_begin_event(lv_event_t *e)
	{
		/*Disable the scroll animations. Triggered when a tab button is clicked */
		if (lv_event_get_code(e) == LV_EVENT_SCROLL_BEGIN)
		{
			/*lv_anim_t* a = lv_event_get_param(e);
			if (a)  a->time = 0;*/
		}
	}

	void ui_event_BTN_Stop(lv_event_t *e)
	{

		lv_event_code_t event_code = lv_event_get_code(e);
		lv_obj_t *target = lv_event_get_target(e);
		if (event_code == LV_EVENT_CLICKED)
		{

			setVisibilty(btn_menu.btn, true);
			setChecked(btn_menu.btn, false);
			errorMessageShow("Bu bir error mesajı");
			dosing_tank.setBarPercent(50);
			temiz_su_tanki.setBarPercent(100);
			cipTank.setBarPercent(100);
		}
	}
	void ui_event_BTN_Start(lv_event_t *e)
	{

		lv_event_code_t event_code = lv_event_get_code(e);
		lv_obj_t *target = lv_event_get_target(e);
		if (event_code == LV_EVENT_CLICKED)
		{

			setChecked(btn_menu.btn, true);

			infoMessageShow("Bu bir info mesajı");
			dosing_tank.setBarPercent(100);
			temiz_su_tanki.setBarPercent(50);
			cipTank.setBarPercent(50);
		}
	}
	void ui_event_BTN_CipStart(lv_event_t *e)
	{

		lv_event_code_t event_code = lv_event_get_code(e);
		lv_obj_t *target = lv_event_get_target(e);

		if (event_code == LV_EVENT_CLICKED)
		{
			temiz_su_tanki.setBarPercent(0);
			cipTank.setBarPercent(0);
		}
	}

	void infoMessageShow(const char *mesaj)
	{
		setVisibilty(background.img_info, true);
		setVisibilty(background.img_error, false);
		setText2(background.lbl_mesaj, mesaj, lv_color_hex(0xffffff));
	}
	void errorMessageShow(const char *mesaj)
	{

		setVisibilty(background.img_info, false);
		setVisibilty(background.img_error, true);

		setText2(background.lbl_mesaj, mesaj, lv_color_hex(0xff0000));
	}

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */
