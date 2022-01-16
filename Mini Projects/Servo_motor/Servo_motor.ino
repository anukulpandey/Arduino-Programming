#include <Servo.h>
Servo motor;
void setup() {
  // put your setup code here, to run once:
  motor.attach(9);
  motor.write(180);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int p=0;p<=180;p++){
    motor.write(p);
    delay(10);
  }
  for(int p=180;p>=0;p--){
    motor.write(p);
    delay(10);
  }
}
