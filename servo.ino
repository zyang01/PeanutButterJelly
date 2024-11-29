/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo7;  // create Servo object to control a servo
Servo myservo9;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)

  myservo7.attach(7);  // attaches the servo on pin 7 to the Servo object
  myservo9.attach(9);  // attaches the servo on pin 9 to the Servo object
  myservo7.write(pos);
  myservo9.write(pos);

  delay(300000);

  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo7.write(pos);              // tell servo to go to position in variable 'pos'
    myservo9.write(pos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15 ms for the servo to reach the position
  }

  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
}

void loop() {
}
