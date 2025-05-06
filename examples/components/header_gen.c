/**
 * @file header_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "header_gen.h"
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

lv_obj_t * header_create(lv_obj_t * parent, const char * title)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x2d2d2d));
        lv_style_set_border_width(&style_main, 2);
        lv_style_set_border_side(&style_main, LV_BORDER_SIDE_BOTTOM);
        lv_style_set_border_color(&style_main, lv_color_hex(0xa2a2a2));
        lv_style_set_radius(&style_main, 0);
        lv_style_set_width(&style_main, lv_pct(100));
        lv_style_set_height(&style_main, 32);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_track_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_ROW);
        lv_style_set_text_color(&style_main, lv_color_hex(0xffffff));

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);

    subtitle_create(lv_obj_2, "Subtitle");
    
    lv_label_bind_text(subtitle_1, &subject_hours, "%d");

    lv_obj_t * subtitle_2 = subtitle_create(lv_obj_1, title);
    lv_label_set_text(subtitle_2, title);
    lv_obj_set_flex_grow(subtitle_2, 1);

    lv_obj_t * icon_1 = icon_create(lv_obj_1);
    lv_image_set_src(icon_1, img_bell);
    lv_obj_set_bind_state_if_eq(icon_1, &subject_notification_on, LV_STATE_DISABLED, 0);

    lv_obj_t * icon_2 = icon_create(lv_obj_1);
    lv_image_set_src(icon_2, img_bluetooth);
    lv_obj_set_bind_state_if_eq(icon_2, &subject_bluetooth_on, LV_STATE_DISABLED, 0);

    lv_obj_t * icon_3 = icon_create(lv_obj_1);
    lv_image_set_src(icon_3, img_wifi);
    lv_obj_set_bind_state_if_eq(icon_3, &subject_wifi_on, LV_STATE_DISABLED, 0);

    lv_obj_t * subtitle_3 = subtitle_create(lv_obj_1, "Subtitle");
    
    lv_label_bind_text(subtitle_3, &subject_clock, NULL);
    lv_obj_set_width(subtitle_3, 48);
    lv_obj_set_style_text_align(subtitle_3, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/