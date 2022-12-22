
#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>




#ifdef _DEBUG
#include "../../lvgl/lvgl.h"
#include "../../src/mylib/button/button.h"
#include "../../src/mylib/background/background.h"
#include "../../src/mylib/filtre/filtre.h"
#include "../../src/mylib/dirsek_10/dirsek_10.h"
#include "../../src/mylib/TBoru/TBoru.h"
#include "../../src/mylib/valf/Valf.h"
#include "../../src/mylib/cip_tank/cip_tank.h"
#include "../../src/mylib/dosing_tank/dosing_tank.h"
#include "../../src/mylib/hpp_motor/hpp_motor.h"
#include "../../src/mylib/kartus/kartus.h"
#include "../../src/mylib/membrane/membrane.h"
#include "../../src/mylib/psl_psh/psl_psh.h"
#include "../../src/mylib//dosing_pump/dosing_pump.h"
#include "../../src/mylib/temiz_su_tanki/temiz_su_tanki.h"
#include "../../src/mylib/dirsek_6/dirsek_6.h"
#include "../../src/mylib/boru/Boru.h"
#include "../../src/mylib/dirsek_4/dirsek_4.h"
#include "../../src/mylib/label/label.h"
#else
#include "lvgl.h"
#include "ui_helpers.h"
#include "mylib/button/button.h"
#include "../background/background.h"
#include "../filtre/filtre.h"
#include "../dirsek_10/dirsek_10.h"
#include "../TBoru/TBoru.h"
#include "../valf/Valf.h"
#include "../cip_tank/cip_tank.h"
#include "../dosing_tank/dosing_tank.h"
#include "../hpp_motor/hpp_motor.h"
#include "../kartus/kartus.h"
#include "../membrane/membrane.h"
#include "../psl_psh/psl_psh.h"
#include "..//dosing_pump/dosing_pump.h"
#include "../temiz_su_tanki/temiz_su_tanki.h"
#include "../dirsek_6/dirsek_6.h"
#include "../boru/Boru.h"
#include "../dirsek_4/dirsek_4.h"
#include "../label/label.h"
#endif // TESTING




#ifdef __cplusplus
extern "C" {
#endif
    typedef enum {
        /** Zoom doesn't affect the coordinates of the object,
         *  however if zoomed in the image is drawn out of the its coordinates.
         *  The layout's won't change on zoom */
        LEFT_TO_RIGHT = 0,
        RIGHT_TO_LEFT = 1,
        DOWN_TO_UP = 2,
        UP_TO_DOWN = 3

    } position;
    LV_FONT_DECLARE(ui_font_GothamNarrowBook10);
    LV_FONT_DECLARE(ui_font_GothamNarrowBook14);
    LV_FONT_DECLARE(ui_font_GothamNarrowBook16);

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
  Filtre filtre;
    lv_obj_t* win;

  BackGround background;


    void setVisibilty(lv_obj_t* target, bool value);
    void setChecked(lv_obj_t* target, bool value);
    void infoMessageShow(const char* mesaj);
    void errorMessageShow(const char* mesaj);
    void setText(lv_obj_t* lbl, const char* text);
    void setText2(lv_obj_t* lbl, const char* text, lv_color_t color);
    void setColor(lv_obj_t* lbl, lv_color_t color);


    lv_obj_t* scadaMainCreate();
    lv_obj_t* btnMainCreate();
    void ui_init();
    void win_close(lv_event_t * e);
    void ui_event_BTN_Menu(lv_event_t* e);
    void ui_event_BTN_Stop(lv_event_t* e);
    void ui_event_BTN_Start(lv_event_t* e);
    void ui_event_BTN_CipStart(lv_event_t* e);

#ifdef _DEBUG
#define _UI_MODIFY_STATE_ADD 0
#define _UI_MODIFY_STATE_REMOVE 1
#define _UI_MODIFY_STATE_TOGGLE 2

#define _UI_MODIFY_FLAG_ADD 0
#define _UI_MODIFY_FLAG_REMOVE 1
#define _UI_MODIFY_FLAG_TOGGLE 2
    void _ui_flag_modify(lv_obj_t* target, int32_t flag, int value);
    void _ui_state_modify(lv_obj_t* target, int32_t state, int value);
    void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v);
    void _ui_anim_callback_set_height(lv_anim_t* a, int32_t v);
    int32_t _ui_anim_callback_get_height(lv_anim_t* a);
#endif // TESTING



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





