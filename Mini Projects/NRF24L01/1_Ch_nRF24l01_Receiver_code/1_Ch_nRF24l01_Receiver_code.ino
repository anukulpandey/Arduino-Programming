/*
Arduino as Receiver
+++++++++++++++++
PIN CONFIGURATION
+++++++++++++++++

1 -> 3.3V
2 -> GND
3 -> 7
4 -> 8
5 -> 13
6 -> 11
7 -> 12
*/

#include <RF24.h>
#include <RF24_config.h>
#include <nRF24L01.h>
#include <printf.h>

#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>

RF24 radio(7,8); // declaring CE and CSN pins
const byte address[] = "00001";

void setup() {
  Serial.begin(9600);
  radio.begin(); // initializes the operations of the chip
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  printf_begin();

  radio.printDetails();
}


void loop() {
  if(radio.available()){
    char text[32] = "emp";
    radio.read(&text,sizeof(text));
    Serial.print(text);
  }
}
