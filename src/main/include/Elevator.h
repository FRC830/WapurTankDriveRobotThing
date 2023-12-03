#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>

// https://prod.liveshare.vsengsaas.visualstudio.com/join?C47C0D76BBF094EB3811E324BE0B7DC4892F

class Elevator{
    public:
        Elevator(frc::XboxController elpilot2);
        void ElevatorOperation();
    private:
        rev::CANSparkMax ElevatorMotor = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // elevator motor
        int deadzone = 0.3;
        frc::XboxController elpilot;
};