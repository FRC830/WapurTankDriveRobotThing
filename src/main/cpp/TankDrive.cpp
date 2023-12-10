#include "TankDrive.h"

void TankDrive::Drive(){
  int deadzone = 0.3;
  // d.ArcadeDrive(pilot.GetLeftY()/2, pilot.GetRightX()/2, true);
  if (pilot.GetLeftY() > deadzone) {
    if (pilot.GetLeftBumper()){
        d.ArcadeDrive(((pilot.GetLeftY()) + deadzone) / (1 - deadzone)/2,  pilot.GetRightX()/2, false);
    }
    
    else{
      d.ArcadeDrive(((pilot.GetLeftY()) + deadzone) / (1 - deadzone), pilot.GetRightX()/2, false);
    }
  }
  else if(pilot.GetLeftY() < -deadzone) {
    if (pilot.GetLeftBumper()){
        d.ArcadeDrive(((pilot.GetLeftY()) - deadzone) / (1 - deadzone)/2,  pilot.GetRightX()/2, false);
    }
    
    else{
      d.ArcadeDrive(((pilot.GetLeftY()) - deadzone) / (1 - deadzone), pilot.GetRightX()/2, false);
    }
  }
  }
  // mL.Set(pilot.GetLeftX());
  // mR.Set(pilot.GetRightX());