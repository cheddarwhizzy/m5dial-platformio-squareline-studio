// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Light_Control_Screen_screen_init(void)
{
ui_Light_Control_Screen = lv_obj_create(NULL);
lv_obj_remove_flag( ui_Light_Control_Screen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Brightness = lv_label_create(ui_Light_Control_Screen);
lv_obj_set_width( ui_Brightness, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Brightness, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Brightness, -1 );
lv_obj_set_y( ui_Brightness, -24 );
lv_obj_set_align( ui_Brightness, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_Brightness,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_Brightness, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_label_set_text(ui_Brightness,"Alien Chill");
lv_obj_set_style_text_align(ui_Brightness, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Brightness, &ui_font_Brightness, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Switch1 = lv_switch_create(ui_Light_Control_Screen);
lv_obj_set_width( ui_Switch1, 245);
lv_obj_set_height( ui_Switch1, 128);
lv_obj_set_x( ui_Switch1, -4 );
lv_obj_set_y( ui_Switch1, 136 );
lv_obj_set_align( ui_Switch1, LV_ALIGN_CENTER );

lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0xF5A419), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);

lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_KNOB| LV_STATE_CHECKED);

ui_Light_Title = lv_label_create(ui_Light_Control_Screen);
lv_obj_set_width( ui_Light_Title, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Light_Title, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Light_Title, 6 );
lv_obj_set_y( ui_Light_Title, -132 );
lv_obj_set_align( ui_Light_Title, LV_ALIGN_CENTER );
lv_label_set_text(ui_Light_Title,"Left Ceiling Light");
lv_obj_set_style_text_align(ui_Light_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Light_Title, &ui_font_Title, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Switch1, ui_event_Switch1, LV_EVENT_ALL, NULL);

}
