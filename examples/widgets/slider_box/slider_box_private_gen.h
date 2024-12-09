/**
 * @file slider_box_private_gen.h
 *
 */

#ifndef SLIDER_BOX_PRIVATE_H
#define SLIDER_BOX_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"
#include "lvgl/src/core/lv_obj_private.h"
#include "slider_box.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    void * title;
    lv_obj_t * lv_label;
    lv_obj_t * lv_obj;
    lv_obj_t * lv_button;
    lv_obj_t * lv_label2;
    lv_obj_t * lv_button2;
    lv_obj_t * lv_label3;
    lv_obj_t * dark_slider;
} slider_box_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SLIDER_BOX_PRIVATE_H*/