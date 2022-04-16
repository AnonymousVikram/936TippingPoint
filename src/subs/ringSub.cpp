#include "main.h"

// void ballsUp(float speedVolt)
// {
//   eater.move_voltage(speedVolt);
//   spitter.move_voltage(speedVolt);
// }

// void blueBalled(float speedVolt)
// {
//   eater.move_voltage( -1 * speedVolt );
//   spitter.move_voltage( -1 * speedVolt );
// }

// void takeShit(float speedVolt)
// {
//   eater.move_voltage(speedVolt);
//   spitter.move_voltage( -1 * speedVolt );
// }

// void getFat()
// {
//   eater.move_voltage(0);
//   spitter.move_voltage(0);
// }

float rpm = 200;
void ringDecisionMaker(bool r1, bool r2)
{
  if (r1 && ((!ringRunning) || (ringRunning && !ringFwd)))
  {
    ringRunning = true;
    ringFwd = true;
    ringLift.move_voltage(rpm / 200 * 12000);
  }
  else if (r2 && ((!ringRunning) || (ringRunning && ringFwd)))
  {
    ringRunning = true;
    ringFwd = false;
    ringLift.move_voltage(rpm / 200 * -12000);
  }
  else if (r1 && ((ringRunning && ringFwd) || (!ringRunning)))
  {
    ringRunning = false;
    ringLift.move_voltage(0);
  }
  else if (r2 && ((ringRunning && !ringFwd) || (!ringRunning)))
  {
    ringRunning = false;
    ringLift.move_voltage(0);
  }
}