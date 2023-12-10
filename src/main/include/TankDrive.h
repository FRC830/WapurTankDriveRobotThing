#pragma once
#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>

class TankDrive{
    public: 
        TankDrive() {
            mR.SetInverted(true);
        }
        void Drive();

    private:     
        rev::CANSparkMax mL1 = rev::CANSparkMax(3, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // motor lefty
        rev::CANSparkMax mL2 = rev::CANSparkMax(4, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // motor lefty
        rev::CANSparkMax mR1 = rev::CANSparkMax(1, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // motor righty
        rev::CANSparkMax mR2 = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // motor righty
        frc::MotorControllerGroup mL{mL1, mL2};
        frc::MotorControllerGroup mR{mR1, mR2};
        frc::XboxController pilot{0};
        frc::DifferentialDrive d{mL, mR};
};