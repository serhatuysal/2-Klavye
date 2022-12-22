
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef DIRSEK10_H
#define DIRSEK10_H



#ifdef __cplusplus
extern "C" {
#endif
typedef struct Dirsek10 Dirsek10;
struct Dirsek10
{

    lv_obj_t* dirsek;

    /*void (*on)(Motor* motor);
    void (*off)(Motor* motor);
    void (*error)(Motor* motor);*/
};


Dirsek10 dirsek10_Create(lv_obj_t* parent,lv_coord_t  x, lv_coord_t y, int16_t angle);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





