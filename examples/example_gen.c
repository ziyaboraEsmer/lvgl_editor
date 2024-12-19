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

void example_init_gen(void)
{
	inter_sm = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 14);
	LV_LOG_USER("inter_sm: %d\n", inter_sm);
	inter_md = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 18);
	inter_xl = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 22);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
