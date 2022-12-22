
#include <Windows.h>

#include "resource.h"


#if _MSC_VER >= 1200
 // Disable compilation warnings.
#pragma warning(push)
// nonstandard extension used : bit field types other than int
#pragma warning(disable:4214)
// 'conversion' conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable:4244)
#endif

#include "lvgl/lvgl.h"
#include "lv_drivers/win32drv/win32drv.h"

#if _MSC_VER >= 1200
// Restore compilation warnings.
#pragma warning(pop)
#endif

#include <stdio.h>
#include "../../src/mylib/helper/helper.h"

int main()
{
    lv_init();

    if (!lv_win32_init(
        GetModuleHandleW(NULL),
        SW_SHOW,
        480,
        320,
        LoadIconW(GetModuleHandleW(NULL), MAKEINTRESOURCE(IDI_LVGL))))
    {
        return -1;
    }

    lv_win32_add_all_input_devices_to_group(NULL);
    lv_fs_win32_init();

    //lv_fs_file_t f;
    //lv_fs_res_t res;
    //res = lv_fs_open(&f, "C:/blue_flower_8.bin", LV_FS_MODE_RD);
    //if (res != LV_FS_RES_OK) printf("Deneme");
    //uint32_t read_num;
    //uint8_t buf[8];
    //res = lv_fs_read(&f, buf, 8, &read_num);
    //if (res != LV_FS_RES_OK || read_num != 8) printf("Deneme");

    //
    //lv_obj_t* img_bin = lv_img_create(lv_scr_act()); /*Create an image object*/

    //lv_img_set_src(img_bin, "C:/test/sebeke_tanki_img.bin");
    //lv_obj_align(img_bin, LV_ALIGN_OUT_RIGHT_TOP, 20, 0);     /*Align next to the source image*/
    //lv_img_set_size_mode(img_bin, LV_IMG_SIZE_MODE_REAL);
    //lv_obj_set_style_pad_all(img_bin, 0, 0);
    //lv_obj_set_style_border_width(img_bin, 0, 0);
    //lv_obj_clear_flag(img_bin, LV_OBJ_FLAG_SCROLLABLE);
    //lv_obj_set_drag(img_obj, true);
    ////lv_fs_close(&f);

    ui_init();


    while (!lv_win32_quit_signal)
    {
        lv_task_handler();
        Sleep(1);
    }

    return 0;
}





