/**
 * @file dark_slider_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "dark_slider_private_gen.h"
#include "lvgl/src/core/lv_obj_class_private.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

void dark_slider_constructor_hook(lv_obj_t * obj);
void dark_slider_destructor_hook(lv_obj_t * obj);
void dark_slider_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void dark_slider_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void dark_slider_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void dark_slider_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t dark_slider_class = {
    .base_class = &lv_slider_class,
    .constructor_cb = dark_slider_constructor,
    .destructor_cb = dark_slider_destructor,
    .event_cb = dark_slider_event,
    .instance_size = sizeof(dark_slider_t),
    .editable = 1,
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/


lv_obj_t * dark_slider_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&dark_slider_class, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


static void dark_slider_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    
    static lv_style_t style_light_knob;
    static lv_style_t style_blue_indicator;

    static bool style_main_inited = false;

    if(!style_main_inited) {
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x333333));
        lv_style_set_bg_opa(&style_main, 255);
        lv_style_set_border_width(&style_main, 2);
        lv_style_set_border_color(&style_main, lv_color_hex(0xaaaaaa));
        lv_style_set_radius(&style_main, 100);
        lv_style_set_width(&style_main, 120);
        lv_style_set_height(&style_main, 16);

        lv_style_init(&style_light_knob);
        lv_style_set_bg_color(&style_light_knob, lv_color_hex(0xeeeeee));
        lv_style_set_bg_opa(&style_light_knob, 255);
        lv_style_set_border_width(&style_light_knob, 2);
        lv_style_set_radius(&style_light_knob, 100);
        lv_style_set_border_color(&style_light_knob, lv_color_hex(0xaaaaaa));

        lv_style_init(&style_blue_indicator);
        lv_style_set_bg_color(&style_blue_indicator, lv_color_hex(0x0000ff));
        lv_style_set_bg_opa(&style_blue_indicator, 255);
        lv_style_set_radius(&style_blue_indicator, 100);

        style_main_inited = true;
    }

    lv_obj_add_style(obj, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, &style_light_knob, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, &style_blue_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_add_flag(obj, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    
    dark_slider_t * dark_slider = (dark_slider_t *)obj;
    

    dark_slider_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void dark_slider_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    dark_slider_destructor_hook(obj);
}

static void dark_slider_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&dark_slider_class, e);
    if(res != LV_RESULT_OK) return;

    dark_slider_event_hook(e);
}