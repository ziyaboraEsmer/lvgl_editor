/**
 * @file container_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "container_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * container_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_bg_opa(&style_main, 0);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_pad_all(&style_main, 0);
        lv_style_set_width(&style_main, LV_SIZE_CONTENT);
        lv_style_set_height(&style_main, LV_SIZE_CONTENT);
        lv_style_set_pad_row(&style_main, 0);
        lv_style_set_pad_column(&style_main, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/