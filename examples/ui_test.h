/**
 * @file ui_test.h
 *
 */

#ifndef UI_TEST_H
#define UI_TEST_H

#ifdef __cplusplus
extern "C" {
#endif

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
 * GLOBAL VARIABLES
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Call after lv_init() and your driver inits to test the example UI
 * directly from C.
 */
void ui_test_from_c(void);

/**
 * Call after lv_init() and your driver inits to test the example UI
 * directly from XML.
 */
void ui_test_from_xml(void);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_TEST_H*/
