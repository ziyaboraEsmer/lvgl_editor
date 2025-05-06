/**
 * @file examples_gen.h
 */

#ifndef EXAMPLES_GEN_H
#define EXAMPLES_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl/lvgl.h"

/*Include all the widget and components of this library*/
#include "components/checkbox_gen.h"
#include "components/container_gen.h"
#include "components/content_area_gen.h"
#include "components/header_gen.h"
#include "components/icon_gen.h"
#include "components/setclock_gen.h"
#include "components/subtitle_gen.h"
#include "components/title_gen.h"
#include "screens/settings_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should these definitions be prefixed with the project name?


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/* callbacks */

/*Fonts*/
extern lv_font_t * font_title;
extern lv_font_t * font_subtitle;

/*Images*/
extern const void * img_wifi;
extern const void * img_bluetooth;
extern const void * img_bell;

extern lv_subject_t subject_hours;
extern lv_subject_t subject_mins;
extern lv_subject_t subject_bluetooth_on;
extern lv_subject_t subject_wifi_on;
extern lv_subject_t subject_notification_on;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */

void examples_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLES_GEN_H*/
