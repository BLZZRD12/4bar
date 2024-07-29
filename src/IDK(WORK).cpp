#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor leftMotorA = motor(PORT18, ratio18_1, true);
motor leftMotorB = motor(PORT19, ratio18_1, false);
motor leftMotorC = motor(PORT20, ratio18_1,true);
motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB, leftMotorC);
motor rightMotorA = motor(PORT13, ratio18_1, false);
motor rightMotorB = motor(PORT11, ratio18_1, true);
motor rightMotorC = motor(PORT12, ratio18_1,false);
motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB, rightMotorC);
inertial DrivetrainInertial = inertial(PORT5);
controller Controller1 = controller(primary);
motor conveyor = motor(PORT17, ratio18_1, true);
motor intake = motor(PORT1, ratio18_1, false); 
digital_out fourbar = digital_out(Brain.ThreeWirePort.F);
digital_out grab = digital_out(Brain.ThreeWirePort.H);
// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}