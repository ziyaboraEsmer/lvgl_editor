/**
 * @file ui.h
 *
 */

#ifndef UI_H
#define UI_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

/*Include all the UI libraryes*/
#include "lvgl/lvgl.h"
#include "example.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/
 extern lv_font_t * inter_sm;
 extern lv_font_t * inter_md;
 extern lv_font_t * inter_xl;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize all the custom component libraries (not calling `lv_init()`)
 */
void ui_init(void);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_H*/
