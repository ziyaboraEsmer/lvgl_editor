
#include "scratchpad_gen.h"
#include "ui.h"

lv_obj_t * scratchpad_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    
    

    static bool style_inited = false;

    if(!style_inited) {



        style_inited = true;
    }

    lv_obj_t * obj = lv_obj_create(parent);
    

    lv_obj_set_width(obj, lv_pct(100));
    lv_obj_set_height(obj, lv_pct(100));
    lv_obj_set_flex_flow(obj, LV_FLEX_FLOW_COLUMN);
    lv_obj_t * button_default = button_default_create(obj, "Button");
    lv_obj_set_width(button_default, 250);
    lv_obj_t * button_default_2 = button_default_create(obj, "Button");
    lv_obj_set_width(button_default_2, 250);
    lv_obj_t * button_default_3 = button_default_create(obj, "Button");
    lv_obj_set_width(button_default_3, 250);
    lv_obj_t * button_error = button_error_create(obj, "Button");
    lv_obj_set_width(button_error, 250);
    lv_obj_t * button_warning = button_warning_create(obj, "Button");
    lv_obj_set_width(button_warning, 250);
    lv_obj_t * button_default_4 = button_default_create(obj, "Button");
    lv_obj_set_width(button_default_4, 250);
    lv_obj_t * button_default_5 = button_default_create(obj, "Button");
    lv_obj_set_width(button_default_5, 250);
    lv_obj_t * button_default_6 = button_default_create(obj, "Button");
    lv_obj_set_width(button_default_6, 250);
    lv_obj_t * button_default_7 = button_default_create(obj, "Button");
    lv_obj_set_width(button_default_7, 250);


    LV_TRACE_OBJ_CREATE("finished");

    return obj;
}