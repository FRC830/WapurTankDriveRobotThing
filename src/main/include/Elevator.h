#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>

// https://prod.liveshare.vsengsaas.visualstudio.com/join?C47C0D76BBF094EB3811E324BE0B7DC4892F

class Elevator{
    public:
        void ElevatorOperation(int deadzone);
    
    private:
        frc::XboxController pilot2{1};
        rev::CANSparkMax ElevatorMotor = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // elevator motor
};