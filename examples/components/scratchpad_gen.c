/**
 * @file scratchpad_gen.c
 *
 * @description Template source file for LVGL objects
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "scratchpad_gen.h"
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

lv_obj_t * scratchpad_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    

    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }

    lv_obj_t * lv_obj = lv_obj_create(parent);

    lv_obj_set_width(lv_obj, lv_pct(100));
    lv_obj_set_height(lv_obj, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * button_default_1 = button_default_create(lv_obj, "Button");
    lv_obj_set_width(button_default_1, 250);

    lv_obj_t * button_default_2 = button_default_create(lv_obj, "Button");
    lv_obj_set_width(button_default_2, 250);

    lv_obj_t * button_default_3 = button_default_create(lv_obj, "Button");
    lv_obj_set_width(button_default_3, 250);

    lv_obj_t * button_error_1 = button_error_create(lv_obj, "Button");
    lv_obj_set_width(button_error_1, 250);

    lv_obj_t * button_warning_1 = button_warning_create(lv_obj, "Button");
    lv_obj_set_width(button_warning_1, 250);

    lv_obj_t * button_default_4 = button_default_create(lv_obj, "Button");
    lv_obj_set_width(button_default_4, 250);

    lv_obj_t * button_default_5 = button_default_create(lv_obj, "Button");
    lv_obj_set_width(button_default_5, 250);

    lv_obj_t * button_default_6 = button_default_create(lv_obj, "Button");
    lv_obj_set_width(button_default_6, 250);

    lv_obj_t * button_default_7 = button_default_create(lv_obj, "Button");
    lv_obj_set_width(button_default_7, 250);



    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj;
}
/**********************
 *   STATIC FUNCTIONS
 **********************/
