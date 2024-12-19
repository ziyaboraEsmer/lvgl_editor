
#include "home_gen.h"
#include "ui.h"

lv_obj_t * home_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    
    static lv_style_t style_cont;
static lv_style_t style_left_cont;
static lv_style_t style_right_cont;

    static bool style_inited = false;

    if(!style_inited) {


        lv_style_init(&style_main);
            lv_style_set_bg_color(&style_main, lv_color_hex(0x111111));

    lv_style_set_radius(&style_main, 0);

    lv_style_set_border_width(&style_main, 0);

    lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);

    lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_ROW);

    lv_style_set_width(&style_main, lv_pct(100));

    lv_style_set_height(&style_main, lv_pct(100));

    lv_style_set_pad_all(&style_main, 0);

    lv_style_set_pad_column(&style_main, 0);


        lv_style_init(&style_cont);
            lv_style_set_height(&style_cont, lv_pct(100));

    lv_style_set_bg_color(&style_cont, lv_color_hex(0x333333));

    lv_style_set_flex_flow(&style_cont, LV_FLEX_FLOW_COLUMN);

    lv_style_set_layout(&style_cont, LV_LAYOUT_FLEX);

    lv_style_set_radius(&style_cont, 0);

    lv_style_set_pad_all(&style_cont, 0);

    lv_style_set_pad_row(&style_cont, 16);


        lv_style_init(&style_left_cont);
            lv_style_set_width(&style_left_cont, LV_SIZE_CONTENT);

    lv_style_set_border_width(&style_left_cont, 0);

    lv_style_set_pad_all(&style_left_cont, 16);


        lv_style_init(&style_right_cont);
            lv_style_set_layout(&style_right_cont, LV_LAYOUT_FLEX);

    lv_style_set_bg_opa(&style_right_cont, 0);

    lv_style_set_border_width(&style_right_cont, 0);

    lv_style_set_flex_flow(&style_right_cont, LV_FLEX_FLOW_COLUMN);

    lv_style_set_flex_track_place(&style_right_cont, LV_FLEX_ALIGN_CENTER);

    lv_style_set_flex_cross_place(&style_right_cont, LV_FLEX_ALIGN_CENTER);

    lv_style_set_pad_all(&style_right_cont, 16);


        style_inited = true;
    }

    lv_obj_t * obj = lv_obj_create(parent);
    

    lv_obj_add_style(obj, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_t * lv_obj = lv_obj_create(obj);
    lv_obj_add_style(lv_obj, &style_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_obj, &style_left_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_t * slider_box = slider_box_create(lv_obj);
    lv_obj_set_width(slider_box, 155);
    slider_box_set_title(slider_box, "Room 1");
    lv_obj_t * slider_box_2 = slider_box_create(lv_obj);
    lv_obj_set_width(slider_box_2, 155);
    slider_box_set_title(slider_box_2, "Room 2");
    lv_obj_t * slider_box_3 = slider_box_create(lv_obj);
    lv_obj_set_width(slider_box_3, 155);
    slider_box_set_title(slider_box_3, "Room 3");
    lv_obj_t * slider_box_4 = slider_box_create(lv_obj);
    lv_obj_set_width(slider_box_4, 155);
    slider_box_set_title(slider_box_4, "Room 4");
    lv_obj_t * slider_box_5 = slider_box_create(lv_obj);
    lv_obj_set_width(slider_box_5, 155);
    slider_box_set_title(slider_box_5, "Room 5");
    lv_obj_t * lv_obj_2 = lv_obj_create(obj);
    lv_obj_add_style(lv_obj_2, &style_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_obj_2, &style_right_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_grow(lv_obj_2, 1);
    lv_obj_t * button_default = button_default_create(lv_obj_2, "Ok");
    lv_obj_t * button_default_2 = button_default_create(lv_obj_2, "Cancel");
    lv_obj_t * dark_slider = dark_slider_create(lv_obj_2);
    lv_obj_set_width(dark_slider, lv_pct(100));
    dark_slider_set_color(dark_slider, lv_color_hex(0xf03c0f));
    lv_obj_update_flag(dark_slider, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS, true);
    lv_obj_t * button_warning = button_warning_create(lv_obj_2, "Alert 1");
    lv_obj_t * button_warning_2 = button_warning_create(lv_obj_2, "Alert 2");
    lv_obj_t * button_error = button_error_create(lv_obj_2, "Error 1");
    lv_obj_t * button_error_2 = button_error_create(lv_obj_2, "Error 2");


    LV_TRACE_OBJ_CREATE("finished");

    return obj;
}