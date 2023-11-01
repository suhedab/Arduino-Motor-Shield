#include <Servo.h>

Servo servoMotor;

int servoPosition = 0;  // position variable

void setup() {
  servoMotor.attach(10);    // servo motor pins are attached to pin 10 of the arduino
}

void loop() {

    // servo motor moving 90 degree clockwise and stops then moving 90 degree counterclockwise

  for(servoPosition = 0; servoPosition <= 90; servoPosition += 1)
  {
    servoMotor.write(servoPosition);
    delay(50);
  }
  for(servoPosition = 90; servoPosition >= 0; servoPosition -= 1)
  {
    servoMotor.write(servoPosition);
    delay(50);
  }

}
