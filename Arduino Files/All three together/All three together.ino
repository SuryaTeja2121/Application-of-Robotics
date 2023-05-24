#include <Servo.h>


Servo servo1;
Servo servo2;
Servo servo3;
 
int i = 0;
 
void setup() {

  servo1.attach(7);
  servo2.attach(6);
  servo3.attach(5);
  
}
 
void loop() {

for (i = 0; i <= 180; i+= 90) {
  servo1.write(i);
  servo2.write(i);
  servo3.write(i);
  delay(1000);
}

for (i = 180; i >= 0; i-= 90) {
  servo1.write(i);
  servo2.write(i);
  servo3.write(i);
  delay(1000);
  }

}