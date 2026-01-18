/**
 * @file main.cpp
 *
 */

/*********************
 *      INCLUDES
 *********************/

#ifndef _DEFAULT_SOURCE
  #define _DEFAULT_SOURCE /* needed for usleep() */
#endif
#include <stdlib.h>
#include <stdio.h>
#ifdef _MSC_VER
  #include <Windows.h>
#else
  #include <unistd.h>
  #include <pthread.h>
#endif
#include "lvgl/lvgl.h"
#include "lvgl/examples/lv_examples.h"
#include "lvgl/demos/lv_demos.h"
#include <SDL.h>

#include "hal/hal.h"
#include "lvglpp/examples/examples.h"

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

# LV_USE_OS == LV_OS_NONE

int main(int argc, char **argv)
{
  (void)argc; /*Unused*/
  (void)argv; /*Unused*/

  /*Initialize LVGL*/
  lv_init();

  /*Initialize the HAL (display, input devices, tick) for LVGL*/
  sdl_hal_init(320, 480);

  /* Run the default demo */
  /* To try a different demo or example, replace this with one of: */
  /* - lv_demo_stress(); */
  /* or the ones below */
  lv_demo_widgets();

  /* C++ implementations */
//  lvgl::examples::switch_1();
//  lvgl::examples::calendar_1();
//  lvgl::examples::btnmatrix_2();
//  lvgl::examples::checkbox_1();
//  lvgl::examples::chart_2();  
//  lvgl::examples::chart_6();  
//  lvgl::examples::table_2();
//  lvgl::examples::scroll_2();
//  lvgl::examples::textarea_1();
//  lvgl::examples::msgbox_1();
//  lvgl::examples::dropdown_2();
//  lvgl::examples::button_1();
//  lvgl::examples::scroll_1();
//  lvgl::examples::tabview_1();
//  lvgl::examples::flex_3();
//  lvgl::examples::label_1();
//  lvgl::examples::label_4();
//  lvgl::examples::canvas_1();
 
  /* C implementations */
//  lv_example_switch_1();
//  lv_example_calendar_1();
//  lv_example_buttonmatrix_2();
//  lv_example_checkbox_1();
//  lv_example_chart_2();
//  lv_example_chart_6();
//  lv_example_table_2();
//  lv_example_scroll_2();
//  lv_example_textarea_1();
//  lv_example_msgbox_1();
//  lv_example_dropdown_2();
//  lv_example_button_1();
//  lv_example_scroll_1();
//  lv_example_tabview_1();
//  lv_example_flex_3();
//  lv_example_label_1();
//  lv_example_label_4();
//  lv_example_canvas_1();

  while(1) {
    /* Periodically call the lv_task handler.
     * It could be done in a timer interrupt or an OS task too.*/
    uint32_t sleep_time_ms = lv_timer_handler();
    if (sleep_time_ms == LV_NO_TIMER_READY) {
      sleep_time_ms = LV_DEF_REFR_PERIOD;
    }
#ifdef _MSC_VER
    Sleep(sleep_time_ms);
#else
    usleep(sleep_time_ms * 1000);
#endif

    return 0
  }

  return 0;
}

#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/
