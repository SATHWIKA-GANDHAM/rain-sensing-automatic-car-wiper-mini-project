#include <Servo.h>
Servo myservo;
int pos=0;
const int senmin =0;
const int senmax=1024;
int led=13;
int sensory =A0;
int i;

void setup()
{
  pinMode(led,OUTPUT);
  myservo.attach(9);
}
void loop()
{
  int sensor=analogRead(sensory);
  int range =map(sensor,senmin,senmax,0,3);
  switch(range)
  {
    case 0:
    myservo.write(0);
    break;
    case 1:
    for(pos=0;pos<=180;pos+=1)
    {
      myservo.write(pos);
      delay(6);
      }
    digitalWrite(led,LOW);
  }
  delay(100);
  }
