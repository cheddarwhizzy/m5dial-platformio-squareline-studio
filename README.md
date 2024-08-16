# M5Dial Lights

This is a test to attempt getting a Squareline Studio exported UI hooked up to an M5Dial (ESP32).

## Steps taken
1. Created test UI. See [Squareline Studio Project File](./squareline-project/)
2. Exported UI to the [src](./src/) directory (components, fonts, lvgl, ui*.c, etc..)
3. Copied `lv_conf_template.h` to `./src/lv_conf.h` alongside the `lvgl` directory
4. Set `#if 1 /*Set it to "1" to enable content*/` from `0` to `1`

## Current Issues
1. Calling `ui_init();` from the `<ui.h>` Squareline include causes a blinking black screen with no graphics