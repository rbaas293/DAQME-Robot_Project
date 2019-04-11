#include <Servo.h> //includes servo library

int rsensor = 2; // Left Sensor on Analog Pin 2
int lsensor = 1; // Right Sensor on Analog Pin 1
int msensor = 0; // Middle Sensor on Analog Pin 0

const int whitelevl = 600; // reading level is white if <600
const int blacklevl = 850; // reading level is black if >850

int servoPin1 = 3;//declares pin for servo1
Servo Servo1;// creates Servo1 object

int servoPin2 = 11;//declares pin for servo2
Servo Servo2;//creates Servo2 object

void setup() {

Servo1.attach(servoPin1);//attaches servo1 to servopin1
Servo2.attach(servoPin2);//attaches servo2 to servopin2

}

void loop() {

Servo1.write(180);//tells servo1 to go full speed clockwise
Servo2.write(180);//tells servo2 to go full speed clockwise

}
