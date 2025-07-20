#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;
bool done = false; 

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(7);
  servo4.attach(9);
}

void loop() {
  if (!done) {
    unsigned long startTime = millis();

    while (millis() - startTime < 2000) {
      for (pos = 0; pos <= 180; pos++) {
        servo1.write(pos);
        servo2.write(pos);
        servo3.write(pos);
        servo4.write(pos);
        delay(15);
      }
      for (pos = 180; pos >= 0; pos--) {
        servo1.write(pos);
        servo2.write(pos);
        servo3.write(pos);
        servo4.write(pos);
        delay(15);
      }
    }
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);

    done = true; 
  }
}