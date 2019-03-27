/*
Duy Anh Pham
*/
/*
Dev platform: platform.io - VSCode
*/
//////Board/////
////////////////
/////NODEMCU////
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
#include<SoftwareSerial.h> //Included SoftwareSerial Library

SoftwareSerial arduino(13,15);
int dataSend;
int dataRecieve;

void setup() {
  arduino.begin(9600);
  Serial.begin(9600); 
}

void loop() {
  //data size by Serial.write() is max. 4bytes
  Serial.println();
  dataSend = 0xFF;
  arduino.write(dataSend);
  Serial.print("Sending to arduino: ");
  Serial.println(dataSend);
  Serial.print("Receiving from arduino:");
  dataRecieve = arduino.read();
  Serial.println(dataRecieve);
  delay(5000);
}