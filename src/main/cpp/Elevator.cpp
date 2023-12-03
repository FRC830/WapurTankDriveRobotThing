#include "Elevator.h"


void Elevator::ElevatorOperation(int deadzone)
{
  if (pilot2.GetLeftBumper())
  {
      if (pilot2.GetLeftY() > deadzone)
    {
      elmo.Set((-(pilot2.GetLeftY()) + deadzone) / (1 - deadzone) * 0.2);
    }
    else if(pilot2.GetLeftY() < deadzone) {
      elmo.Set((pilot2.GetLeftY() - deadzone)/(1 - deadzone) * 0.2);
    }
  }
  else
  {
    if (pilot2.GetLeftY() > deadzone)
    {
      elmo.Set((-(pilot2.GetLeftY()) + deadzone) / (1 - deadzone));
    }
    else if(pilot2.GetLeftY() < deadzone) 
    {
      elmo.Set((pilot2.GetLeftY() - deadzone)/(1 - deadzone));
    }
  }
}