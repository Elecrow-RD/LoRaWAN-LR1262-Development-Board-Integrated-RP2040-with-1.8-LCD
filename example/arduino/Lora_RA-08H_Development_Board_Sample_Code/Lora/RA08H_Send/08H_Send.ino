void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.setRX(5);
  Serial2.setTX(4);
  Serial2.begin(9600);
  Serial2.println("AT+CTXADDRSET=12");
  delay(1000);
  Serial2.println("AT+CADDRSET=13");
  delay(1000);
  Serial2.println("AT+CTXADDRSET=12");
  delay(1000);
  Serial2.println("AT+CADDRSET=13");
  delay(1000);
  Serial2.println("AT+CTXADDRSET=12");
  delay(1000);
  Serial2.println("AT+CADDRSET=13");
  delay(1000);
  Serial2.println("AT+CTX=868100000,5,0,1,21,1");
  delay(1000);
}

void loop() {
  Serial2.println("12345");
  delay(2000);
  //  if (Serial.available())
  //  {
  //    Serial2.write(Serial.read());
  //  }
  //
  //  if (Serial2.available())
  //  {
  //    Serial.write(Serial2.read());
  //  }
}
