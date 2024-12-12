/**
 * @file ui.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui.h"

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
lv_font_t * inter_sm;
lv_font_t * inter_md;
lv_font_t * inter_xl;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_init(void)
{
	static bool inited = false;
	if(inited) return;
	inited = true;

	inter_sm = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 14);
	inter_md = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 18);
	inter_xl = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 22);
	   
	example_init();
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
