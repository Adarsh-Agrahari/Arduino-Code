void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);//Trig
  pinMode(9,INPUT);//Echo
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float t,d;
  digitalWrite(10,LOW);
  delayMicroseconds(10);
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);
  t=pulseIn(9,HIGH);
  d=(t*0.0343)/2;
  Serial.println(d);
  
}
