/*
ESP8266 as Transmitter

++++++++++++++++++++
PIN CONFIGURATION
++++++++++++++++++++

1 -> 3V 
2 -> GND
3 -> D4
4 -> D8
5 -> D5
6 -> D7
7 -> D6

*/


#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>
#include <printf.h>

RF24 radio(2,15);   // declaring CE and CSN pins
const byte address[] = "00001"; 
void setup() {
  Serial.begin(9600);
  radio.begin();  // initializes the operations of the chip
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();    
  printf_begin();

  radio.printDetails();
}
                                                                          

void loop() {
  const char text[]="Hey";
  radio.write(&text,sizeof(text));
  delay(1000);
}
