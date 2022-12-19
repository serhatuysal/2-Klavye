
#include <lvgl.h>
#include <TFT_eSPI.h>
#include "ui.h"
#include "ui_helpers.h"

#include "mylib/dirsek_4/dirsek_4.h"
#include "myLib/filtre/filtre.h"
#include "mylib/dirsek_10/dirsek_10.h"
#include "mylib/TBoru/TBoru.h"

#include "mylib/valf/Valf.h"

#include "mylib/cip_tank/cip_tank.h"
#include "mylib/dosing_tank/dosing_tank.h"
#include "mylib/hpp_motor/hpp_motor.h"
#include "mylib/kartus/kartus.h"
#include "mylib/membrane/membrane.h"
#include "mylib/psl_psh/psl_psh.h"
#include "mylib/dosing_pump/dosing_pump.h"
#include "mylib/temiz_su_tanki/temiz_su_tanki.h"
#include "mylib/dirsek_6/dirsek_6.h"
#include "mylib/boru/Boru.h"
#include "mylib/position/position.h"
#include "mylib/background/background.h"

#define TESTING FALSE

#include "SPIFFS.h"
#include "SD.h"
#include "SPI.h"

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

int sayi = 0;
int calismaSayisi = 0;
void guiTask(void *pvParameters);

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char *buf)
{
  Serial.printf(buf);
  Serial.flush();
}
#endif

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
// digitalWrite(16, HIGH); // TFT screen chip select
// digitalWrite(15, HIGH); // SD card chips select
//   Serial.begin(115200); /* prepare for possible serial debug */
//   SPI.begin(14, 12, 13);
//   SPI.setFrequency(8000000);


  lv_init();

  //lv_log_register_print_cb(my_print); /* register print function for debugging */

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

  /*Initialize the (dummy) input device driver*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);

    
    BackGround background = backGround_Create();
    lv_obj_t* scada_Main = lv_obj_create(background.background);
    lv_obj_set_style_radius(scada_Main, 0, 0);
    lv_obj_set_style_pad_all(scada_Main, 0, 0);
    lv_obj_set_style_pad_gap(scada_Main, 0, 0);
    lv_obj_set_style_border_width(scada_Main, 0, 0);


    lv_obj_set_style_bg_opa(scada_Main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_outline_opa(scada_Main, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_opa(scada_Main, LV_OPA_TRANSP, 0);
    //lv_obj_set_style_bg_color(main, lv_color_make(100,100,0),0);
    lv_obj_set_style_x(scada_Main, 8, 0);
    lv_obj_set_style_y(scada_Main, 40, 0);
    lv_obj_set_style_width(scada_Main, 465, 0);
    lv_obj_set_style_height(scada_Main,200, 0);
    lv_obj_clear_flag(scada_Main, LV_OBJ_FLAG_SCROLLABLE);




//     Filtre filtre = filtre_Create(scada_Main, 0, 72);

//     Boru  boru1 = boru_Create(scada_Main, 20, 72, 35, DOWN_TO_UP, b10);
//     Dirsek10  dirsek10_2 = dirsek10_Create(scada_Main, 10, 16, 0);
//     Valf ev1 = valf_Create(scada_Main, 35, 0, LEFT_TO_RIGHT, v10);
//     TBoru tboru_1 = tBoru_Create(scada_Main, 63, 16, t10);
//     Boru boru2 = boru_Create(scada_Main, 84, 26, 16, LEFT_TO_RIGHT, b10);
//     TBoru tboru_2 = tBoru_Create(scada_Main, 100, 16, tDOSING);
//     Boru boru3 = boru_Create(scada_Main, 121, 26, 16, LEFT_TO_RIGHT, b10);
//     Kartus kartus = kartus_Create(scada_Main, 137, 14);

//     Boru boru4 = boru_Create(scada_Main, 175, 70, 30, LEFT_TO_RIGHT, b10);
//     PslPsh psl = pslpsh_Create(scada_Main, 178, 37);

//     HppMotor hpp = hppMotor_Create(scada_Main, 205, 17);

//     Boru boru5 = boru_Create(scada_Main, 229, 70, 31, LEFT_TO_RIGHT, b10);
//     PslPsh psh = pslpsh_Create(scada_Main, 232, 37);

//     Membrane membrane = membrane_Create(scada_Main, 260, 51);
//     Boru boru6 = boru_Create(scada_Main, 359, 59, 15, LEFT_TO_RIGHT, b6);
//     TBoru tboru_3 = tBoru_Create(scada_Main, 370, 53, tCIP);
//     Boru boru6_1 = boru_Create(scada_Main, 380, 59, 53, LEFT_TO_RIGHT, b6);

//     Dirsek6 dirsek6_1 = dirsek6_Create(scada_Main, 430, 53, 90);
//     Boru boru7 = boru_Create(scada_Main, 443, 100, 37, DOWN_TO_UP, b6);
//     TemizSuTanki temiz_su_tanki = temizSuTanki_Create(scada_Main, 416, 100);

//     Boru boru8 = boru_Create(scada_Main, 377, 68, 80, UP_TO_DOWN, b4);
//     Valf ev3 = valf_Create(scada_Main, 389, 80, DOWN_TO_UP, v4);
//     CipTank cipTank = cipTank_Create(scada_Main, 357, 130);

//     Boru ev4_boru = boru_Create(scada_Main, 359, 77, 45, LEFT_TO_RIGHT, b4);
//     Dirsek4 dirsek4_3 = dirsek4_Create(scada_Main, 402, 73, 90);
//     Valf ev4 = valf_Create(scada_Main, 420, 80, DOWN_TO_UP, v4);


//     Boru boru13 = boru_Create(scada_Main, 357, 183, 270, RIGHT_TO_LEFT, b10);
//     HppMotor cip_pump = hppMotor_Create(scada_Main, 205, 139);
//     Dirsek10 dirsek10_3 = dirsek10_Create(scada_Main, 68, 165, -90);


//     Boru boru12 = boru_Create(scada_Main, 69, 38, 131, UP_TO_DOWN, b10);
//     Valf ev2 = valf_Create(scada_Main, 80, 70, DOWN_TO_UP, v10);

//     Boru boru_dosing = boru_Create(scada_Main, 109, 38, 32, UP_TO_DOWN, b4);
//     DosingPump dosing_pump = dosingPump_Create(scada_Main, 102, 70, 0);
//     DosingTank dosing_tank = dosingTank_Create(scada_Main, 99, 95);

// cip_pump.on(&cip_pump);
  
   if(!SPIFFS.begin(true)){
  //   Serial.println("An Error has occurred while mounting SPIFFS");
     return;
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



   lv_obj_t* img1 = lv_img_create(lv_scr_act()); /*Create an image object*/
  
    lv_img_set_src(img1, "P:/temizsutanki2.png");
    lv_obj_align(img1, LV_ALIGN_OUT_RIGHT_TOP, 20, 0);     /*Align next to the source image*/
    lv_img_set_size_mode(img1, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(img1, 0, 0);
    lv_obj_set_style_border_width(img1, 0, 0);
    lv_obj_clear_flag(img1, LV_OBJ_FLAG_SCROLLABLE);
  



   lv_obj_t* img2 = lv_img_create(lv_scr_act()); /*Create an image object*/
  
    lv_img_set_src(img2, "P:/filtre_run.png");
    lv_obj_align(img2, LV_ALIGN_OUT_RIGHT_TOP, 20, 0);     /*Align next to the source image*/
    lv_img_set_size_mode(img2, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(img2, 0, 0);
    lv_obj_set_style_border_width(img2, 0, 0);
        lv_obj_set_x(img2,100);
    lv_obj_set_y(img2,50);
    lv_obj_clear_flag(img2, LV_OBJ_FLAG_SCROLLABLE);


       lv_obj_t* img3 = lv_img_create(lv_scr_act()); /*Create an image object*/
  
    lv_img_set_src(img3, "P:/filtre_stop.png");
    lv_obj_align(img3, LV_ALIGN_OUT_RIGHT_TOP, 20, 0);     /*Align next to the source image*/
    lv_img_set_size_mode(img3, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(img3, 0, 0);
    lv_obj_set_style_border_width(img3, 0, 0);
    lv_obj_set_x(img3,50);
    lv_obj_set_y(img3,50);
    lv_obj_clear_flag(img3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t* img4 = lv_img_create(lv_scr_act()); /*Create an image object*/
  
    lv_img_set_src(img4, "P:/hpp motor_run.png");
    lv_obj_align(img4, LV_ALIGN_OUT_RIGHT_TOP, 20, 0);     /*Align next to the source image*/
    lv_img_set_size_mode(img4, LV_IMG_SIZE_MODE_REAL);
    lv_obj_set_style_pad_all(img4, 0, 0);
    lv_obj_set_style_border_width(img4, 0, 0);
        lv_obj_set_x(img4,200);
    lv_obj_set_y(img4,50);
    lv_obj_clear_flag(img4, LV_OBJ_FLAG_SCROLLABLE);

  xTaskCreate(guiTask,
              "gui",
              4096 * 2,
              NULL,
              2,
              NULL);
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