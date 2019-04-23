#include <Servo.h> //includes servo library

int flsensor = 4; // Left Sensor on Analog Pin 4
int mlsensor = 3; // Right Sensor on Analog Pin 3
int msensor = 2; // Middle Sensor on Analog Pin 2
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

  // Case 1 : Right sensors and middle sensor are reading black and left sensors are reading white. Turn right!
  if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > blacklevl)
  {
    while(true)
    {
      turnright();
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 2 : Right sensors are reading black and left sensors and middle sensor are reading white. Turn right!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > blacklevl)
  {
    while(true)
    {
      turnright();
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 3 : Far right sensor is reading black and left sensors, middle sensor, and middle right sensor are reading white. Turn right!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > blacklevl)
  {
    while(true)
    {
      turnright();
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 4 : Middle right sensor is reading black and left sensors, middle sensor, and far right sensor are reading white. Turn right!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl)
  {
    while(true)
    {
      turnright();
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 5 : Left sensors and middle sensor are reading black and right sensors are reading white. Turn left!
  else if (readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    while(true)
    {
      turnleft();
      if ((readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 6 : Left sensors are reading black and right sensors and middle sensor are reading white. Turn left!
  else if (readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    while(true)
    {
      turnleft();
      if ((readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 7 : Far left sensor is reading black and right sensors, middle sensor, and middle left sensor are reading white. Turn left!
  else if (readQD(flsensor) < blacklevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    while(true)
    {
      turnleft();
      if ((readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 8 : Middle left sensor is reading black and right sensors, middle sensor, and far left sensor are reading white. Turn left!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    while(true)
    {
      turnleft();
      if ((readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl))
        {break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  else //Case 9 : Default to going straight!
  {
    goforward(); // If there is no line, the rover will go forward
  }
}
void goforward(){
  Servo1.write(85);//tells servo1 to go full speed clockwise85
  Servo2.write(95);//tells servo2 to go full speed clockwise95
}

void turnright(){
}

void turnleft(){
  Servo1.write(85);//tells servo1 to go full speed counterclockwise
  Servo2.write(85);//tells servo2 to go full speed clockwise
  Servo1.write(95);//tells servo1 to go full speed clockwise
  Servo2.write(95);//tells servo2 to go full speed counterclockwise
}

int readQD(int x){
  int val = analogRead(x);
  return val;
}
