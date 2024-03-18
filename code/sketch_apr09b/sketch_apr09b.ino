void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(6,255);
  delay(200);
  analogWrite(6,125);
  delay(200);
  analogWrite(6,75);
  delay(200);
  analogWrite(6,25);
  delay(200);
}
