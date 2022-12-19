
#include "position.h"


#ifdef TESTING
void _ui_flag_modify(lv_obj_t* target, int32_t flag, int value)
{
    if (value == _UI_MODIFY_FLAG_TOGGLE) {
        if (lv_obj_has_flag(target, flag)) lv_obj_clear_flag(target, flag);
        else lv_obj_add_flag(target, flag);
    }
    else if (value == _UI_MODIFY_FLAG_ADD) lv_obj_add_flag(target, flag);
    else lv_obj_clear_flag(target, flag);
}
void _ui_state_modify(lv_obj_t* target, int32_t state, int value)
{
    if (value == _UI_MODIFY_STATE_TOGGLE) {
        if (lv_obj_has_state(target, state)) lv_obj_clear_state(target, state);
        else lv_obj_add_state(target, state);
    }
    else if (value == _UI_MODIFY_STATE_ADD) lv_obj_add_state(target, state);
    else lv_obj_clear_state(target, state);
}

void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v)
{
    lv_obj_set_x((lv_obj_t*)a->user_data, v);
}


#endif // TESTING


