
#include <stdio.h>

#ifdef TESTING
#include "../position/position.h"
#else
#include "mylib/position/position.h"
#endif // TESTING

#ifndef DIRSEK4_H
#define DIRSEK4_H



#ifdef __cplusplus
extern "C" {
#endif
typedef struct Dirsek4 Dirsek4;
struct Dirsek4
{

    lv_obj_t* dirsek;

    /*void (*on)(Motor* motor);
    void (*off)(Motor* motor);
    void (*error)(Motor* motor);*/
};


Dirsek4 dirsek4_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int16_t angle);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





