using namespace vex;

extern brain Brain;
// VEXcode devices
extern motor leftMotorA;
extern motor leftMotorB;
extern motor leftMotorC;
extern motor rightMotorA;
extern motor rightMotorB;
extern motor rightMotorC;
extern motor conveyor;
extern motor intake;
extern controller Controller1;
extern inertial DrivetrainInertial;
extern digital_out fourbar;
extern digital_out grab;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );