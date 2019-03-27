<<<<<<< HEAD
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

=======
#include <Arduino.h>
#include<SoftwareSerial.h> //Included SoftwareSerial Library

////////////////
/////NodeMCU////
////////////////

//Started SoftwareSerial at RXD2(13) and TXD2(15) pin of ESP8266/NodeMCU
// SoftwareSerial arduino(3,1);
>>>>>>> 07b1eddcdc173f1222118e8069eccccb071a1b83
SoftwareSerial arduino(13,15);
int dataSend;
int dataRecieve;

void setup() {
<<<<<<< HEAD
=======
  //Serial S Begin at 9600 Baud
>>>>>>> 07b1eddcdc173f1222118e8069eccccb071a1b83
  arduino.begin(9600);
  Serial.begin(9600); 
}

void loop() {
  //data size by Serial.write() is max. 4bytes
<<<<<<< HEAD
  Serial.println();
=======
>>>>>>> 07b1eddcdc173f1222118e8069eccccb071a1b83
  dataSend = 0xFF;
  arduino.write(dataSend);
  Serial.print("Sending to arduino: ");
  Serial.println(dataSend);
  Serial.print("Receiving from arduino:");
  dataRecieve = arduino.read();
  Serial.println(dataRecieve);
<<<<<<< HEAD
  delay(5000);
=======
  delay(1000);
  // dataRecieve = Serial.read();
  // Serial.println(dataRecieve);
  // delay(1000);
>>>>>>> 07b1eddcdc173f1222118e8069eccccb071a1b83
}