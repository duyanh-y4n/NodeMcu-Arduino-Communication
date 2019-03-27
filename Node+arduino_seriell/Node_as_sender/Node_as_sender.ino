#include<SoftwareSerial.h> //Included SoftwareSerial Library
//Started SoftwareSerial at RX and TX pin of ESP8266/NodeMCU
SoftwareSerial arduino(3,1);
int data;

void setup() {
  //Serial S Begin at 9600 Baud
  arduino.begin(9600);
}

void loop() {
  //Write '123' to Serial
  data = 123;
  arduino.write(data);
  delay(1000);
}
