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

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));

    header_create(lv_obj_1, "Settings");

    lv_obj_t * content_area_1 = content_area_create(lv_obj_1);
    lv_obj_set_style_bg_color(content_area_1, lv_color_hex(0xeeeeee), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_grow(content_area_1, 1);
    lv_obj_set_flex_flow(content_area_1, LV_FLEX_FLOW_ROW_WRAP);

    lv_obj_t * container_1 = container_create(content_area_1);
    lv_obj_set_flex_flow(container_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(container_1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * checkbox_1 = checkbox_create(container_1);
    lv_checkbox_set_text(checkbox_1, "Notifications");
    
    lv_obj_bind_checked(checkbox_1, &subject_notification_on);

    lv_obj_t * checkbox_2 = checkbox_create(container_1);
    lv_checkbox_set_text(checkbox_2, "Bluetooth");
    
    lv_obj_bind_checked(checkbox_2, &subject_bluetooth_on);

    lv_obj_t * checkbox_3 = checkbox_create(container_1);
    lv_checkbox_set_text(checkbox_3, "WiFi");
    
    lv_obj_bind_checked(checkbox_3, &subject_wifi_on);

    setclock_create(content_area_1);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/