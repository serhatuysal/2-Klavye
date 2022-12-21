
#include <lvgl.h>
#include <TFT_eSPI.h>
#include "ui.h"
#include "ui_helpers.h"

#include "myLib/helper/helper.h"

#define TESTING FALSE

#include "SPIFFS.h"
#include "SD.h"
#include "SPI.h"

//https://github.com/100askTeam/esp-arduino-learn/blob/master/examples/08_integrated/01_lcd_sd_card_fc_joypad_fs_lv_lib_100ask/01_lcd_sd_card_fc_joypad_fs_lv_lib_100ask.ino
void listDir(fs::FS &fs, const char *dirname, uint8_t levels);
File readFile(fs::FS &fs, const char *path);
void lv_example_msgbox_1(const char * mesaj);
static void *sd_fs_open(lv_fs_drv_t *drv, const char *path, lv_fs_mode_t mode);
static lv_fs_res_t sd_dir_close(lv_fs_drv_t *drv, void *dir_p);
static lv_fs_res_t sd_dir_read(lv_fs_drv_t *drv, void *dir_p, char *fn);
static void *sd_dir_open(lv_fs_drv_t *drv, const char *dirpath);
static lv_fs_res_t sd_fs_tell(lv_fs_drv_t *drv, void *file_p, uint32_t *pos_p);
static lv_fs_res_t sd_fs_seek(lv_fs_drv_t *drv, void *file_p, uint32_t pos, lv_fs_whence_t whence);
static lv_fs_res_t sd_fs_write(lv_fs_drv_t *drv, void *file_p, const void *buf, uint32_t btw, uint32_t *bw);
static lv_fs_res_t sd_fs_read(lv_fs_drv_t *drv, void *file_p, void *fileBuf, uint32_t btr, uint32_t *br);
static lv_fs_res_t sd_fs_close(lv_fs_drv_t *drv, void *file_p);
static const uint16_t screenWidth = 480;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * screenHeight / 10];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

lv_obj_t* win;
static void event_handler_hide(lv_event_t * e);
void guiTask(void *pvParameters);


void my_print(const char *buf)
{
  Serial.printf(buf);
  Serial.flush();
}


/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors((uint16_t *)&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  uint16_t touchX = 0, touchY = 0;

  bool touched = tft.getTouch(&touchX, &touchY, 600);

  if (!touched)
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;

    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;

    Serial.print("Data x ");
    Serial.println(touchX);

    Serial.print("Data y ");
    Serial.println(touchY);
  }
}

void setup()
{
 Serial.begin(115200);
  lv_init();

  lv_log_register_print_cb(my_print); /* register print function for debugging */

   tft.begin();        /* TFT init */
   tft.setRotation(1); /* Landscape orientation, flipped */
   uint16_t calData[5] = {367, 3472, 359, 3327, 7};
   tft.setTouch(calData);
  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * screenHeight / 10);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

 
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);

 if(!SPIFFS.begin(true)){
     Serial.println("An Error has occurred while mounting SPIFFS");
     return;
   }else{
    Serial.println("SPIFFS Begined");
   }
static lv_fs_drv_t fs_drv;
  lv_fs_drv_init(&fs_drv);

  /*Set up fields...*/
  fs_drv.letter = 'P';
  fs_drv.cache_size = 0;


  fs_drv.open_cb = sd_fs_open;
   fs_drv.close_cb = sd_fs_close;
   fs_drv.read_cb = sd_fs_read;
   fs_drv.write_cb = sd_fs_write;
   fs_drv.seek_cb = sd_fs_seek;
   fs_drv.tell_cb = sd_fs_tell;

   fs_drv.dir_close_cb = sd_dir_close;
  fs_drv.dir_open_cb = sd_dir_open;
   fs_drv.dir_read_cb = sd_dir_read;

  lv_fs_drv_register(&fs_drv);



 background = backGround_Create();
    lv_obj_t* scada_Main = scadaMainCreate();
    filtre = filtre_Create(scada_Main, 0, 72);

    Boru  boru1 = boru_Create(scada_Main, 20, 72, 35, DOWN_TO_UP, b10);
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

    Boru boru8 = boru_Create(scada_Main, 377, 68, 80, UP_TO_DOWN, b4);
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
    lv_obj_add_event_cb(btn1, event_handler_hide,LV_EVENT_ALL, NULL);
      lv_obj_set_style_x(btn1, 0, 0);
    lv_obj_set_style_y(btn1, 0, 0);

    label = lv_label_create(btn1);
    lv_label_set_text(label, "Button");
    setVisibilty(win,false);


  xTaskCreate(guiTask,
              "gui",
              4096 * 2,
              NULL,
              2,
              NULL);
}



static void event_handler_hide(lv_event_t * e)
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

     setVisibilty(win,true);
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
    }
}
void ui_event_BTN_CipStart(lv_event_t* e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED) {



    }
}

static void *sd_fs_open(lv_fs_drv_t *drv, const char *path, lv_fs_mode_t mode) {
  LV_UNUSED(drv);

  const char *flags = "";

  if (mode == LV_FS_MODE_WR)
    flags = FILE_WRITE;
  else if (mode == LV_FS_MODE_RD)
    flags = FILE_READ;
  else if (mode == (LV_FS_MODE_WR | LV_FS_MODE_RD))
    flags = FILE_WRITE;

  File f = SPIFFS.open(path, flags);
  if (!f) {
    Serial.println("Failed to open file!");
    return NULL;
  }

  File *lf = new File{ f };

  //make sure at the beginning
  //fp->seek(0);

  return (void *)lf;
}

static lv_fs_res_t sd_fs_close(lv_fs_drv_t *drv, void *file_p) {
  LV_UNUSED(drv);

  File *fp = (File *)file_p;

  fp->close();

  delete (fp);  // when close
  return LV_FS_RES_OK;
}

static lv_fs_res_t sd_fs_read(lv_fs_drv_t *drv, void *file_p, void *fileBuf, uint32_t btr, uint32_t *br) {
  LV_UNUSED(drv);

  File *fp = (File *)file_p;

  *br = fp->read((uint8_t *)fileBuf, btr);

  return (int32_t)(*br) < 0 ? LV_FS_RES_UNKNOWN : LV_FS_RES_OK;
}

static lv_fs_res_t sd_fs_write(lv_fs_drv_t *drv, void *file_p, const void *buf, uint32_t btw, uint32_t *bw) {
  LV_UNUSED(drv);

  File *fp = (File *)file_p;

  *bw = fp->write((const uint8_t *)buf, btw);

  return (int32_t)(*bw) < 0 ? LV_FS_RES_UNKNOWN : LV_FS_RES_OK;
}

static lv_fs_res_t sd_fs_seek(lv_fs_drv_t *drv, void *file_p, uint32_t pos, lv_fs_whence_t whence) {
  LV_UNUSED(drv);

  File *fp = (File *)file_p;

  SeekMode mode;
  if (whence == LV_FS_SEEK_SET)
    mode = SeekSet;
  else if (whence == LV_FS_SEEK_CUR)
    mode = SeekCur;
  else if (whence == LV_FS_SEEK_END)
    mode = SeekEnd;

  fp->seek(pos, mode);

  return LV_FS_RES_OK;
}

static lv_fs_res_t sd_fs_tell(lv_fs_drv_t *drv, void *file_p, uint32_t *pos_p) {
  LV_UNUSED(drv);

  File *fp = (File *)file_p;

  *pos_p = fp->position();

  return LV_FS_RES_OK;
}


static void *sd_dir_open(lv_fs_drv_t *drv, const char *dirpath) {
  LV_UNUSED(drv);

  File root = SPIFFS.open(dirpath);
  if (!root) {
    Serial.println("Failed to open directory!");
    return NULL;
  }

  if (!root.isDirectory()) {
    Serial.println("Not a directory!");
    return NULL;
  }

  File *lroot = new File{ root };

  return (void *)lroot;
}


static lv_fs_res_t sd_dir_read(lv_fs_drv_t *drv, void *dir_p, char *fn) {
  LV_UNUSED(drv);

  File *root = (File *)dir_p;
  fn[0] = '\0';

  File file = root->openNextFile();
  while (file) {
    if (strcmp(file.name(), ".") == 0 || strcmp(file.name(), "..") == 0) {
      continue;
    } else {
      if (file.isDirectory()) {
        Serial.print("  DIR : ");
        Serial.println(file.name());
        fn[0] = '/';
        strcpy(&fn[1], file.name());
      } else {
        Serial.print("  FILE: ");
        Serial.print(file.name());
        Serial.print("  SIZE: ");
        Serial.println(file.size());

        strcpy(fn, file.name());
      }
      break;
    }
    file = root->openNextFile();
  }

  return LV_FS_RES_OK;
}

static lv_fs_res_t sd_dir_close(lv_fs_drv_t *drv, void *dir_p) {
  LV_UNUSED(drv);

  File *root = (File *)dir_p;

  root->close();

  delete (root);  // when close

  return LV_FS_RES_OK;
}
void lv_example_msgbox_1(const char * mesaj )
{
    static const char * btns[] = {"Close", ""};

    lv_obj_t * mbox1 = lv_msgbox_create(NULL, "TSET", mesaj, btns, true);
   // lv_obj_add_event_cb(mbox1, event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_center(mbox1);
}

void loop()
{
}

void guiTask(void *pvParameters)
{
  while (1)
  {
    lv_task_handler();
    vTaskDelay(5);
  }
}