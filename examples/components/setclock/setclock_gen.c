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

    static lv_style_t style_style_column;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_style_column);
        lv_style_set_flex_cross_place(&style_style_column, LV_FLEX_ALIGN_CENTER);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_style_pad_all(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * column_1 = column_create(lv_obj_1);
    lv_obj_add_style(column_1, &style_style_column, LV_PART_MAIN | LV_STATE_DEFAULT);

    subtitle_create(column_1, "Hour");

    lv_obj_t * lv_roller_1 = lv_roller_create(column_1);
    lv_roller_set_options(lv_roller_1, "0&#xA;1&#xA;2&#xA;3&#xA;4&#xA;5&#xA;6&#xA;7&#xA;8&#xA;9&#xA;10&#xA;11&#xA;12&#xA;13&#xA;14&#xA;15&#xA;16&#xA;17&#xA;18&#xA;19&#xA;20&#xA;21&#xA;22&#xA;23&#xA;24", LV_ROLLER_MODE_NORMAL);
    
    lv_roller_bind_value(lv_roller_1, &subject_hours);

    lv_obj_t * column_2 = column_create(lv_obj_1);
    lv_obj_add_style(column_2, &style_style_column, LV_PART_MAIN | LV_STATE_DEFAULT);

    subtitle_create(column_2, "Mins");

    lv_obj_t * lv_roller_2 = lv_roller_create(column_2);
    lv_roller_set_options(lv_roller_2, "0&#xA;1&#xA;2&#xA;3&#xA;4&#xA;5&#xA;6&#xA;7&#xA;8&#xA;9&#xA;10&#xA;11&#xA;12&#xA;13&#xA;14&#xA;15&#xA;16&#xA;17&#xA;18&#xA;19&#xA;20&#xA;21&#xA;22&#xA;23&#xA;24&#xA;25&#xA;26&#xA;27&#xA;28&#xA;29&#xA;30&#xA;31&#xA;32&#xA;33&#xA;34&#xA;35&#xA;36&#xA;37&#xA;38&#xA;39&#xA;40&#xA;41&#xA;42&#xA;43&#xA;44&#xA;45&#xA;46&#xA;47&#xA;48&#xA;49&#xA;50&#xA;51&#xA;52&#xA;53&#xA;54&#xA;55&#xA;56&#xA;57&#xA;58&#xA;59&#xA;60", LV_ROLLER_MODE_NORMAL);
    
    lv_roller_bind_value(lv_roller_2, &subject_mins);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/