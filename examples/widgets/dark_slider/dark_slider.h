/**
 * @file dark_slider.h
 *
 */

#ifndef DARK_SLIDER_H
#define DARK_SLIDER_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"
#include "dark_slider_gen.h"

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
 * @param obj   pointer to a dark_slider
 * @return      the color value
 */
const char * dark_slider_get_color(lv_obj_t * obj);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*DARK_SLIDER_H*/