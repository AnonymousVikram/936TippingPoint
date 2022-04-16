#include "main.h"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol()
{
	cont1.clear();
	cont1.print(1, 0, "75 rpm");

	while (true)
	{
		baseDecisionMaker();

		ringDecisionMaker(cont1.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_UP), cont1.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_DOWN));

		liftDecisionMaker(cont1.get_digital(pros::E_CONTROLLER_DIGITAL_R1), cont1.get_digital(pros::E_CONTROLLER_DIGITAL_R2));

		// tiltDecisionMaker(cont1.get_digital(pros::E_CONTROLLER_DIGITAL_L1), cont1.get_digital(pros::E_CONTROLLER_DIGITAL_L2));

		
		clampDecisionMaker(cont1.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A), cont1.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B));

		pros::delay(20);
	}
}

// piston.set_value(true);
// pros::delay(1000);
// piston.set_value(false);
// pros::delay(1000);

// R1: Spin rings ccw
// R2: Spin rings cw
// L1: Lift bottom lift
// L2: Lower bottom lift
// A: Clamp Pneumatic Goal
//  Up: Raise front tilter
//  Down: Lower front tilter
//  Top Lift figure out later