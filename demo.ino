/**
 *  Demo code for the ST7528i LCD driver using the ST7528i lib. 
 *  LCD Display: NHD-C160100DiZ-FSW-FBW
 */
#include "st7528i.h"
#include "font5x7.h"
#include "font7x10.h"

// Arduino mega2560 I2C pins 
// 10k pull-ups on I2C pins 
#define RST 8

void setup() {
  ST7528i display(RST);
  display.Init();   
  display.PutStr(5, 30, "Hello World", fnt7x10);
  display.Flush();
}

void loop() {

}
