# STM32 ILI9341
modified drivers for the ILI9341 tft screen, originally from https://github.com/ardnew/ILI9341-STM32-HAL

Main changes:

compatible with the STM32F103 bluepill mcu, 
added a ili9341_draw_bmp function to display RGB565 images format using DMA, 
included a sample RGB565 128x128 image (generated from http://www.rinkydinkelectronics.com/t_imageconverter565.php), 
disabled touch screen support since I don't need it


main loop runs a sample graphic demo routine
