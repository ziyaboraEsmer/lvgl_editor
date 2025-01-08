/**
 * @file button_default_gen.c
 *
 * @description Template source file for LVGL objects
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "button_default_gen.h"
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

lv_obj_t * button_default_create(lv_obj_t * parent, const char * button_label)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_pr;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x222222));
        lv_style_set_pad_hor(&style_main, 24);
        lv_style_set_pad_ver(&style_main, 12);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_radius(&style_main, 12);
        lv_style_set_shadow_width(&style_main, 0);

        lv_style_init(&style_pr);
        lv_style_set_bg_color(&style_pr, lv_color_hex(0x333333));
        lv_style_set_shadow_width(&style_pr, 20);
        lv_style_set_shadow_color(&style_pr, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&style_pr, 40);

        style_inited = true;
    }

    lv_obj_t * lv_obj = lv_button_create(parent);

    lv_obj_add_style(lv_obj, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_obj, &style_pr, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_t * h3_1 = h3_create(lv_obj, button_label);
    lv_obj_set_align(h3_1, LV_ALIGN_CENTER);



    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj;
}
/**********************
 *   STATIC FUNCTIONS
 **********************/
