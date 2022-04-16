#include "main.h"

// void fullInt(float speedVolt)
// {
//   lInt.move_voltage(speedVolt);
//   rInt.move_voltage(speedVolt);
// }

// void intDisappointment(float speedVolt)
// {
//   lInt.move_voltage( -1 * speedVolt );
//   rInt.move_voltage( -1 * speedVolt );
// }

// void stopInt()
// {
//   lInt.move_voltage(0);
//   rInt.move_voltage(0);
// }

void liftDecisionMaker(bool l1, bool l2)
{
  if (l1)
  {
    dr4b.move_voltage(12000);
  }
  else if (l2)
  {
    dr4b.move_voltage(-6000);
  }

  else
  {
    dr4b.move_voltage(500);
  }
}
