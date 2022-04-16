#include "main.h"

// Devices

extern pros::Motor lfMotor;
extern pros::Motor lbMotor;
extern pros::Motor luMotor;

extern pros::Motor rfMotor;
extern pros::Motor rbMotor;
extern pros::Motor ruMotor;

extern pros::Motor ringLift;
extern pros::Motor dr4b;
// extern pros::Motor tilt;

extern pros::ADIDigitalOut liftClamperL;
extern pros::ADIDigitalOut liftClamperR;
extern pros::ADIDigitalOut ringClamperL;
extern pros::ADIDigitalOut ringClamperR;

// extern pros::Optical chamberColor;

extern pros::Controller cont1;

// Extra Vals

extern bool baseHold;
// extern bool intBreak;
extern bool clampingFront;
extern bool clampingBack;
extern bool updateCont;
extern bool ringRunning;
extern bool ringFwd;

// extern float intVolt;

// Extra Methods
extern void printInfo();
