int d1;
int d2;
int d3;
int d4;
int d5;
int d6;
int d7;
int d8;

//const int ENA = 3;
const int IN1=2;
const int IN2=4;
//const int ENB = 11;
const int IN3=10;
const int IN4=12;
void setup() 
{
  pinMode(13,INPUT);
  pinMode(11,INPUT);
  pinMode(3,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);

  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  Serial.begin(9600);

  //forward();
  delay(2000);
}

void forward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  //analogWrite(ENA, 80);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
//  analogWrite(ENB, 80);
}

void right()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  //analogWrite(ENA, 0);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  //analogWrite(ENB, 60);
}

void left()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  //analogWrite(ENA, 60);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  //analogWrite(ENB, 0);
}

void motor_stop()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  //analogWrite(ENA, 0);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
 // analogWrite(ENB, 0);
}
void loop() 
{
  d1=digitalRead(11);
  d2=digitalRead(13);
  d3=digitalRead(3);
  d4=digitalRead(8);
  d5=digitalRead(7);
  d6=digitalRead(6);
  d7=digitalRead(5);
  d8=digitalRead(9);


  //black=1
  //white=0
  //forward

  

  
  if(
    ((d1==0)&&(d2==0)&&(d3==0)&&(d4==1)&&(d5==0)&&(d6==0)&&(d7==0)&&(d8==0))||
    ((d1==0)&&(d2==0)&&(d3==0)&&(d4==0)&&(d5==1)&&(d6==0)&&(d7==0)&&(d8==0))||
    ((d1==0)&&(d2==0)&&(d3==1)&&(d4==0)&&(d5==0)&&(d6==0)&&(d7==0)&&(d8==0))||
    ((d1==0)&&(d2==0)&&(d3==0)&&(d4==0)&&(d5==0)&&(d6==1)&&(d7==0)&&(d8==0))||
    ((d1==0)&&(d2==0)&&(d3==0)&&(d4==1)&&(d5==1)&&(d6==0)&&(d7==0)&&(d8==0))||
    ((d1==0)&&(d2==0)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==0)&&(d7==0)&&(d8==0))||
    ((d1==0)&&(d2==0)&&(d3==0)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==0)&&(d8==0))||
    ((d1==0)&&(d2==0)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==0)&&(d8==0))
  )
  {
    forward();
  }
  //right
  else if(
    ((d1==0)&&(d2==0)&&(d3==0)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==1)&&(d8==1))||
    ((d1==0)&&(d2==0)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==1)&&(d8==1))||
    ((d1==0)&&(d2==0)&&(d3==0)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==1)&&(d8==1))||
    ((d1==0)&&(d2==0)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==1)&&(d8==1))
  )
  {
    right();
  }
  else if(
    ((d1==1)&&(d2==1)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==0)&&(d7==0)&&(d8==0))||
    ((d1==1)&&(d2==1)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==0)&&(d7==0)&&(d8==0))||
    ((d1==1)&&(d2==1)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==0)&&(d8==0))||
    ((d1==1)&&(d2==1)&&(d3==1)&&(d4==1)&&(d5==1)&&(d6==1)&&(d7==0)&&(d8==0))
  )
  {
    left();
  }
  else motor_stop();
  
}
