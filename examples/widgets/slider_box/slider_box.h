/**
 * @file slider_box.h
 *
 */

#ifndef SLIDER_BOX_H
#define SLIDER_BOX_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"
#include "slider_box_gen.h"

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
 * Get the undefined
 * @param obj   pointer to a slider_box
 * @return      the title value
 */
const char * slider_box_get_title(lv_obj_t * obj);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SLIDER_BOX_H*/