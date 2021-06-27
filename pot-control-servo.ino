
#include <Servo.h> 

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;

int VAL1;
int VAL2;
int VAL3;
int VAL4;
int VAL5;
int VAL6;

int POT1 = A0;
int POT2 = A1;
int POT3 = A2;
int POT4 = A3;
int POT5 = A4;
int POT6 = A5;

void setup()
{
  Servo1.attach(9);
  Servo2.attach(8);
  Servo3.attach(7);
  Servo4.attach(6);
  Servo5.attach(5);
  Servo6.attach(4);
}

void loop() 
{ 
  VAL1 = analogRead(POT1);
  VAL1 = map(VAL1, 0, 1023, 0, 180);
  Servo1.write(VAL1);
  delay(5);
  VAL2 = analogRead(POT2);
  VAL2 = map(VAL2, 0, 1023, 0, 180);
  Servo2.write(VAL2);
  delay(5);
  VAL3 = analogRead(POT3);
  VAL3 = map(VAL3, 0, 1023, 0, 180);
  Servo3.write(VAL2);
  delay(5);
  VAL4 = analogRead(POT4);
  VAL4 = map(VAL4, 0, 1023, 0, 180);
  Servo4.write(VAL4);
  delay(5);
  VAL5 = analogRead(POT5);
  VAL5 = map(VAL5, 0, 1023, 0, 180);
  Servo5.write(VAL5);
  delay(5);
  VAL6 = analogRead(POT6);
  VAL6 = map(VAL6, 0, 1023, 0, 180);
  Servo6.write(VAL6);
  delay(5);
} 
