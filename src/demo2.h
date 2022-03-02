/**
 * @file demo.h
 *
 */

#ifndef DEMO2_H
#define DEMO2_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_CONF_INCLUDE_SIMPLE
#include <lvgl.h>
#else
#include "../../../lvgl/lvgl.h"
#endif

/**
 * Create a demo application
 */
void demo2_create(void);
void lv_example_menu_3(void);

#endif // DEMO2_H

#ifdef __cplusplus
} /* extern "C" */
#endif
