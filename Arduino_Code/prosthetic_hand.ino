#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int flexPins[4] = {A0, A1, A2, A3};
const int servoPins[4] = {9, 10, 11, 12};

const int flexMin = 500;
const int flexMax = 900;

void setup() {

  for (int i = 0; i < 4; i++) {
    pinMode(flexPins[i], INPUT);
  }

  servo1.attach(servoPins[0]);
  servo2.attach(servoPins[1]);
  servo3.attach(servoPins[2]);
  servo4.attach(servoPins[3]);

  Serial.begin(9600);
}

void loop() {

  for (int i = 0; i < 4; i++) {

    int flexValue = analogRead(flexPins[i]);

    int angle = map(flexValue, flexMin, flexMax, 0, 180);

    angle = constrain(angle, 0, 180);

    switch (i) {

      case 0:
        servo1.write(angle);
        break;

      case 1:
        servo2.write(angle);
        break;

      case 2:
        servo3.write(angle);
        break;

      case 3:
        servo4.write(angle);
        break;
    }

    Serial.print("Flex ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(flexValue);
    Serial.print(" => Angle: ");
    Serial.println(angle);
  }

  delay(50);
}