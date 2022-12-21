// #include "motor.h"

// #include "lvgl.h"
// #include "helper/helper.h"





// void cizgiCiz(lv_obj_t* parent, lv_point_t* line_points)
// {
    
//     // lv_point_t line_points[] = { {x1,y1},{x2,y2} };

   
//     lv_obj_t* line1;
//     line1 = lv_line_create(parent);
//     lv_line_set_points(line1, line_points, 2);     /*Set the points*/
//     lv_obj_set_style_line_width(line1, 4, 0);
//     lv_obj_set_style_line_color(line1, lv_color_make(0, 0, 0), 0);
//     lv_obj_set_style_line_rounded(line1, false, 0);
//     lv_obj_align(line1, LV_ALIGN_TOP_LEFT, 0, 0);



// }
// void on(Motor* motor) {
//     _ui_state_modify(motor->kasa, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);

// }

// void off(Motor* motor) {
//     _ui_state_modify(motor->kasa, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
// }

// void error(Motor* motor) {
//     int i = 0;
//     _ui_state_modify(motor->kasa, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
// }
// Motor  motorOlustur(int width, int height, lv_coord_t  x, lv_coord_t y) {

//     Motor motor = mt1;




//     lv_obj_t* mainMotor = lv_obj_create(lv_scr_act());
//     lv_obj_set_style_radius(mainMotor, 0, 0);
//     lv_obj_set_style_pad_all(mainMotor, 0, 0);
//     lv_obj_set_style_pad_gap(mainMotor, 0, 0);
//     lv_obj_set_style_border_width(mainMotor, 0, 0);



//     lv_obj_set_style_bg_opa(mainMotor, LV_OPA_TRANSP, 0);
//     lv_obj_set_style_outline_opa(mainMotor, LV_OPA_TRANSP, 0);
//     lv_obj_set_style_border_opa(mainMotor, LV_OPA_TRANSP, 0);
//     //lv_obj_set_style_bg_color(motor, lv_color_make(100,0,0),0);
//     lv_obj_set_style_x(mainMotor, x, 0);
//     lv_obj_set_style_y(mainMotor, y, 0);
//     lv_obj_set_size(mainMotor, width, height);
//     lv_obj_clear_flag(mainMotor, LV_OBJ_FLAG_SCROLLABLE);




//     lv_obj_t* kasa = lv_obj_create(mainMotor);
//     lv_obj_set_style_width(kasa, width, 0);
//     lv_obj_set_style_height(kasa, height, 0);
//     lv_obj_set_style_radius(kasa, 10, 0);
//     lv_obj_set_style_pad_all(kasa, 0, 0);
//     lv_obj_set_style_bg_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
//     lv_obj_set_style_border_color(kasa, lv_color_hex(MOTOR_OFF_COLOR), 0);
//     lv_obj_set_style_border_width(kasa, 0, 0);
//     lv_obj_clear_flag(kasa, LV_OBJ_FLAG_SCROLLABLE);
//     lv_obj_add_flag(kasa, LV_OBJ_FLAG_CHECKABLE);
//     lv_obj_set_style_bg_color(kasa, lv_color_hex(MOTOR_ON_COLOR), LV_PART_MAIN | LV_STATE_CHECKED);
//     lv_point_t line_points1[] = { {0,15},{width,15} };
//     lv_point_t line_points2[] = { {0,40},{width,40} };
//     cizgiCiz(mainMotor, line_points1);
//     cizgiCiz(mainMotor, line_points2);

//     motor.kasa = kasa;
//     motor.off = off;
//     motor.on = on;
//     motor.error = error;
//     return motor;
// }




// Motor _Motor(int width, int height, lv_coord_t  x, lv_coord_t y) {
      
//     return motorOlustur(width, height, x, y);;
// }






