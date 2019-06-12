#include <Servo.h>
 #define pinBase 2
 #define pinDerecho 3
 #define pinIzquierdo 4
 #define pinGarra 6
  Servo motorBase;
  Servo motorDerecho;
  Servo motorIzquierdo;
  Servo motorGarra;

void setup() {
  Serial.begin(9600);
  motorBase.attach(2);
  motorDerecho.attach(3);
  motorIzquierdo.attach(4);
  motorGarra.attach(6);
}

void loop(){
  motorBase.write(0);
  delay(2000);
  motorBase.write(90);
  delay(2000);
  motorBase.write(180);
  delay(3000);  
  
  motorDerecho.write(90);
  delay(2000);
  motorDerecho.write(130);
  delay(3000);
  
  motorIzquierdo.write(25);
  delay(2000);
  motorIzquierdo.write(65);
  delay(3000);
  
  motorGarra.write(90);
  delay(2000);
  motorGarra.write(60);
  delay(2000);
}
