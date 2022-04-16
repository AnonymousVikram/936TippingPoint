#include "main.h"

// Driver Control Methods
//  void setVoltages(float leftX, float leftY, float rightX, float *lfVolt, float *lbVolt, float *rfVolt, float *rbVolt)
//  {
//    *lfVolt = leftY + rightX ;

//   *lbVolt = leftY + rightX;

//   *rfVolt = leftY - rightX;

//   *rbVolt = leftY - rightX;

//   *lfVolt = *lfVolt * 12000 / 127.0;
//   *lbVolt = *lbVolt * 12000 / 127.0;
//   *rfVolt = *rfVolt * 12000 / 127.0;
//   *rbVolt = *rbVolt * 12000 / 127.0;
// }

void setVoltages(float leftY, float rightX, float *lVolt, float *rVolt)
{
  *lVolt = leftY + rightX;
  *rVolt = leftY - rightX;

  *lVolt = *lVolt * 12000 / 127.0;
  *rVolt = *rVolt * 12000 / 127.0;
}

// void moveBase(float lf, float lb, float rf, float rb)
// {
//   lfMotor.move_voltage(lf);
//   lbMotor.move_voltage(lb);
//   rfMotor.move_voltage(rf);
//   rbMotor.move_voltage(rb);
// }

void moveBase(float lVolt, float rVolt)
{
  lfMotor.move_voltage(lVolt);
  luMotor.move_voltage(lVolt);
  lbMotor.move_voltage(lVolt);
  rfMotor.move_voltage(rVolt);
  ruMotor.move_voltage(rVolt);
  rbMotor.move_voltage(rVolt);
}

void switchBrakeModes()
{
  updateCont = true;
  if (baseHold)
  {
    lfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    lbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    rfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    rbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
  }

  else
  {
    lfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    lbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    rfMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    rbMotor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
  }
}

void baseBreakSwitch(bool override)
{
  if (override)
  {
    baseHold = !baseHold;
    switchBrakeModes();
  }
}

void baseDecisionMaker()
{
  if ((cont1.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X) != 0) || (cont1.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y) != 0) || (cont1.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X) != 0))
  {
    float lVolt, rVolt;

    setVoltages(cont1.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y), cont1.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X), &lVolt, &rVolt);

    moveBase(lVolt, rVolt);
  }

  else
  {
    moveBase(0, 0);
  }

  if (cont1.get_digital(pros::E_CONTROLLER_DIGITAL_Y))
  {
    switchBrakeModes();
  }
}
