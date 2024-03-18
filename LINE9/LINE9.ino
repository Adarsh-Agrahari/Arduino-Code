//float t;
//int d;
void setup() {
  // put your setup code here, to run once:
//pinMode(12,OUTPUT); //trig
//pinMode(11,INPUT); //echo
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(8,INPUT);
//Serial.begin(9600);
}

void loop() {
  //-----------------------------
//digitalWrite(12,LOW);
//delayMicroseconds(12);
//digitalWrite(12,HIGH);
//delayMicroseconds(12);
//digitalWrite(12,LOW);
//t = pulseIn(11,HIGH);
//d = (t*.0343)/2;
//Serial.println(d);
//if (d <= 20)
//{
//digitalWrite(3,HIGH);
////digitalWrite(2,LOW);

//}
//else
//{
//digitalWrite(3,LOW);
////digitalWrite(2,LOW);

//}

  //-----------------------------
  // put your main code here, to run repeatedly:

if(digitalRead(10)==LOW && digitalRead(9)==LOW && digitalRead(8)==LOW) //frwd
{ //done
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
//delay(700);
}
if(digitalRead(10)==LOW && digitalRead(9)==LOW && digitalRead(8)==HIGH) //left turn
{ 
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
//delay(700);
}
if(digitalRead(10)==LOW && digitalRead(9)==HIGH && digitalRead(8)==LOW) //left turn
{ 
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
//delay(700);
}
if(digitalRead(10)==LOW && digitalRead(9)==HIGH && digitalRead(8)==HIGH) //left turn
{ 
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
//delay(700);
}
//**************************
if(digitalRead(10)==HIGH && digitalRead(9)==LOW && digitalRead(8)==LOW) //left turn
{ 
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
//delay(700);
}
if(digitalRead(10)==HIGH && digitalRead(9)==LOW && digitalRead(8)==HIGH) //left turn
{ //done
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
//delay(700);
}
if(digitalRead(10)==HIGH && digitalRead(9)==HIGH && digitalRead(8)==LOW) //left turn
{ 
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
//delay(700);
}
if(digitalRead(10)==HIGH && digitalRead(9)==HIGH && digitalRead(8)==HIGH) //left turn
{ 
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
//delay(700);
}
}
