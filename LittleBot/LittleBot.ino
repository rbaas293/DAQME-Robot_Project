#include <Servo.h> //includes servo library

int flsensor = 4; // Left Sensor on Analog Pin 2
int mlsensor = 3; // Right Sensor on Analog Pin 1
int msensor = 2; // Middle Sensor on Analog Pin 0
int mrsensor = 1; // Right Sensor on Analog Pin 1
int frsensor = 0; // Middle Sensor on Analog Pin 0

const int whitelevl = 600; // reading level is white if <600
const int blacklevl = 850; // reading level is black if >850

int servoPin1 = 7;//declares pin for servo1
Servo Servo1;// creates Servo1 object

int servoPin2 = 11;//declares pin for servo2
Servo Servo2;//creates Servo2 object

void setup() {

Servo1.attach(servoPin1);//attaches servo1 to servopin1
Servo2.attach(servoPin2);//attaches servo2 to servopin2

}

void loop() {

  // Case 1: Left sensor and right sensors are reading white and middle sensor is reading black. Drive forward!
  if (readQD(lsensor) < whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl)
  {
    goforward();
  }
  // Case 2 : Left sensor and middle sensor are reading white and right sensor is reading black. Turn right!
  else if (readQD(lsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(rsensor) > blacklevl)
  {
    while(true)
    {
      turnright();
      if ((readQD(lsensor) < whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl) || (readQD(lsensor)> blacklevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 3 : Left sensor is reading white, middle sensor and right sensor are reading black. Turn right!
  else if (readQD(lsensor) < whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) > blacklevl)
  {
    while(true)
    {
      turnright();
      if ((readQD(lsensor) < whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl) || (readQD(lsensor)> blacklevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 4 : Left sensor is reading black, middle sensor and right sensor are reading white. Turn left!
  else if (readQD(lsensor) > blacklevl && readQD(msensor)< whitelevl && readQD(rsensor) < whitelevl)
  {
    while(true)
    {
      turnleft();
      if ((readQD(lsensor) < whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl) || (readQD(lsensor)< whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) > blacklevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 5 : Left sensor and middle sensor are reading black and right sensor is reading white. Turn left!
  else if (readQD(lsensor) > blacklevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl)
  {
    while(true)
    {
      turnleft();
      if ((readQD(lsensor) < whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) < whitelevl ) || (readQD(lsensor)< whitelevl && readQD(msensor)> blacklevl && readQD(rsensor) > blacklevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  else
  {
    goforward(); // If there is no line, the rover will go forward
    }
}
void goforward(){
Servo1.write(180);//tells servo1 to go full speed clockwise
Servo2.write(180);//tells servo2 to go full speed clockwise
}


void turnright(){
}


void turnleft(){
}
