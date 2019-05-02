#include <Servo.h> //includes servo library

int flsensor = A0; // Left Sensor on Analog Pin 4
int mlsensor = A1; // Right Sensor on Analog Pin 3
int msensor = A2; // Middle Sensor on Analog Pin 2
int mrsensor = A3; // Right Sensor on Analog Pin 1
int frsensor = A4; // Middle Sensor on Analog Pin 0

const int whitelevl = 400; // reading level is white if <600
const int blacklevl = 850; // reading level is black if >850

int servoPin1 = 7;//declares pin for servo1, LEFT SERVO!!
Servo Servo1;// creates Servo1 object

int servoPin2 = 11;//declares pin for servo2, RIGHT SERVO!!
Servo Servo2;//creates Servo2 object

unsigned int count;

void setup() {
  Servo1.attach(servoPin1);//attaches servo1 to servopin1
  Servo2.attach(servoPin2);//attaches servo2 to servopin2

  Serial.begin(9600);

}

void loop() {
  // Case 1 : Right sensors and middle sensor are reading black and left sensors are reading white. Turn right!
  if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > blacklevl)
  {
    Serial.println("DEBUG: ENTERING C1 - TURN RIGHT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnright();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C1 - TURNING RIGHT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl))
        {Serial.println("DEBUG: EXITING C1 - TURN RIGHT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 2 : Right sensors are reading black and left sensors and middle sensor are reading white. Turn right!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > blacklevl)
  {
    Serial.println("DEBUG: ENTERING C2 - TURN RIGHT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnright();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C2 - TURNING RIGHT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl))
        {Serial.println("DEBUG: EXITING C2 - TURN RIGHT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 3 : Far right sensor is reading black and left sensors, middle sensor, and middle right sensor are reading white. Turn right!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > blacklevl)
  {
    Serial.println("DEBUG: ENTERING C3 - TURN RIGHT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnright();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C3 - TURNING RIGHT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)) 
        {Serial.println("DEBUG: EXITING C3 - TURN RIGHT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 4 : Middle right sensor is reading black and left sensors, middle sensor, and far right sensor are reading white. Turn right!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl)
  {
    Serial.println("DEBUG: ENTERING C4 - TURN RIGHT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnright();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C4 - TURNING RIGHT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl))  
        {Serial.println("DEBUG: EXITING C4 - TURN RIGHT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensors are reading white and middle sensors are reading black
    }
  }
  // Case 5 : Left sensors and middle sensor are reading black and right sensors are reading white. Turn left!
  else if (readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    Serial.println("DEBUG: ENTERING C5 - TURN LEFT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnleft();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C5 - TURNING LEFT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl))
        {Serial.println("DEBUG: EXITING C5 - TURN LEFT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 6 : Left sensors are reading black and right sensors and middle sensor are reading white. Turn left!
  else if (readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    Serial.println("DEBUG: ENTERING C6 - TURN LEFT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnleft();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C6 - TURNING LEFT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl))
         
        {Serial.println("DEBUG: EXITING C6 - TURN LEFT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 7 : Far left sensor is reading black and right sensors, middle sensor, and middle left sensor are reading white. Turn left!
  else if (readQD(flsensor) < blacklevl && readQD(mlsensor) < whitelevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    Serial.println("DEBUG: ENTERING C7 - TURN LEFT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnleft();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C7 - TURNING LEFT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl)) 
        {Serial.println("DEBUG: EXITING C7 - TURN LEFT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  // Case 8 : Middle left sensor is reading black and right sensors, middle sensor, and far left sensor are reading white. Turn left!
  else if (readQD(flsensor) < whitelevl && readQD(mlsensor) < blacklevl && readQD(msensor)< whitelevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl)
  {
    Serial.println("DEBUG: ENTERING C8 - TURN LEFT, TRUE");
    count = 0; // intialize debug while loop count
    while(true)
    {
      turnleft();
      count++;
      if (count == 1){ //dont print if first run through loop
      }
      else{
        Serial.print("DEBUG: C8 - TURNING LEFT, COUNT= "); Serial.println(count);
      }
      if ((readQD(flsensor) < blacklevl && readQD(mlsensor) < blacklevl && readQD(msensor)< blacklevl && readQD(mrsensor) > whitelevl && readQD(frsensor) > whitelevl) || (readQD(flsensor) < whitelevl && readQD(mlsensor) < whitelevl && readQD(msensor)< blacklevl && readQD(mrsensor) > blacklevl && readQD(frsensor) > whitelevl)) 
        {Serial.println("DEBUG: EXITING C8 - TURN LEFT, SWITCHING TO NEW CASE...");break;} // Break if Left sensor and right sensor are reading white and middle sensor is reading black
    }
  }
  else //Case 9 : Default to going straight!
  {
    Serial.println("DEBUG: C9 - DEFAULT, GOING FORWARD.");
    goforward(); // If there is no line, the rover will go forward
  }
}
void goforward(){
  Servo1.write(85);//tells servo1 to go full speed clockwise85
  Servo2.write(95);//tells servo2 to go full speed clockwise95
}

void turnright(){
  Servo1.write(85);//tells servo1 to go full speed counterclockwise
  Servo2.write(85);//tells servo2 to go full speed clockwise
}

void turnleft(){
  Servo1.write(95);//tells servo1 to go full speed clockwise
  Servo2.write(95);//tells servo2 to go full speed counterclockwise
}

int readQD(int x){
  int val = analogRead(x);
  return val;
}
