/**
 * @file settings_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "settings_gen.h"
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

lv_obj_t * settings_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_content;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_pad_all(&style_main, 0);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_radius(&style_main, 0);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_COLUMN);
        lv_style_set_pad_row(&style_main, 0);
        lv_style_set_text_font(&style_main, font_subtitle);

        lv_style_init(&style_content);
        lv_style_set_bg_color(&style_content, lv_color_hex(0xeeeeee));
        lv_style_set_bg_opa(&style_content, 255);
        lv_style_set_pad_all(&style_content, 12);
        lv_style_set_width(&style_content, lv_pct(100));
        lv_style_set_flex_grow(&style_content, 1);
        lv_style_set_flex_flow(&style_content, LV_FLEX_FLOW_ROW_WRAP);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));

    header_create(lv_obj_1, "Settings");

    lv_obj_t * row_1 = row_create(lv_obj_1);
    lv_obj_add_style(row_1, &style_content, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * column_1 = column_create(row_1);

    checkbox_create(column_1, "Notifications", &subject_notification_on);

    checkbox_create(column_1, "Bluetooth", &subject_bluetooth_on);

    checkbox_create(column_1, "WiFi", &subject_wifi_on);

    setclock_create(row_1);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/