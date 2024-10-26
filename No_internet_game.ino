#define white 4
#define cactus 3
#define servo 9
#include <Servo.h>
Servo myservo;

void setup() {
    Serial.begin(9600);
    pinMode(white,  OUTPUT);
    pinMode(cactus, OUTPUT);
    pinMode(servo, OUTPUT);
    myservo.attach(servo);

}

void loop() {
    int value = analogRead(A0);
    Serial.println("Analog  Value: ");
    Serial.println(value);
    if (value >=30 && value<=40){
      digitalWrite(cactus, HIGH);
      digitalWrite(white, LOW);
    }
    else if(value >= 50 && value <= 70){
      digitalWrite(white, HIGH);
      digitalWrite(cactus, LOW);
      servo_start();

    }
    else{
      digitalWrite(cactus, LOW);
      digitalWrite(white, LOW);
    }

    
    
    delay(0);
}

void servo_start(){
  delay(0);
  myservo.write(140);
  delay(100);
  myservo.write(90);

}










