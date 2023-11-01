#include <AFMotor.h>    // including the shield's library
 
AF_DCMotor motor1(1);   // a DC motor is connected to the M1 connection ground.
AF_DCMotor motor2(2);   // another DC motor is connected to the M2 connection ground.

void setup() {
}

void loop() {

  // for motor 1
  // run forward for 2 seconds, stop for 2 seconds
  // then run backward for 2 seconds and stop again
  // two DC motors are working sequentially.
  
  // motor 1
  motor1.setSpeed(200);   // setSpeed() set the speed of the dc motor
  motor1.run(FORWARD);    //run() for the direction of the motor takes FORWARD/BACKWARD
  delay(2000);
  motor1.run(RELEASE);      // run() to stop the motor RELEASE
  delay(2000);
  motor1.run(BACKWARD);
  delay(2000);
  motor1.run(RELEASE);
  delay(3000);

  //motor 2
  motor2.setSpeed(200);
  motor2.run(FORWARD);
  delay(2000);
  motor2.run(RELEASE);
  delay(2000);
  motor2.run(BACKWARD);
  delay(2000);
  motor2.run(RELEASE);
  delay(3000);

}
