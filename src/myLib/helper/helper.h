
#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>


#ifdef TESTING
#include "../../lvgl/lvgl.h"

#else
#include "lvgl.h"
#include "ui_helpers.h"
#endif // TESTING

#include "../button/button.h"
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
  LV_FONT_DECLARE(ui_font_GothamNarrow);
  LV_FONT_DECLARE(ui_font_GothamNarrowSmall);

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


  BackGround background;


    void setVisibilty(lv_obj_t* target, bool value);
    void setChecked(lv_obj_t* target, bool value);
    void infoMessageShow(const char* mesaj);
    void errorMessageShow(const char* mesaj);



    void ui_event_BTN_Menu(lv_event_t* e);
    void ui_event_BTN_Stop(lv_event_t* e);
    void ui_event_BTN_Start(lv_event_t* e);
    void ui_event_BTN_CipStart(lv_event_t* e);
    lv_obj_t* scadaMainCreate();
    lv_obj_t* btnMainCreate();


#ifdef TESTING
#define _UI_MODIFY_STATE_ADD 0
#define _UI_MODIFY_STATE_REMOVE 1
#define _UI_MODIFY_STATE_TOGGLE 2

#define _UI_MODIFY_FLAG_ADD 0
#define _UI_MODIFY_FLAG_REMOVE 1
#define _UI_MODIFY_FLAG_TOGGLE 2
    void _ui_flag_modify(lv_obj_t* target, int32_t flag, int value);
    void _ui_state_modify(lv_obj_t* target, int32_t state, int value);
    void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v);

#endif // TESTING



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





