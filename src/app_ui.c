// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "mylib/helper/helper.h"
#include "ui_helpers.h"


void ui_init()
{
   
    background = backGround_Create();
    lv_obj_t* scada_Main = scadaMainCreate();
    filtre = filtre_Create(scada_Main, 0, 72);

    Boru boru1 = boru_Create(scada_Main, 20, 72, 35, DOWN_TO_UP, b10);
    Dirsek10  dirsek10_2 = dirsek10_Create(scada_Main, 10, 16, 0);
    ev1 = valf_Create(scada_Main, 35, 0, LEFT_TO_RIGHT, v10);
    TBoru tboru_1 = tBoru_Create(scada_Main, 63, 16, t10);
    Boru boru2 = boru_Create(scada_Main, 84, 26, 16, LEFT_TO_RIGHT, b10);
    TBoru tboru_2 = tBoru_Create(scada_Main, 100, 16, tDOSING);
    Boru boru3 = boru_Create(scada_Main, 121, 26, 16, LEFT_TO_RIGHT, b10);
    Kartus kartus = kartus_Create(scada_Main, 137, 14);

    Boru boru4 = boru_Create(scada_Main, 175, 70, 30, LEFT_TO_RIGHT, b10);
   psl = pslpsh_Create(scada_Main, 178, 37);

    HppMotor hpp = hppMotor_Create(scada_Main, 205, 17);

    Boru boru5 = boru_Create(scada_Main, 229, 70, 31, LEFT_TO_RIGHT, b10);
    psh = pslpsh_Create(scada_Main, 232, 37);

    Membrane membrane = membrane_Create(scada_Main, 260, 51);
    Boru boru6 = boru_Create(scada_Main, 359, 59, 15, LEFT_TO_RIGHT, b6);
    TBoru tboru_3 = tBoru_Create(scada_Main, 370, 53, tCIP);
    Boru boru6_1 = boru_Create(scada_Main, 380, 59, 53, LEFT_TO_RIGHT, b6);

    Dirsek6 dirsek6_1 = dirsek6_Create(scada_Main, 430, 53, 90);
    Boru boru7 = boru_Create(scada_Main, 443, 100, 37, DOWN_TO_UP, b6);
    temiz_su_tanki = temizSuTanki_Create(scada_Main, 416, 100);

    Boru boru8 = boru_Create(scada_Main, 377, 68, 68, UP_TO_DOWN, b4);
     ev3 = valf_Create(scada_Main, 389, 80, DOWN_TO_UP, v4);
     cipTank = cipTank_Create(scada_Main, 357, 130);

    Boru ev4_boru = boru_Create(scada_Main, 359, 77, 45, LEFT_TO_RIGHT, b4);
    Dirsek4 dirsek4_3 = dirsek4_Create(scada_Main, 402, 73, 90);
    ev4 = valf_Create(scada_Main, 420, 80, DOWN_TO_UP, v4);


    Boru boru13 = boru_Create(scada_Main, 357, 183, 270, RIGHT_TO_LEFT, b10);
    cip_pump = hppMotor_Create(scada_Main, 205, 139);
    Dirsek10 dirsek10_3 = dirsek10_Create(scada_Main, 68, 165, -90);


    Boru boru12 = boru_Create(scada_Main, 69, 38, 131, UP_TO_DOWN, b10);
    ev2 = valf_Create(scada_Main, 80, 70, DOWN_TO_UP, v10);

    Boru boru_dosing = boru_Create(scada_Main, 109, 38, 32, UP_TO_DOWN, b4);
    dosing_pump = dosingPump_Create(scada_Main, 102, 70, 0);
    dosing_tank = dosingTank_Create(scada_Main, 99, 95);

   

    lv_obj_t* btn_Main = btnMainCreate();


    btn_start = btn_Create(btn_Main, 190, 0, "Start", BTNSTART, ui_event_BTN_Start, false);
    btn_stop = btn_Create(btn_Main, 260, 0, "Stop", BTNSTOP, ui_event_BTN_Stop, false);
    btn_cipstart = btn_Create(btn_Main, 330, 0, "Cip Start", BTNCIPSTART, ui_event_BTN_CipStart, false);
    btn_menu = btn_Create(btn_Main, 400, 0, "Menu", BTNMENU, ui_event_BTN_Menu, true);
  

    win = lv_obj_create(lv_scr_act());
    lv_obj_set_style_radius(win, 50, 0);
    lv_obj_set_style_pad_all(win, 0, 0);
    lv_obj_set_style_pad_gap(win, 0, 0);
    lv_obj_set_style_border_width(win, 0, 0);


   // lv_obj_set_style_bg_opa(win, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(win, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(win, LV_OPA_TRANSP, 0);
    lv_obj_set_style_bg_color(win, lv_color_make(100,100,0),0);
    lv_obj_set_style_x(win, 0, 0);
    lv_obj_set_style_y(win, 0, 0);
    lv_obj_set_style_width(win, 480, 0);
    lv_obj_set_style_height(win, 320, 0);
    lv_obj_clear_flag(win, LV_OBJ_FLAG_SCROLLABLE);


     lv_obj_t * label;

    lv_obj_t * btn1 = lv_btn_create(win);
    lv_obj_add_event_cb(btn1, win_close,LV_EVENT_ALL, NULL);
      lv_obj_set_style_x(btn1, 0, 0);
    lv_obj_set_style_y(btn1, 0, 0);

    label = lv_label_create(btn1);
    lv_label_set_text(label, "Button");
    setVisibilty(win,false);
}




void win_close(lv_event_t * e)
{
      lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED) {

        setVisibilty(win, false);
    }

    
}

void ui_event_BTN_Menu(lv_event_t* e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED) {

        setVisibilty(win, true);
    }
}
void ui_event_BTN_Stop(lv_event_t* e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED) {

        setVisibilty(btn_menu.btn, true);
        setChecked(btn_menu.btn, false);
        errorMessageShow("Bu bir error mesajı");
        dosing_tank.setBarPercent(&dosing_tank, 50);
        temiz_su_tanki.setBarPercent(&temiz_su_tanki, 100);
        cipTank.setBarPercent(&cipTank, 100);
    }
}
void ui_event_BTN_Start(lv_event_t* e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED) {

        setChecked(btn_menu.btn, false);
        //background.infoMessageShow(&background, "Bu bir info mesajı");
        infoMessageShow("Bu bir info mesajı");
        dosing_tank.setBarPercent(&dosing_tank, 100);
        temiz_su_tanki.setBarPercent(&temiz_su_tanki, 50);
        cipTank.setBarPercent(&cipTank, 50);
    }
}
void ui_event_BTN_CipStart(lv_event_t* e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);
    
    if (event_code == LV_EVENT_CLICKED) {
        temiz_su_tanki.setBarPercent(&temiz_su_tanki, 0);
        cipTank.setBarPercent(&cipTank, 0);
        

    }
}