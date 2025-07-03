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

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/
lv_obj_t * settings;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/
lv_font_t * font_title;
extern uint8_t Inter_SemiBold_ttf_data[];
extern size_t Inter_SemiBold_ttf_data_size;
lv_font_t * font_subtitle;

/*----------------
 * Images
 *----------------*/
const void * img_wifi;
const void * img_bluetooth;
const void * img_bell;

/*----------------
 * Subjects
 *----------------*/
lv_subject_t hours;
lv_subject_t mins;
lv_subject_t bluetooth_on;
lv_subject_t wifi_on;
lv_subject_t notification_on;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void examples_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/
    /* create tiny ttf font 'font_title' from C array */
    font_title = lv_tiny_ttf_create_data(Inter_SemiBold_ttf_data, Inter_SemiBold_ttf_data_size, 20);
    /* create tiny ttf font 'font_subtitle' from C array */
    font_subtitle = lv_tiny_ttf_create_data(Inter_SemiBold_ttf_data, Inter_SemiBold_ttf_data_size, 14);

    /*----------------
     * Images
     *----------------*/
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/wifi-solid.png");
    img_wifi = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bluetooth-brands.png");
    img_bluetooth = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bell-solid.png");
    img_bell = lv_strdup(buf);


    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&hours, 17);
    lv_subject_init_int(&mins, 45);
    lv_subject_init_int(&bluetooth_on, 0);
    lv_subject_init_int(&wifi_on, 0);
    lv_subject_init_int(&notification_on, 0);

    /*----------------
     * Translations
     *----------------*/


#if LV_USE_XML
    /*Register widgets*/

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)

    /* Register fonts */
    lv_xml_register_font(NULL, "font_title", font_title);
    lv_xml_register_font(NULL, "font_subtitle", font_subtitle);

    /* Register images */
    lv_xml_register_image(NULL, "img_wifi", img_wifi);
    lv_xml_register_image(NULL, "img_bluetooth", img_bluetooth);
    lv_xml_register_image(NULL, "img_bell", img_bell);

    /* Register subjects */
    lv_xml_register_subject(NULL, "hours", &hours);
    lv_xml_register_subject(NULL, "mins", &mins);
    lv_xml_register_subject(NULL, "bluetooth_on", &bluetooth_on);
    lv_xml_register_subject(NULL, "wifi_on", &wifi_on);
    lv_xml_register_subject(NULL, "notification_on", &notification_on);
#endif

    /*--------------------
    *  Permanent screens
    *-------------------*/
    settings = settings_create();
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/