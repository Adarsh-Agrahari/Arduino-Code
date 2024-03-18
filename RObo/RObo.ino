void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,INPUT);
  pinMode(11,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3)==LOW && digitalRead(11)==LOW)
  {
    digitalWrite(5,LOW);  
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  if(digitalRead(3)==LOW && digitalRead(11)==HIGH)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  if(digitalRead(3)==HIGH && digitalRead(11)==LOW)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
  if(digitalRead(3)==HIGH && digitalRead(11)==HIGH)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
}
