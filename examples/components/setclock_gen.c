/**
 * @file setclock_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "setclock_gen.h"
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

lv_obj_t * setclock_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_style_pad_all(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * container_1 = container_create(lv_obj_1);
    lv_obj_set_flex_flow(container_1, LV_FLEX_FLOW_COLUMN);

    subtitle_create(container_1, "Hour");

    lv_obj_t * lv_roller_1 = lv_roller_create(container_1);
    lv_roller_set_options(lv_roller_1, "0&#xA;1&#xA;2&#xA;3&#xA;4", LV_ROLLER_MODE_NORMAL);
    
    lv_roller_bind_value(lv_roller_1, &subject_hours);

    lv_obj_t * container_2 = container_create(lv_obj_1);
    lv_obj_set_flex_flow(container_2, LV_FLEX_FLOW_COLUMN);

    subtitle_create(container_2, "Mins");

    lv_obj_t * lv_roller_2 = lv_roller_create(container_2);
    lv_roller_set_options(lv_roller_2, "0&#xA;1&#xA;2&#xA;3&#xA;4", LV_ROLLER_MODE_NORMAL);
    
    lv_roller_bind_value(lv_roller_2, &subject_mins);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/