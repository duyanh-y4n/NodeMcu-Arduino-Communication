#include <Arduino.h>
#include <SoftwareSerial.h>

////////////////
/////Arduino////
////////////////
SoftwareSerial NodeMcu(2,3);
int dataReceived; //Initialized variable to store recieved data
int dataSend;
void setup() {
  //Serial Begin at 9600 Baud 
  Serial.begin(9600);
  NodeMcu.begin(9600);

}

void loop() {
  //Read the serial data and store it
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
}