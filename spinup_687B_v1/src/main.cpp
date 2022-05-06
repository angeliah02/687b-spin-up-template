/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       programming                                               */
/*    Created:      Fri May 6th 2022                                          */
/*    Description:  Spin Up V1                                                */
/*                                                                            */
/*    Name:   687B Spin Up                                                    */
/*    Date: 05062022                                                          */
/*    Class:                                                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/


void autonomous(void) {
  

}

void drivercontrol(void){
  while (true){
  }    
}


// Main will set up the competition functions and callbacks.

}

int main() {
  //Set up callbacks for autonomous and driver control periods. 
  Competition.autonomous(autonomous); 
  Competition.drivercontrol(drivercontrol); 

  //Prevent main from exiting with an infinite loop
  while (true) {
    wait(100, msec); 
  }
}
