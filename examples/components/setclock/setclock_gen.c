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

#define HOURS_STRING "'0&#xA;1&#xA;2&#xA;3&#xA;4&#xA;5&#xA;6&#xA;7&#xA;8&#xA;9&#xA;10&#xA;11&#xA;12&#xA;13&#xA;14&#xA;15&#xA;16&#xA;17&#xA;18&#xA;19&#xA;20&#xA;21&#xA;22&#xA;23&#xA;24' normal"

#define MINS_STRING "'0&#xA;1&#xA;2&#xA;3&#xA;4&#xA;5&#xA;6&#xA;7&#xA;8&#xA;9&#xA;10&#xA;11&#xA;12&#xA;13&#xA;14&#xA;15&#xA;16&#xA;17&#xA;18&#xA;19&#xA;20&#xA;21&#xA;22&#xA;23&#xA;24&#xA;25&#xA;26&#xA;27&#xA;28&#xA;29&#xA;30&#xA;31&#xA;32&#xA;33&#xA;34&#xA;35&#xA;36&#xA;37&#xA;38&#xA;39&#xA;40&#xA;41&#xA;42&#xA;43&#xA;44&#xA;45&#xA;46&#xA;47&#xA;48&#xA;49&#xA;50&#xA;51&#xA;52&#xA;53&#xA;54&#xA;55&#xA;56&#xA;57&#xA;58&#xA;59&#xA;60' normal"

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


    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_0, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);

    lv_obj_t * column_0 = column_create(lv_obj_0);
    lv_obj_set_style_flex_cross_place(column_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * subtitle_0 = subtitle_create(column_0, "Hour");


    lv_obj_t * lv_roller_0 = lv_roller_create(column_0);
    lv_roller_set_options(lv_roller_0, HOURS_STRING, LV_ROLLER_MODE_NORMAL);    lv_roller_bind_value(lv_roller_0, &hours);



    lv_obj_t * column_1 = column_create(lv_obj_0);
    lv_obj_set_style_flex_cross_place(column_1, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * subtitle_1 = subtitle_create(column_1, "Mins");


    lv_obj_t * lv_roller_1 = lv_roller_create(column_1);
    lv_roller_set_options(lv_roller_1, MINS_STRING, LV_ROLLER_MODE_NORMAL);    lv_roller_bind_value(lv_roller_1, &mins);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "setclock_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/