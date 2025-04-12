#include <Arduino.h>
#include <Wire.h>
#include <PCA9557.h>

#define SDA 20
#define SCL 21
PCA9557 Out;

int adc_key_val[4] = {100, 580, 730, 880};
int NUM_KEYS = 4;
int adc_key_in;
int key = -1;
int oldkey = -1;
void setup()
{
  Serial.begin(9600); // 9600 bps
  Wire.setSDA(SDA);
  Wire.setSCL(SCL);
  Wire.begin();
  Out.reset();
  Out.setMode(IO_OUTPUT);
}
void loop()
{
  adc_key_in = analogRead(A3);    // read the value from the sensor
  key = get_key(adc_key_in);  // convert into key press

  if (key != oldkey)   // if keypress is detected
  {
    delay(50);  // wait for debounce time
    adc_key_in = analogRead(A3);    // read the value from the sensor
    key = get_key(adc_key_in);    // convert into key press
    if (key != oldkey)
    {
      oldkey = key;
      if (key >= 0) {
        switch (key)
        {
          case 0:
            Serial.println("K1 OK");
            Out.toggleState(IO7);
            break;
          case 1:
            Serial.println("K2 OK");
            Out.toggleState(IO6);
            break;
          case 2:
            Serial.println("K3 OK");
            Out.toggleState(IO5);
            break;
          case 3:
            Serial.println("K4 OK");
            Out.toggleState(IO4);
            break;
        }
      }
    }
  }
  delay(100);
}

int get_key(unsigned int input)
{
  int k;
  for (k = 0; k < NUM_KEYS; k++)
  {
    if (input < adc_key_val[k])
    {
      return k;
    }
  }
  if (k >= NUM_KEYS)k = -1;  // No valid key pressed
  return k;
}

//int adc_key_in;
//
//void setup()
//{
//  Serial.begin(9600);
//}
//void loop() {
//  adc_key_in = analogRead(A3);
//  Serial.println(adc_key_in);
//}
