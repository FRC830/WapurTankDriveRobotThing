// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>
#include <rev/CANSparkMax.h>
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>
#include <frc/Compressor.h>
#include <frc/Solenoid.h>


class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
  frc::Solenoid bob = frc::Solenoid(69, frc::PneumaticsModuleType::CTREPCM, 69);
  frc::Compressor comp = frc::Compressor(100, frc::PneumaticsModuleType::CTREPCM);
  rev::CANSparkMax mL = rev::CANSparkMax(0, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax mR = rev::CANSparkMax(1, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax jerry = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  frc::XboxController pilot{0};
};