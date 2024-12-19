
#include "h3_gen.h"
#include "ui.h"

lv_obj_t * h3_create(lv_obj_t * parent, const char * text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    
    

    static bool style_main_inited = false;

    if(!style_main_inited) {

    
        lv_style_init(&style_main);
            lv_style_set_text_font(&style_main, inter_sm);


        style_main_inited = true;
    }

    lv_obj_t * obj = lv_label_create(parent);
    
    lv_obj_add_style(obj, &style_main, LV_STATE_DEFAULT);
         lv_obj_add_style(obj, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(obj, "text");


    LV_TRACE_OBJ_CREATE("finished");

    return obj;
}