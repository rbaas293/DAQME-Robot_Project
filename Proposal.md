## DAQME-Robot-Project Proposal 

Group: 6 

Members: Ryan Baas, Jake Cook

[TOC]

### Introduction, Audience, and Goals:

Contained is a proposal for a lab for the University of Cincinnati’s engineering summer camp program. The program’s aim is to offer an introduction to robotics to incoming high schoolers. This project uses an Arduino controlled robot with an IR line follower to follow a predetermined line on the ground. Campers will be responsible for building the robot and utilizing functions to get it to follow a line.

### Potential Safety Concerns:

Potential safety concerns include proper handling, small parts, and correct use of batteries. Robots should be picked up by the frame, not the wheels, to avoid damage to it. Small parts such as screws and nuts are utilized. Nine volt batteries are to be used safely to prevent injury. 

### Potential Stumbling Blocks:

Various potential stumbling blocks exist for our completion of this project, as well as for their completion of the lab. We could run into trouble with different Arduino libraries not meshing together correctly. Both us and students taking this workshop could run into problems with robot assembly, such as parts not printed correctly. Students’ possible lack of familiarity with Arduino and coding in general should be taken into account, and directions should be written accordingly.



### Required Materials:

#### Sensors

- **Line Follower Sensor** - DF Robot Shop: Rover

  - Features

    1. 3 x QRE1113GR miniature reflectance sensors

    2. Outputs 3 analog voltages: 0-5VDC

  - Interface - 0.1” spaced male header

    1. Out1 - Analog Out 1: 0-5V
    2. Out2 - Analog Out 2: 0-5V
    3. Out3 - Analog Out 3: 0-5V
    4. Vcc - 5VDC:  75 mA total amp draw.
    5. GND - 5VCOM:

- **Continuous Rotation Servo** - FeeTech FS5103R

  - Features
    -  Rotates fully forward or backwards **NOT** to Position
    - Required Pulse: 500us-2500us
  - Operating Parameters:
    - Operating Voltage: 4.8V~6V (5V works best)
    - Average Speed: ~0.18sec/60°
    - Stall Torque (4.8V): 3kg.cm/41.74oz.in
    - Stall Torque (6V): 3.2kg.com/44.52oz.in
    - Required Pulse: 500us-2500us
    - Connector Wire Length: 30cm / 11.8"
    - Dimensions: 37mm x 54mm x 20mm / 1.5" x 2.1" x 0.8"
    - Weight (no horns): 40g
    - Spline Count: 25
  - **Robotics Assembly Kit** 
    - 1X Solderless Breadboard Holder
    - 1X Arduino Uno R3 
    - 1X Arduino Uno R3 Mount/Enclosure
    - 1X Battery Holder
    - 1X Ping Pong Ball
    - 2X Continuous Servos
    - 2X Servo+Wheel Assembly (1 Left, 1 Right)
    - Building Blocks:
      - 1X 2x24 Straight-Block
      - 1X 1x3 Straight-Block
      - 2X 1x11 Straight-Block
      - 2X 2x3 L-Block
      - 2X 4x6 L-Block
      - 2X 2x4 L-Block
      - 2X 3x4 L-Block
    - Screws, Washers, and Nuts:
      - 8X M4x30mm
      - 19X M4x20mm
      - 27X M4 Washers
      - 27X M4 Nuts

  

#### Software

- Arduino IDE - A simple but powerful open-source development environment for compiling and uploading code to supported microcontrollers.  

### Task Allocation

##### Proposal 

- Description
  a. Who is your target audience? - Jake
  b. What will this be used for? - 
  c. What will you be measuring?
  d. How will it be measured? 
- Sensor list/Brief Description - Ryan 
- Potential Stumbling blocks - Ryan 
- Safety Concerns - Jake

##### Engineering 

- Arduino Sketches - Properly Commented
  - Ryan - Servo Control Implantation API.
  - Jake - Algorithms for line Tracing 
- Certification of Operation - Test Plans - Switch per test.
- PPT on implementation of Code Logic w/ Examples. - Ryan
- Assembly of 3D Printed Robot ppt. - Jake
- Sensor PowerPoint - Ryan pop from proposal/coordinate final with Jake. 



NOTE: This project will be available on `github` [here](https://github.com/rbaas293/DAQME-Robot_Project) or at the URL: `https://github.com/rbaas293/DAQME-Robot_Project`

