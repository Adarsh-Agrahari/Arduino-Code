void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT);
  pinMode(11,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
  delay(100);
}
