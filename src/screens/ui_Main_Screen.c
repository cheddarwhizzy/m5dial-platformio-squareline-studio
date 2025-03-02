// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Main_Screen_screen_init(void)
{
ui_Main_Screen = lv_obj_create(NULL);
lv_obj_remove_flag( ui_Main_Screen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Roller2 = lv_roller_create(ui_Main_Screen);
lv_roller_set_options( ui_Roller2, "All\nCeiling Right\nCeiling Left\nRecessed Lights\nTV", LV_ROLLER_MODE_INFINITE );
lv_obj_set_height( ui_Roller2, 247);
lv_obj_set_width( ui_Roller2, LV_SIZE_CONTENT);  /// 2
lv_obj_set_align( ui_Roller2, LV_ALIGN_CENTER );
lv_obj_set_style_text_color(ui_Roller2, lv_color_hex(0xF8C390), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Roller2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Roller2, &ui_font_Title, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0xF78111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_clip_corner(ui_Roller2, false, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Roller2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_min_width(ui_Roller2, 500, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_max_width(ui_Roller2, 8192, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_min_height(ui_Roller2, 500, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_max_height(ui_Roller2, 8192, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_text_color(ui_Roller2, lv_color_hex(0xF78111), LV_PART_SELECTED | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Roller2, 255, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Roller2, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Roller2, LV_TEXT_DECOR_NONE, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Roller2, &ui_font_Roller, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0xFFFFFF), LV_PART_SELECTED | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_Roller2, lv_color_hex(0xFFFFFF), LV_PART_SELECTED | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_Roller2, 255, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_Roller2, 10, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_Roller2, 1, LV_PART_SELECTED| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Roller2, ui_event_Roller2, LV_EVENT_ALL, NULL);

}
