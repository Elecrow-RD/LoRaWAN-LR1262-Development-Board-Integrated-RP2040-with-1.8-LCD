#include "hardware/adc.h"
#include <U8x8lib.h>
#include <Wire.h>

int val;

U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);

void setup() {

  u8x8.begin();

  u8x8.setFont(u8x8_font_chroma48medium8_r);//Small Font 16 Characters
  
  u8x8.noInverse();//Normal
  u8x8.clear();
  u8x8.setCursor(5,2);
  u8x8.print("Lora DEV");
  u8x8.setCursor(1,4);
  u8x8.print("VALUE = ");

}
void loop() {
  int sensorValue = analogRead(A0);
  delay(500);
  u8x8.setCursor(9,4);// position, line# )
  u8x8.print("    ");// clear value 
  u8x8.setCursor(9,4);// position, line# )
  u8x8.print(sensorValue);// Write to lcd 
  delay(100);
//  u8x8.setCursor(15,4);
//  u8x8.print("C");
     
}
