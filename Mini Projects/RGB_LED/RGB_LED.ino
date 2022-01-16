#define redLed 4
#define greenLed 5
#define blueLed 6

void setup() {
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(blueLed,OUTPUT);

}

void setColor(int red,int green,int blue){
  analogWrite(redLed,red);
  analogWrite(greenLed,green);
  analogWrite(blueLed,blue);
}
void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(redLed,HIGH);
  // delay(1000);
  // digitalWrite(greenLed,LOW);
  // delay(1000);
  // digitalWrite(blueLed,LOW);
  // delay(1000);
  // digitalWrite(redLed,LOW);
  // delay(1000);
  // digitalWrite(greenLed,HIGH);
  // delay(1000);
  // digitalWrite(blueLed,LOW);
  // delay(1000);
  //  digitalWrite(redLed,LOW);
  // delay(1000);
  // digitalWrite(greenLed,LOW);
  // delay(1000);
  // digitalWrite(blueLed,HIGH);
  // delay(1000);
setColor(255,0,0);
}
