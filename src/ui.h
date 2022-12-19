// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
void ui_event_btnArtir(lv_event_t * e);
extern lv_obj_t * ui_btnArtir;
extern lv_obj_t * ui_lblArtir;
void ui_event_btnAzalt(lv_event_t * e);
extern lv_obj_t * ui_btnAzalt;
extern lv_obj_t * ui_lblAzalt;
void ui_event_Role1(lv_event_t * e);
extern lv_obj_t * ui_Role1;
void ui_event_btnCalistir(lv_event_t * e);
extern lv_obj_t * ui_btnCalistir;
extern lv_obj_t * ui_lblCalistir;
extern lv_obj_t * ui_Role1Text;
extern lv_obj_t * ui_lblSayi2;
extern lv_obj_t * ui_lblRole1Durum;
extern lv_obj_t * ui_lblRole2Durum;
extern lv_obj_t * ui_Screen1_Keyboard1;
void ui_event_Screen1_TextArea1(lv_event_t * e);
extern lv_obj_t * ui_Screen1_TextArea1;
extern lv_obj_t * led2;

void sayiArtirfunction(lv_event_t * e);
void sayiAzaltFunction(lv_event_t * e);
void birTusatiklandi(lv_event_t * e);
void ledYak(lv_event_t * e);
void texteGoreCalistir(lv_event_t * e);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
