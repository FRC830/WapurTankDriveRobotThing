#include "Elevator.h"
//deadzone


void Elevator::ElevatorOperation() {
  if (elpilot.GetLeftBumper())
  {
      if (elpilot.GetLeftY() > deadzone)
    {
      ElevatorMotor.Set((-(elpilot.GetLeftY()) + deadzone) / (1 - deadzone) * 0.2);
    }
    else if(elpilot.GetLeftY() < deadzone) {
      ElevatorMotor.Set((elpilot.GetLeftY() - deadzone)/(1 - deadzone) * 0.2);
    }
  }
  else
  {
    if (elpilot.GetLeftY() > deadzone)
    {
      ElevatorMotor.Set((-(elpilot.GetLeftY()) + deadzone) / (1 - deadzone));
    }
    else if(elpilot.GetLeftY() < deadzone) 
    {
      ElevatorMotor.Set((elpilot.GetLeftY() - deadzone)/(1 - deadzone));
    }
  }
}