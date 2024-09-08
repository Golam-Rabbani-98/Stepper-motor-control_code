#include<Stepper.h>
int mtrspd=15;
Stepper myStepper(2048,8,10,9,11);


void setup() {
  myStepper.setSpeed(mtrspd);
  myStepper.step(-1024);

}

void loop() {
  myStepper.step(2048);
  delay(500);
  myStepper.step(-2048);
  delay(500);
}
