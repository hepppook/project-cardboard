# include <Servo.h>

Servo myservo; 
int pos = 0;  

void setup() {
  myservo.attach(10); 
}

void loop() {
  for (pos = 0; pos <= 25; pos += 1) {
    myservo.write(pos);
    delay(5);
  }
  for (pos = 25; pos >= 0; pos -= 1) { 
    myservo.write(pos);
    delay(5);
  }
  for (pos = 0; pos <= 25; pos += 1) {
    myservo.write(pos);
    delay(5);
  }
  for (pos = 25; pos >= 0; pos -= 1) { 
    myservo.write(pos);
    delay(5);
  }
  delay(20);
}