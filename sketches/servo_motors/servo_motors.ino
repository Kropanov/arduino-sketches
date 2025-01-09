#include <Servo.h>

// Declare more motors here
Servo motor;

void setup() {
  motor.attach(9);

  Serial.begin(115200);
  Serial.setTimeout(1);
}

void loop() {
  motor.write(0);
  delay(1000);

  motor.write(90);
  delay(1000);

  motor.write(180);
  delay(1000);
}
