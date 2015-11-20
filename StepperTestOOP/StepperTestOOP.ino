/* _______________________
  /   SHORT DESCRIPTION   \____________________________________________________________________________
  This class is for controlling stepper motors that are controlled by a 4 pin controller board.
  It is tested and developed using the 28BYJ-48 stepper motor and the ULN2003 driver board.
   _______________________
  /    BACKGROUND INFO    \____________________________________________________________________________
  The 28BYJ-48 motor has 512 full engine rotations to rotate the drive shaft once.
  In half-step mode these are 8 x 512 = 4096 steps for a full rotation, and in full-step mode these are
  4 x 512 = 2048 steps for a full rotation.
  
  This example code is to turn the motor clockwise and counterclockwise in full-step mode and half-step
  mode for a specific number of steps. You could also set the motor to turn eternally in one direction
  by calling RotateClockwise() or RotateCounterClockwise() without any parameters.
  Note: full rotation with 1ms rotation delay will probably only work when your driver board is powered 
  by an external power supply!
   _______________________
  / AUTHOR & TERMS OF USE \____________________________________________________________________________
  Created by Laurens Huizer, October 2nd, 2015.
   _                                _           _                    _ 
  | | __ _ _   _ _ __ ___ _ __  ___| |__  _   _(_)_______ _ __ _ __ | |
  | |/ _` | | | | '__/ _ \ '_ \/ __| '_ \| | | | |_  / _ \ '__| '_ \| |
  | | (_| | |_| | | |  __/ | | \__ \ | | | |_| | |/ /  __/ |_ | | | | |
  |_|\__,_|\__,_|_|  \___|_| |_|___/_| |_|\__,_|_/___\___|_(_)|_| |_|_|
  http://www.laurenshuizer.nl/blog/arduino/stepper-motor-library 
  This is free software. 
  You can redistribute it and/or modify it under the terms of GNU General Public License 3.0. 
  To view a copy of this license, visit http://www.gnu.org/licenses/gpl-3.0.txt
   _______________________
  /    CHANGE HISTORY     \____________________________________________________________________________
  
  CHANGED BY               | DATE       | DESCRIPTION
  -------------------------+------------+--------------------------------------------------------------
  <name>                   | yyyy-mm-dd | <description>
*/

// Both the BaseTimedElement class and the StepperMotor class must be referenced
#include <BaseTimedElement.h>
#include <StepperMotor.h> 

int mode = 0;
// Change the pin-numbers to match the connected pins from your Arduino board to the driverboard
StepperMotor motor1(4, 5, 6, 7);
bool clockwise1 = true; // Demo variable, to move the motor clockwise and counterclockwise

StepperMotor motor2(8, 9, 10, 11);
bool clockwise2 = true;

StepperMotor motor3(12, 13, 14, 15);
bool clockwise3 = true;

StepperMotor motor4(16, 17, 18, 19);
bool clockwise4 = true;

StepperMotor motor5(20, 21, 22, 23);
bool clockwise5 = true;

StepperMotor motor6(24, 25, 26, 27);
bool clockwise6 = true;

StepperMotor motor7(28, 29, 30, 31);
bool clockwise7 = true;

StepperMotor motor8(32, 33, 34, 35);
bool clockwise8 = true;

// This method is being called when the motor has completed the amount of steps
// You are allowed to change the MovementCompletionHandler in this method,
// but for this example we've simply used a boolean to switch between clockwise and counterclockwise.
void movementCompleted1()
{
  clockwise1 = !clockwise1; // For this demo invert clockwise, to move back and forth
  if (clockwise1)
  {
    motor1.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor1.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void movementCompleted2()
{
  clockwise2 = !clockwise2; // For this demo invert clockwise, to move back and forth
  if (clockwise2)
  {
    motor2.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor2.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void movementCompleted3()
{
  clockwise3 = !clockwise3; // For this demo invert clockwise, to move back and forth
  if (clockwise3)
  {
    motor3.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor3.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void movementCompleted4()
{
  clockwise4 = !clockwise4; // For this demo invert clockwise, to move back and forth
  if (clockwise4)
  {
    motor4.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor4.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void movementCompleted5()
{
  clockwise5 = !clockwise5; // For this demo invert clockwise, to move back and forth
  if (clockwise5)
  {
    motor5.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor5.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void movementCompleted6()
{
  clockwise6 = !clockwise6; // For this demo invert clockwise, to move back and forth
  if (clockwise6)
  {
    motor6.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor6.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void movementCompleted7()
{
  clockwise7 = !clockwise7; // For this demo invert clockwise, to move back and forth
  if (clockwise7)
  {
    motor7.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor7.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void movementCompleted8()
{
  clockwise8 = !clockwise8; // For this demo invert clockwise, to move back and forth
  if (clockwise8)
  {
    motor8.setStepMode(StepperMotor::fullStepDualPhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(4)        // Set a delay between each step of 4 ms
         -> rotateClockwise(1024); // Perform 1024 steps (rotate the shaft 180 degrees, based on 28BYJ-48)
  }
  else
  {
    motor8.setStepMode(StepperMotor::halfStep) // Set motor to perform half steps (4096 = 360 degrees, based on 28BYJ-48)
         -> setStepDelay(1)                   // Set a delay between each step of 1 ms
         -> rotateCounterClockwise(4096);     // Perform 4096 steps (rotate the shaft 360 degrees, based on 28BYJ-48)
  }
}

void setup() 
{
//setup of the motor, all these methods 
motor1.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted1) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);       // Perform 2048 steps (rotate the shaft 180 degrees, based on 28BYJ-48)

motor2.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted2) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);
 
motor3.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted3) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);
 
motor4.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted4) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);

motor5.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted5) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);

motor6.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted6) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);

motor7.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted7) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);
 
motor8.setStepMode(StepperMotor::fullStepSinglePhase) // Set motor to perform full steps (2048 = 360 degrees, based on 28BYJ-48)
 -> addMovementCompletionHandler(&movementCompleted8) // Add a method that is called when the motor has performed the amount of steps
 -> setStepDelay(4)              // Set a delay between each step of 4 ms
 -> rotateClockwise(1024);

Serial.begin(9600);

}

void loop() 
{

  if (Serial.available() > 0){
    mode = Serial.parseInt();
  }
  
  switch(mode){
    case 1:
      clockwise1 = false;
      clockwise3 = false;
      clockwise5 = false;
      Serial.println("case1");
      mode = 0;
      break;
    case 2:
      clockwise2 = false;
      clockwise4 = false;
      clockwise6 = false;
      Serial.println("case2");
      mode = 0;
      break;
    default:
      clockwise1 = true;
      clockwise2 = true;
      clockwise3 = true;
      clockwise4 = true;
      clockwise5 = true;
      clockwise6 = true;
      clockwise7 = true;
      clockwise8 = true;
  }
  

  // This function is required to be called in the loop in order for the motor to work!
  motor1.update();
  motor2.update();
  motor3.update();
  motor4.update();
  motor5.update();
  motor6.update();
  motor7.update();
  motor8.update();

}
