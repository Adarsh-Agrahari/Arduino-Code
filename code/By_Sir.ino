void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(4)==LOW && digitalRead(5)==LOW) //forward
{ 
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
}
if(digitalRead(4)==LOW && digitalRead(5)==HIGH) 
{ 
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
}
if(digitalRead(4)==HIGH && digitalRead(5)==LOW) 
{ 
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
}
if(digitalRead(4)==HIGH && digitalRead(5)==HIGH) 
{ 
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
}

}
