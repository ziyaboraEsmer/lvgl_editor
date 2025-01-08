/**
 * @file slider_box.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "slider_box_private_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
 static void increase_event_cb(lv_event_t * e);
 static void decerease_event_cb(lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void slider_box_set_title(lv_obj_t * obj, const char * title)
{
    slider_box_t * slider_box = (slider_box_t *)obj;
    lv_label_set_text(slider_box->lv_label_2, title);
}

void slider_box_constructor_hook(lv_obj_t * obj)
{
    slider_box_t * slider_box = (slider_box_t *)obj;

    lv_obj_add_event_cb(slider_box->lv_button_1, decerease_event_cb, LV_EVENT_CLICKED, slider_box->dark_slider_1);
    lv_obj_add_event_cb(slider_box->lv_button_1,decerease_event_cb, LV_EVENT_LONG_PRESSED_REPEAT, slider_box->dark_slider_1);

    lv_obj_add_event_cb(slider_box->lv_button_2, increase_event_cb, LV_EVENT_CLICKED, slider_box->dark_slider_1);
    lv_obj_add_event_cb(slider_box->lv_button_2, increase_event_cb, LV_EVENT_LONG_PRESSED_REPEAT, slider_box->dark_slider_1);

}

void slider_box_destructor_hook(lv_obj_t * obj)
{

}

void slider_box_event_hook(lv_event_t * e)
{

}

/**********************
 *   STATIC FUNCTIONS
 **********************/


 static void increase_event_cb(lv_event_t * e)
 {
    lv_obj_t * slider = lv_event_get_user_data(e);
   
    int32_t v = lv_slider_get_value(slider);
    lv_slider_set_value(slider, v + 1, LV_ANIM_ON);
 }

 static void decerease_event_cb(lv_event_t * e)
 {
    lv_obj_t * slider = lv_event_get_user_data(e);
  
    int32_t v = lv_slider_get_value(slider);
    lv_slider_set_value(slider, v - 1, LV_ANIM_ON);
 }