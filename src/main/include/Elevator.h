#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>

class Elevator{
    public:
        void ElevatorOperation(int deadzone);
    
    private:
        frc::XboxController pilot2{1};
        rev::CANSparkMax elmo = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // elevator motor
};