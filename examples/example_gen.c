/**
 * @file example_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

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
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void example_init_gen(void)
{
	inter_sm = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 14);
	inter_md = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 18);
	inter_xl = lv_tiny_ttf_create_file("A:/fonts/Inter-SemiBold.ttf", 22);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
