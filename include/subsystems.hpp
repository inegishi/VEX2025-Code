#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn('A');


//INTAKE////////////////////////////////////////
inline pros::Motor intakeBot(6);
inline pros::Motor intakeTop(-12);
inline pros::Optical colorSensor(3);
inline pros::Distance colorDist(16);
//CLAMP/////////////////////////////////////////
inline pros::adi::DigitalIn clampLimit('E');
inline pros::adi::DigitalOut clampP('C');
inline pros::adi::DigitalOut pistonC('H');
inline pros::adi::DigitalOut doinkerR('A'); ///RIGHT ONE (MAIN)
inline pros::adi::DigitalOut Tipdoinker('F');  //LEFT


//LB/////////////////////////////////////////
inline pros::Motor LBR(-2);
inline pros::Motor LBL(1);
