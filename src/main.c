/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "app_hal.h"

#include "demo.h"
#include "demo2.h"

int main(void)
{
	lv_init();

	hal_setup();

	demo_create();
//	demo2_create();
//  lv_example_menu_3();
	
  hal_loop();
}
