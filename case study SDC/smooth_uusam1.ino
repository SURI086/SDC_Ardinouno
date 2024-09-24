// C++ code
//
void setup()
{
 pinMode(11,OUTPUT);
  pinMode(10,INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  
}

void loop()
{
  digitalWrite(11,LOW);
  delayMicroseconds(2);
  digitalWrite(11,HIGH);
  delayMicroseconds(10);
  digitalWrite(11,LOW);
  long duration=pulseIn(10,HIGH);
  int distence=0.034*duration/2;
    if (distence<300)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
  }
  else
  {
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
  }
  
  
}