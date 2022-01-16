const int SW_pin=2;
const int x_pin=0;
const int y_pin=1;

void setup() {
  pinMode(SW_pin,INPUT);
  digitalWrite(SW_pin,HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Switch: ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-Axis: ");
  Serial.print(analogRead(x_pin));
  Serial.print("\n");
    Serial.print("Y-Axis: ");
  Serial.print(analogRead(y_pin));
  Serial.print("\n");
  delay(500);
}
