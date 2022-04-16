#include "main.h"
// /**
//  * Runs the user autonomous code. This function will be started in its own task
//  * with the default priority and stack size whenever the robot is enabled via
//  * the Field Management System or the VEX Competition Switch in the autonomous
//  * mode. Alternatively, this function may be called in initialize or opcontrol
//  * for non-competition testing purposes.
//  *
//  * If the robot is disabled or communications is lost, the autonomous task
//  * will be stopped. Re-enabling the robot will restart the task, not re-start it
//  * from where it left off.
//  */

// using namespace okapi;

// std::shared_ptr<ChassisController> baseX =
//       ChassisControllerBuilder()
//           .withMotors(10, 20, 11, 1)
//           .withDimensions(AbstractMotor::gearset::green, {{10.5_in, 18_in}, imev5GreenTPR})
//           .withMaxVoltage(15000)
//           .build();

void autonomous()
{

    //   pros::lcd::initialize();
    // 	pros::lcd::set_text(1, "Let's Go 936C!");

    // 	pros::lcd::register_btn1_cb(on_center_button);

    // 	lfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    // 	lbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    // 	rfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    // 	rbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);

    // 	eater.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    // 	eater.tare_position();
    // 	spitter.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    // 	spitter.tare_position();

    // 	lInt.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    // 	lInt.tare_position();
    // 	rInt.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    // 	rInt.tare_position();

    // 	chamberColor.set_led_pwm(100);

    // // Travel to Goal 1
    //   spitter.move_voltage(12000);
    // <<<<<<< HEAD
    // <<<<<<< HEAD
    //   baseX->moveDistance(-21.5_in);
    //   spitter.move_voltage(0);
    //   fullInt(9000);
    //   ballsUp(3800);
    //   baseX->turnAngle(85_deg);
    //   baseX->moveDistance(31_in);
    //   stopInt();
    //   baseX->moveDistanceAsync(5_in);
    //   ballsUp();
    //   pros::delay(150);
    // =======
    //   baseX->moveDistance(-22.898819_in);
    //   spitter.move_voltage(0);
    //   fullInt(9000);
    //   ballsUp(3800);
    //   baseX->turnAngle(55_deg);
    //   baseX->moveDistance(38_in);
    //   baseX->moveDistanceAsync(5_in);
    //   ballsUp();
    //   pros::delay(900);
    // >>>>>>> parent of 207307f (Blue side auton)
    // =======
    //   baseX->moveDistance(-22.898819_in);
    //   spitter.move_voltage(0);
    //   fullInt(9000);
    //   ballsUp(3800);
    //   baseX->turnAngle(55_deg);
    //   baseX->moveDistance(38_in);
    //   baseX->moveDistanceAsync(5_in);
    //   ballsUp();
    //   pros::delay(900);
    // >>>>>>> parent of 207307f (Blue side auton)
    //   eater.move_voltage(0);
    //   pros::delay(400);
    //   spitter.move_voltage(0);
    //   getFat();
    //   pros::delay(50);

    // // Score Goal 1
    //   // intDisappointment();
    //   // pros::delay(25);
    //   // stopInt();
    //   // ballsUp();
    //   // pros::delay(75);

    // // Travel to Goal 2

    //   baseX->moveDistance(-36_in);
    //   fullInt(9000);
    // <<<<<<< HEAD
    // <<<<<<< HEAD
    //   baseX->turnAngle(18_deg);
    //   ballsUp(3800);
    //   baseX->moveDistance(-40_in);
    // =======
    //   baseX->turnAngle(20_deg);
    //   ballsUp(4000);
    //   baseX->moveDistance(-42_in);
    // >>>>>>> parent of 207307f (Blue side auton)
    // =======
    //   baseX->turnAngle(20_deg);
    //   ballsUp(4000);
    //   baseX->moveDistance(-42_in);
    // >>>>>>> parent of 207307f (Blue side auton)
    //   stopInt();
    //   baseX->turnAngle(-80_deg);
    //   baseX->moveDistance(15_in);
    //   ballsUp();
    //   baseX->moveDistance(5_in);
    //   pros::delay(100);
    //   getFat();

    // // Score Goal 2

    //   // ballsUp();
    //   // pros::delay(500);
    //   // getFat();

    // // Travel to Goal 3
    // <<<<<<< HEAD
    //   baseX->moveDistance(-24_in);
    //   baseX->turnAngle(-55_deg);
    // =======
    //   baseX->moveDistance(-20_in);
    //   baseX->turnAngle(-45_deg);
    // <<<<<<< HEAD
    // >>>>>>> parent of 207307f (Blue side auton)
    // =======
    // >>>>>>> parent of 207307f (Blue side auton)
    //   fullInt();
    //   baseX->moveDistance(50_ft);
    //   intDisappointment(12000);
    moveBase(-6000, -6000);
    pros::delay(1000);
    clampDecisionMaker(true, false);
    moveBase(4500, 4500);
}
