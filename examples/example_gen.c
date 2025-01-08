/**
 * @file example_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "example_gen.h"

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
lv_font_t * inter_sm;
lv_font_t * inter_md;
lv_font_t * inter_xl;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void example_init_gen(const char * asset_path)
{
    char buf[256];
lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_sm = lv_tiny_ttf_create_file(buf, 14);
lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_md = lv_tiny_ttf_create_file(buf, 18);
lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_xl = lv_tiny_ttf_create_file(buf, 22);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/