#include "TankDrive.h"

void TankDrive::Drive(double leftY, double rightY){
  mL.Set(leftY);
  mR.Set(rightY);
}