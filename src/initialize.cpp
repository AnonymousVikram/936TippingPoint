#include "main.h"

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button()
{
	static bool pressed = false;
	pressed = !pressed;
	if (pressed)
	{
		pros::lcd::set_text(2, "I was pressed!");
	}
	else
	{
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize()
{
	pros::lcd::initialize();
	pros::lcd::register_btn1_cb(on_center_button);
	pros::lcd::set_text(1, "Let's Go 936C!");
	pros::lcd::set_text(2, "I was pressed!");

	lfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	lbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	luMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);

	rfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	rbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	ruMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);

	ringLift.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	ringLift.tare_position();

	// tilt.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	// tilt.tare_position();
	dr4b.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	dr4b.tare_position();

	// chamberColor.set_led_pwm(100);
}
