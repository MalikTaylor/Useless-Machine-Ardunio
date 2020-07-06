/*
  modified 29 June 2020
  by Malik Taylor
*/
#include <Servo.h>

Servo armServo;

int switchState = 0;
int pos = 60;
int moveSpeed = 1;

void setup() {
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
  armServo.attach(11);
  Serial.begin(9600);
 }

void loop() {
  switchState = digitalRead(2);
  if(switchState == HIGH)
  {
     armServo.write(180);
  }
  else
  {
    int randomNum = random(1,7);
    Serial.println(randomNum);
    randServoAction(randomNum); 
  }
}

void randServoAction(int randomNum){
  switch(randomNum){
    case 1://Normal Animation
      normalAction();
      break;
    case 2://Fast Aniation
      fastAction();
      break;
    case 3://Slow Animation
      slowAction();
      break;
    case 4:
      slowFastAction();
      break;
    case 5:
      tripleFastAction();
      break;
    case 6:
      hesitateAction();
      break;
  }
}
/**************Methods For Servo Actions**************/
void normalAction(){
  for(pos = 180; pos >= 0; pos -= moveSpeed){
      moveSpeed = 2;
      armServo.write(pos);
      delay(5);
   }
 } 
void fastAction(){
  for(pos = 180; pos >= 0; pos -= moveSpeed){
      moveSpeed = 3.8;
      armServo.write(pos);
      delay(6);
     }
  }
void slowAction(){
  for(pos = 180; pos >= 0; pos-= moveSpeed){
      moveSpeed = 1;
      armServo.write(pos);
      delay(10);
     }
  }
void hesitateAction(){
  for(pos = 180; pos >= 50; pos-= moveSpeed){//slowAction
      moveSpeed = 1;//Slow
      armServo.write(pos);
      delay(5);
  }
  armServo.write(100);
  delay(1000);
  for(pos = 180; pos >= 0; pos-= moveSpeed){//FastAction
      moveSpeed = 3.8;
      armServo.write(pos);
      delay(6);
  }
}
void slowFastAction(){
 for(pos = 180; pos >= 100; pos-= moveSpeed){//SlowAction
      moveSpeed = 1;
      armServo.write(pos);
      delay(20);
     }
  for(pos = 100; pos >= 0; pos-= moveSpeed){//FastAction
      moveSpeed = 3.8;
      armServo.write(pos);
      delay(6);
  }
}
void tripleFastAction(){
  for(pos = 180; pos >= 0; pos-= moveSpeed){//FastAction
      moveSpeed = 3.8;
      armServo.write(pos);
      delay(5);
  }
  armServo.write(180);
  delay(6);
  for(pos = 180; pos >= 0; pos-= moveSpeed){//FastAction
      moveSpeed = 3.8;
      armServo.write(pos);
      delay(5);
  }
  armServo.write(180);
  delay(6);
  for(pos = 180; pos >= 0; pos-= moveSpeed){//FastAction
      moveSpeed = 3.8;
      armServo.write(pos);
      delay(6);
  }
}
