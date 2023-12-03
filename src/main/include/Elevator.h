#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>

//https://prod.liveshare.vsengsaas.visualstudio.com/join?68162CF944289811E97913BED9BA2E6353AD

class Elevator{
    public:
        void ElevatorOperation(int deadzone);
    
    private:
        frc::XboxController pilot2{1};
        rev::CANSparkMax elmo = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // elevator motor
        

};