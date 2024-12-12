/*
 * SPDX-FileCopyrightText: 2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 9.1.0
// Project name: rgb8888

#include "../ui.h"

void ui_ScreenRGB8888_screen_init(void)
{
    ui_ScreenRGB8888 = lv_obj_create(NULL);
    lv_obj_remove_flag(ui_ScreenRGB8888, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenRGB8888, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenRGB8888, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageRGB8888 = lv_image_create(ui_ScreenRGB8888);
    lv_image_set_src(ui_ImageRGB8888, &ui_img_espressif_qrcode_png_small);
    lv_obj_set_width(ui_ImageRGB8888, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageRGB8888, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImageRGB8888, lv_pct(-2));
    lv_obj_set_y(ui_ImageRGB8888, lv_pct(19));
    lv_obj_set_align(ui_ImageRGB8888, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageRGB8888, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_ImageRGB8888, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_image_set_scale(ui_ImageRGB8888, 400);

    ui_LabelRGB8888 = lv_label_create(ui_ScreenRGB8888);
    lv_obj_set_width(ui_LabelRGB8888, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelRGB8888, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelRGB8888, 2);
    lv_obj_set_y(ui_LabelRGB8888, -138);
    lv_obj_set_align(ui_LabelRGB8888, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelRGB8888,
                      "        This is a scenario where \nLVGL ARGB8888 is overlaid with \n         user data streams.");
    lv_obj_set_style_text_font(ui_LabelRGB8888, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

}
