//#include <Arduino.h>
//#include <Wire.h>
//#include <PCA9557.h>
//#define PCA9557_I2C_SLAVE_ADDR  0x18
//#define SDA 20
//#define SCL 21
//#define PCA9557_DEBUG
//PCA9557 io(PCA9557_I2C_SLAVE_ADDR, &Wire);
//
//// Relay output pin
//#define RED1_PIN (2)
//#define YEL1_PIN (3)
//#define GRE1_PIN (4)
//#define RED2_PIN (5)
//#define YEL2_PIN (6)
//#define GRE2_PIN (7)
//
//
//void setup() {
//  Serial.begin(115200);
//  Wire.setSDA(SDA);
//  Wire.setSCL(SCL);
//  Wire.begin();
//  io.pinMode(0, OUTPUT);
//  io.pinMode(1, OUTPUT);
//  io.pinMode(RED1_PIN, OUTPUT);
//  io.pinMode(YEL1_PIN, OUTPUT);
//  io.pinMode(GRE1_PIN, OUTPUT);
//  io.pinMode(RED2_PIN, OUTPUT);
//  io.pinMode(YEL2_PIN, OUTPUT);
//  io.pinMode(GRE2_PIN, OUTPUT);
//}
//
//void loop() {
//  io.digitalWrite(0, HIGH);
//  io.digitalWrite(1, HIGH);
//  io.digitalWrite(RED1_PIN, HIGH);
//  io.digitalWrite(YEL1_PIN, HIGH);
//  io.digitalWrite(GRE1_PIN, HIGH);
//  io.digitalWrite(RED2_PIN, HIGH);
//  io.digitalWrite(YEL2_PIN, HIGH);
//  io.digitalWrite(GRE2_PIN, HIGH);
//  Serial.println("off");
//  delay(1000);
//  io.digitalWrite(0, LOW);
//  io.digitalWrite(1, LOW);
//  io.digitalWrite(RED1_PIN, LOW);
//  io.digitalWrite(YEL1_PIN, LOW);
//  io.digitalWrite(GRE1_PIN, LOW);
//  io.digitalWrite(RED2_PIN, LOW);
//  io.digitalWrite(YEL2_PIN, LOW);
//  io.digitalWrite(GRE2_PIN, LOW);
//  Serial.println("on");
//  delay(1000);
//
//}

#include <Arduino.h>
#include <Wire.h>
#include <PCA9557.h>

#define SDA 20
#define SCL 21

PCA9557 Out;
int LED = 25;
void setup() {
  Serial.begin(115200);
  Wire.setSDA(SDA);
  Wire.setSCL(SCL);
  Wire.begin();
  Out.reset();
  Out.setMode(IO_OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
//  Out.setState(IO2, IO_HIGH);
//  Out.setState(IO3, IO_HIGH);
//  Out.setState(IO4, IO_HIGH);
//  Out.setState(IO5, IO_HIGH);
//  Out.setState(IO6, IO_HIGH);
//  Out.setState(IO7, IO_HIGH);
//  Serial.println("off");
//  delay(1000);
  Out.setState(IO2, IO_LOW);
  Out.setState(IO3, IO_LOW);
  Out.setState(IO4, IO_LOW);
  Out.setState(IO5, IO_LOW);
  Out.setState(IO6, IO_LOW);
  Out.setState(IO7, IO_LOW);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("on");
  delay(1000);
  

}
