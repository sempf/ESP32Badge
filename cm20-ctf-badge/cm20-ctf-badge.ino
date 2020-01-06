#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <Fonts/FreeSansBold24pt7b.h>  
#include "mypicture.h"

Adafruit_ILI9341 tft = Adafruit_ILI9341(15, 4, 23, 18, 2, 19);

const char* my_name  = "";  // TODO: put your name here

void setup() {
  tft.begin();
  tft.setRotation(3); 
  
  // Draw badge background
  tft.fillRect(0, 0, 320, 80, ILI9341_RED);
  tft.fillRect(0, 81, 320, 150, ILI9341_WHITE);
  tft.fillRect(0, 232, 320, 7, ILI9341_RED);

  tft.setFont(&FreeSansBold24pt7b);
  tft.setTextColor(ILI9341_WHITE);
  tft.setCursor(10, 46);
  tft.print("C M C T F 2 0");

  tft.drawRGBBitmap(110, 100, (uint16_t *)mypicture, 100, 100);
}

void loop() {

}
