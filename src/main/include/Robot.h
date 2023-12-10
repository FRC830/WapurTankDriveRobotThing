// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>

#include "TankDrive.h"
/*
#include <frc/Compressor.h>
#include <frc/Solenoid.h>
*/


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
  void Drive();
  void ElevatorOperation(int deadzone);


 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
  
  TankDrive drive;
  //frc::Solenoid bob = frc::Solenoid(5, frc::PneumaticsModuleType::CTREPCM, 7);
  //frc::Compressor comp = frc::Compressor(6, frc::PneumaticsModuleType::CTREPCM);
  // rev::CANSparkMax mL = rev::CANSparkMax(0, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // motor lefty
  // rev::CANSparkMax mR = rev::CANSparkMax(1, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // motor righty
  //rev::CANSparkMax elmo = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless); // elevator motor
  // frc::XboxController pilot{0}; //Driver Controller
};