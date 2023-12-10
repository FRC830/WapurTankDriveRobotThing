#include "TankDrive.h"

void TankDrive::Drive(){
  d.ArcadeDrive(pilot.GetLeftY()/2, pilot.GetRightX()/2, true);
  // mL.Set(pilot.GetLeftX());
  // mR.Set(pilot.GetRightX());
}