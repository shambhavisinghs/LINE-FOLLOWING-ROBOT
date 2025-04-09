#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,7,4,3,6)
float distance;
volatile int count=0;
int leftInput1=A2;
int leftInput2=A3;
int rightInput1=A0;
int rightInput2=A2;
int leftMotor=9;
int leftValue1=0;
int rightValue1=0;
int leftValue2=0;
int rightValue2=0;
unsigned long lastmillis=0;
void setup()
{
  Serial.begiun(9600);
  lcd.begin(2,20);
  lcd.setCursor(0,0)
  lcd.print("distance(cm)");
  pinMode(leftMotor,OUTPUT);
  pinMode(rightMotor,OUTPUT);
  attachinterrupt(0,techno,RISING);
  }

void loop()
{
  leftValue1=digitalRead(leftInput1);
  rightValue1=digitalRead(rightInput1);
  leftValue1=digitalRead(leftInput2);
  rightValue1=digitalRead(rightInput2);
  if(millis()-lastmillis>=6000)
  {
    detachInterrupt(0)
    distance=distance+2*3,1416*3*count;
    lcd.print(distance);
    count=0; 
  }
}