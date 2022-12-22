
#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING

#ifndef DIRSEK6_H
#define DIRSEK6_H



#ifdef __cplusplus
extern "C" {
#endif
typedef struct Dirsek6 Dirsek6;
struct Dirsek6
{

    lv_obj_t* dirsek;

    /*void (*on)(Motor* motor);
    void (*off)(Motor* motor);
    void (*error)(Motor* motor);*/
};


Dirsek6 dirsek6_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y, int16_t angle);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





