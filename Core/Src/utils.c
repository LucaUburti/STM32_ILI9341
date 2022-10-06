/*
 * utils.c
 *
 *  Created on: 16 set 2022
 *      Author: uburti
 */
#include "ili9341.h"
#include "ili9341_gfx.h"
#include "ili9341_font.h"
#include "testimg.h"

void demoTFT(ili9341_t *lcd) {

	ili9341_fill_screen(lcd, ILI9341_BLACK);
	for (int x = 0; x < lcd->screen_size.width; x++) {
		ili9341_draw_pixel(lcd, ILI9341_WHITE, x, 0);
		ili9341_draw_pixel(lcd, ILI9341_WHITE, x, (lcd->screen_size.height) - 1);
	}
	for (int y = 0; y < lcd->screen_size.height; y++) {
		ili9341_draw_pixel(lcd, ILI9341_WHITE, 0, y);
		ili9341_draw_pixel(lcd, ILI9341_WHITE, (lcd->screen_size.width) - 1, y);
	}

	ili9341_draw_line(lcd, ILI9341_WHITE, 0, 0, lcd->screen_size.width, lcd->screen_size.height);
	ili9341_draw_line(lcd, ILI9341_WHITE, lcd->screen_size.width, 0, 0, lcd->screen_size.height);

//	HAL_Delay(1000);

	ili9341_fill_screen(lcd, ILI9341_BLACK);
	for (int i = 0; i < lcd->screen_size.height; i += 4) {
		ili9341_draw_line(lcd, ILI9341_WHITE, 0, i, lcd->screen_size.width, i);
	}

	for (int i = 0; i < lcd->screen_size.width; i += 4) {
		ili9341_draw_line(lcd, ILI9341_WHITE, i, 0, i, lcd->screen_size.height);
	}
//	HAL_Delay(1000);

	ili9341_fill_screen(lcd, ILI9341_BLACK);
	ili9341_text_attr_t attr1 = { &ili9341_font_7x10, ILI9341_RED, ILI9341_BLACK, 0, 0 };
	ili9341_draw_string(lcd, attr1, "Font_7x10, red on black, lorem ipsum dolor sit amet");
	ili9341_text_attr_t attr2 = { &ili9341_font_11x18, ILI9341_GREEN, ILI9341_BLACK, 0, 10 * 2 };
	ili9341_draw_string(lcd, attr2, "Font_11x18, green, lorem ipsum");
	ili9341_text_attr_t attr3 = { &ili9341_font_16x26, ILI9341_BLUE, ILI9341_BLACK, 0, 10 * 2 + 18 * 2 };
	ili9341_draw_string(lcd, attr3, "FONT_16x26");
//	HAL_Delay(1000);

	ili9341_fill_screen(lcd, ILI9341_BLACK);
	ili9341_text_attr_t attr4 = { &ili9341_font_11x18, ILI9341_WHITE, ILI9341_BLACK, 0, 0 };
	ili9341_draw_string(lcd, attr4, "BLACK");
//	HAL_Delay(200);
	ili9341_fill_screen(lcd, ILI9341_BLUE);
	ili9341_text_attr_t attr5 = { &ili9341_font_11x18, ILI9341_BLACK, ILI9341_BLUE, 0, 0 };
	ili9341_draw_string(lcd, attr5, "BLUE");
//	HAL_Delay(200);
	ili9341_fill_screen(lcd, ILI9341_RED);
	ili9341_text_attr_t attr6 = { &ili9341_font_11x18, ILI9341_BLACK, ILI9341_RED, 0, 0 };
	ili9341_draw_string(lcd, attr6, "RED");
//	HAL_Delay(200);
	ili9341_fill_screen(lcd, ILI9341_GREEN);
	ili9341_text_attr_t attr7 = { &ili9341_font_11x18, ILI9341_BLACK, ILI9341_GREEN, 0, 0 };
	ili9341_draw_string(lcd, attr7, "GREEN");
//	HAL_Delay(200);
	ili9341_fill_screen(lcd, ILI9341_CYAN);
	ili9341_text_attr_t attr8 = { &ili9341_font_11x18, ILI9341_BLACK, ILI9341_CYAN, 0, 0 };
	ili9341_draw_string(lcd, attr8, "CYAN");
//	HAL_Delay(200);
	ili9341_fill_screen(lcd, ILI9341_MAGENTA);
	ili9341_text_attr_t attr9 = { &ili9341_font_11x18, ILI9341_BLACK, ILI9341_MAGENTA, 0, 0 };
	ili9341_draw_string(lcd, attr9, "MAGENTA");
//	HAL_Delay(200);
	ili9341_fill_screen(lcd, ILI9341_YELLOW);
	ili9341_text_attr_t attr10 = { &ili9341_font_11x18, ILI9341_BLACK, ILI9341_YELLOW, 0, 0 };
	ili9341_draw_string(lcd, attr10, "YELLOW");
//	HAL_Delay(200);
	ili9341_fill_screen(lcd, ILI9341_WHITE);
	ili9341_text_attr_t attr11 = { &ili9341_font_11x18, ILI9341_BLACK, ILI9341_WHITE, 0, 0 };
	ili9341_draw_string(lcd, attr11, "WHITE");
//	HAL_Delay(200);

	ili9341_fill_screen(lcd, ILI9341_BLACK);
	for (int i = 0; i < lcd->screen_size.height / 2; i += 4) {
		ili9341_draw_circle(lcd, ILI9341_YELLOW, lcd->screen_size.width / 2, lcd->screen_size.height / 2, i);
	}
//	HAL_Delay(1000);

	ili9341_fill_screen(lcd, ILI9341_BLACK);
	for (int i = 0; i < lcd->screen_size.height; i++) {
		ili9341_draw_line(lcd, ILI9341_RED, i / 2.7, i, (lcd->screen_size.width) - i / 2.7, i);
	}
//	HAL_Delay(2000);
	ili9341_fill_screen(lcd, ILI9341_BLACK);

	//ili9341_draw_bmp(lcd, (lcd->screen_size.width)/2-128/2, (lcd->screen_size.height)/2-128/2, 128, 128, test_img_128x128);
	ili9341_draw_bmp(lcd, 0, 0, 128, 128, test_img_128x128);

	//HAL_Delay(2000);
}

