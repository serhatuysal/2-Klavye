
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"

#endif // TESTING

#ifndef TEMIZSUTANKI_H
#define TEMIZSUTANKI_H



#ifdef __cplusplus
extern "C" {
#endif
    typedef struct TemizSuTanki TemizSuTanki;
    struct TemizSuTanki
    {

        lv_obj_t* tank;
        int16_t wavePercent;
        lv_obj_t* wave1;
        lv_obj_t* wave2;
        void (*setBarPercent)(TemizSuTanki* self, uint16_t percent);
        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    TemizSuTanki temizSuTanki_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);
    void Wave1_Animation(lv_obj_t* TargetObject, int delay);
    void Wave2_Animation(lv_obj_t* TargetObject, int delay);



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





