#include "main.h"

// Initializing Devices

pros::Motor lfMotor(18, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor lbMotor(20, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor luMotor(19, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

pros::Motor rfMotor(8, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor rbMotor(10, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor ruMotor(9, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);

// pros::Motor lfMotor(11, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
// pros::Motor lbMotor(20, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
// pros::Motor rfMotor(1, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
// pros::Motor rbMotor(10, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

pros::Motor ringLift(7, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor dr4b(17, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);
// pros::Motor tilt(3, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);

pros::ADIDigitalOut liftClamperL('G');
pros::ADIDigitalOut liftClamperR('H');
pros::ADIDigitalOut ringClamperL('F');
pros::ADIDigitalOut ringClamperR('E');

// pros::Optical chamberColor(15);
pros::Controller cont1(pros::E_CONTROLLER_MASTER);

// Other Vals
bool baseHold = false;
bool intBreak = true;
//  float intVolt = 12000;
bool clampingBack = false;
bool clampingFront = false;
bool ringRunning = false;
bool ringFwd = true;

bool updateCont = true;
// void printInfo(void*)
// {
//   while(true)
//   {
//     if(updateCont)
//     {
//       cont1.clear();

//       pros::delay(50);

//       if(clamping)
//       {
//         cont1.print(0, 0, "Clamp: On");
//       }
//       else
//       {
//         cont1.print(0, 0, "Clamp: Off");
//       }

//       pros::delay(50);
//     }

//     pros::delay(20);
//   }
// }
