/**
 * @file examples_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "examples_gen.h"

#if LV_USE_XML
#endif

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
 *  GLOBAL VARIABLES
 **********************/

/*Fonts*/
lv_font_t * font_title;
lv_font_t * font_subtitle;

/*Images*/
const void * img_wifi;
const void * img_bluetooth;
const void * img_bell;

/*Subjects*/

lv_subject_t subject_clock;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void examples_init_gen(const char * asset_path)
{
    char buf[256];

    static char subject_clock_buf[UI_SUBJECT_STRING_LENGTH];
    static char subject_clock_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&subject_clock,
                            subject_clock_buf,
                            subject_clock_prev_buf,
                            UI_SUBJECT_STRING_LENGTH,
                            "12:34"
                          );

    /* create tiny ttf font "font_title" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    font_title = lv_tiny_ttf_create_file(buf, 20);
    /* create tiny ttf font "font_subtitle" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    font_subtitle = lv_tiny_ttf_create_file(buf, 16);

    lv_snprintf(buf, 256, "%s%s", asset_path, "images/wifi-solid.png");
    img_wifi = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bluetooth-brands.png");
    img_bluetooth = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bell-solid.png");
    img_bell = lv_strdup(buf);

    #if LV_USE_XML

        lv_xml_register_font(NULL, "font_title", font_title);
        lv_xml_register_font(NULL, "font_subtitle", font_subtitle);

        lv_xml_register_image(NULL, "img_wifi", img_wifi);
        lv_xml_register_image(NULL, "img_bluetooth", img_bluetooth);
        lv_xml_register_image(NULL, "img_bell", img_bell);

        lv_xml_register_subject(NULL, "clock", &subject_clock);

    #endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/
