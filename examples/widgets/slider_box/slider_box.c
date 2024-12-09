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

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void slider_box_constructor_hook(lv_obj_t * obj)
{

}

void slider_box_destructor_hook(lv_obj_t * obj)
{

}

void slider_box_event_hook(lv_event_t * e)
{

}


void slider_box_set_title(lv_obj_t * obj, const char * title)
{
    slider_box_t * item = (slider_box_t *)obj;
    item->title = title;
    lv_label_set_text(item->lv_label, title);
}

const char * slider_box_get_title(lv_obj_t * obj)
{
    slider_box_t * item = (slider_box_t *)obj;
    return lv_label_get_text(item->lv_label);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/