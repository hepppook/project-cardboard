#include <Servo.h>

Servo myservo;

int pos = 0;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  myservo.attach(10);
}

void loop() {

  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);

  for (pos = 0; pos <= 25; pos += 1) {
    myservo.write(pos);
    delay(4);
  }
  for (pos = 25; pos >= 0; pos -= 1) { 
    myservo.write(pos);
    delay(4);
  }

  delay(20);

  for (pos = 0; pos <= 25; pos += 1) {
    myservo.write(pos); 
    delay(10);
  }
  for (pos = 25; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }

  for (pos = 0; pos <= 25; pos += 1) { 
    myservo.write(pos);
    delay(5);
  }
  delay(20);
  for (pos = 25; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }

  delay(10); 
    
  for (pos = 0; pos <= 25; pos += 1) { 
    myservo.write(pos);
    delay(5);
  }
  delay(10);
  for (pos = 25; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(5);
  }
  
  delay(5);

}
