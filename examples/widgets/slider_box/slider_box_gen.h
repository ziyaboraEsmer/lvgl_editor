/**
 * @file slider_box_gen.h
 *
 */

#ifndef SLIDER_BOX_GEN_H
#define SLIDER_BOX_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a slider_box object
 * @param parent pointer to an object, it will be the parent of the new slider_box
 * @return pointer to the created slider_box
 */
lv_obj_t * slider_box_create(lv_obj_t * parent);


/**
 * Set the title
 * @param obj   pointer to a slider_box
 * @param title  title
 */
void slider_box_set_title(lv_obj_t * obj, const char * title);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SLIDER_BOX_GEN_H*/