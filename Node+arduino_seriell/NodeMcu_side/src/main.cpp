#include <Arduino.h>
#include<SoftwareSerial.h> //Included SoftwareSerial Library

////////////////
/////NodeMCU////
////////////////

//Started SoftwareSerial at RXD2(13) and TXD2(15) pin of ESP8266/NodeMCU
// SoftwareSerial arduino(3,1);
SoftwareSerial arduino(13,15);
int dataSend;
int dataRecieve;

void setup() {
  //Serial S Begin at 9600 Baud
  arduino.begin(9600);
  Serial.begin(9600); 
}

void loop() {
  //data size by Serial.write() is max. 4bytes
  dataSend = 0xFF;
  arduino.write(dataSend);
  Serial.print("Sending to arduino: ");
  Serial.println(dataSend);
  Serial.print("Receiving from arduino:");
  dataRecieve = arduino.read();
  Serial.println(dataRecieve);
  delay(1000);
  // dataRecieve = Serial.read();
  // Serial.println(dataRecieve);
  // delay(1000);
}