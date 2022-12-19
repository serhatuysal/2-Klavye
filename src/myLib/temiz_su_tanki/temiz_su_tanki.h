
#include <stdio.h>

#ifdef TESTING
#include "../position/position.h"
#else
#include "mylib/position/position.h"

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

        /*void (*on)(Motor* motor);
        void (*off)(Motor* motor);
        void (*error)(Motor* motor);*/
    };


    TemizSuTanki temizSuTanki_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);
    void dalgaolustur(lv_obj_t* parent);



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





