void setup() {
  // put your setup code here, to run once:
  pinMode(11, INPUT);
  pinMode(12,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(11)==HIGH)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }

}
