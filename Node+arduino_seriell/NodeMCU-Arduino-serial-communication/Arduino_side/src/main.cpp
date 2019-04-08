/*
Duy Anh Pham
*/
/*
Dev platform: platform.io - VSCode
*/
//////Board/////
////////////////
/////Arduino////
////////////////
/*
  Sketch: Arduino and NodeMcu serial communication
  Wire plan: 
  |Arduino  |NodeMCU  |
  |2 (as RX)|13(as RX)|
  |3 (as TX)|15(as TX)|
  |GNC      |GND      |
*/

#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial NodeMcu(2,3);
//data package size: max. 4 bytes 
int dataReceived;
int dataSend;
void setup() {
  //Serial Begin at 9600 Baud 
  Serial.begin(9600);
  NodeMcu.begin(9600);

}

void loop() {
  //Read the serial data and store it
  Serial.println();
  dataReceived = NodeMcu.read();
  Serial.println("Listening to NodeMcu:");
  Serial.println(dataReceived);
  //Serial.println(dataReceived, HEX);
  //Serial.println(dataReceived, BIN);
  //Sending back the data
  dataSend = 0x55;// = 85
  Serial.println("Sending to NodeMcu:");
  Serial.println(dataSend);
  NodeMcu.write(dataSend);
  delay(5000);
}