// #include <Servo.h>

// Servo servo1;
// Servo servo2;
// Servo servo3;

// int i = 0;

void setup() {  
  // Serial.begin(9600);
  // servo1.attach(10);
  // // servo2.attach(6);
  // // servo3.attach(5);

}

void loop() {

// servo1.write(0);

}


// /* This example Arduino Sketch controls the complete rotation of
//  *  SG995 Servo motor by using its PWM and Pulse width modulation technique
//  */

// // #include <Servo.h> // include servo library to use its related functions
// // #define Servo_PWM 6 // A descriptive name for D6 pin of Arduino to provide PWM signal
// // Servo MG995_Servo;  // Define an instance of of Servo with the name of "MG995_Servo"
  

// // void setup() {
// //   Serial.begin(9600); // Initialize UART with 9600 Baud rate
// //   MG995_Servo.attach(Servo_PWM);  // Connect D6 of Arduino with PWM signal pin of servo motor

// // }

// // void loop() {
// //   Serial.println("0");// You can display on the serial the signal value
// //   MG995_Servo.write(0); //Turn clockwise at high speed
// //   delay(3000);
// //   MG995_Servo.detach();//Stop. You can use deatch function or use write(x), as x is the middle of 0-180 which is 90, but some lack of precision may change this value
// //   delay(2000);
// //   MG995_Servo.attach(Servo_PWM);//Always use attach function after detach to re-connect your servo with the board
// //   Serial.println("0");//Turn left high speed
// //   MG995_Servo.write(180);
// //   delay(3000);
// //   MG995_Servo.detach();//Stop
// //   delay(2000);
// //   MG995_Servo.attach(Servo_PWM);

      
// // }


// Include the library
// #include <Servo.h>

// // Create the servo object
// Servo myservo;

// // Setup section to run once
// void setup() {
//   myservo.attach(6); // attach the servo to our servo object

//   // myservo.write(90); 
// }

// // Loop to keep the motor turning!
// void loop() {
//   myservo.write(45); // rotate the motor counterclockwise

//   delay(1000); // keep rotating for 5 seconds (5000 milliseconds)

//   // myservo.write(90); // stop the motor

//   // delay(1000); // stay stopped

//   myservo.write(45); // rotate the motor clockwise

//   delay(1000); // keep rotating :D
// }