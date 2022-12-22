





#include <stdio.h>

#ifdef _DEBUG
#include "../helper/helper.h"
#else
#include "mylib/helper/helper.h"
#endif // TESTING


#ifndef PSL_PSH_H
#define PSL_PSH_H
#ifdef __cplusplus
extern "C" {
#endif

    typedef struct PslPsh PslPsh;
    struct PslPsh
    {

        lv_obj_t* run_img;
        lv_obj_t* error_img;

        void (*on)(PslPsh* pslpsh);
        void (*error)(PslPsh* pslpsh);
    };


    PslPsh pslpsh_Create(lv_obj_t* parent, lv_coord_t  x, lv_coord_t y);




#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */





