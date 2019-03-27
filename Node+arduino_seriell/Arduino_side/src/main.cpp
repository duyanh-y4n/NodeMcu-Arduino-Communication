<<<<<<< HEAD
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
=======
#include <Arduino.h>
#include <SoftwareSerial.h>

////////////////
/////Arduino////
////////////////
SoftwareSerial NodeMcu(2,3);
int dataReceived; //Initialized variable to store recieved data
>>>>>>> 07b1eddcdc173f1222118e8069eccccb071a1b83
int dataSend;
void setup() {
  //Serial Begin at 9600 Baud 
  Serial.begin(9600);
  NodeMcu.begin(9600);

}

void loop() {
  //Read the serial data and store it
<<<<<<< HEAD
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
=======
  dataReceived = NodeMcu.read();
  Serial.println("Listening to NodeMcu:");
  Serial.println(dataReceived);
  // Serial.println(dataReceived, HEX); //Serial.println(int data, int base); data size = 4bytes
  // Serial.println(dataReceived, BIN);
  
  //Sending back the data
  dataSend = 0x55;
  Serial.println("Sending to NodeMcu:");
  Serial.println(dataSend);
  NodeMcu.write(dataSend);
  delay(1000);
>>>>>>> 07b1eddcdc173f1222118e8069eccccb071a1b83
}