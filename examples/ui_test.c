/**
 * @file ui_test.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui_test.h"

#if LV_USE_XML == 0
#error "Enable LV_USE_XML in lv_conf.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/
void dark_slider_register(void);
void slider_box_register(void);

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

void ui_test_from_c(void)
{
	ui_init("A:xml_examples/");

	/*Create the home component by calling a C function*/
	home_create(lv_screen_active());

}
void ui_test_from_xml(void)
{
	ui_init("A:xml_examples/");

	/*Register the fonts. Will be required for XML parsing.*/
	lv_xml_register_font("inter_sm", inter_sm);
	lv_xml_register_font("inter_md", inter_md);
	lv_xml_register_font("inter_xl", inter_xl);

	/*Register the components and widgets*/
	lv_xml_component_register_from_file("A:xml_examples/components/buttons/button_default.xml");
	lv_xml_component_register_from_file("A:xml_examples/components/buttons/button_warning.xml");
	lv_xml_component_register_from_file("A:xml_examples/components/buttons/button_error.xml");
	lv_xml_component_register_from_file("A:xml_examples/components/headings/h1.xml");
	lv_xml_component_register_from_file("A:xml_examples/components/headings/h2.xml");
	lv_xml_component_register_from_file("A:xml_examples/components/headings/h3.xml");
	lv_xml_component_register_from_file("A:xml_examples/components/home.xml");
	lv_xml_component_register_from_file("A:xml_examples/components/scratchpad.xml");

	dark_slider_register();
	slider_box_register();

	/*Create the home component directly from XML*/
	lv_xml_create(lv_screen_active(), "home", NULL);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
