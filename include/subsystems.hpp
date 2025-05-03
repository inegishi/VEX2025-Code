#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');


//INTAKE////////////////////////////////////////
inline pros::Motor intakeBot(13);
inline pros::Motor intakeTop(12);
inline pros::Optical colorSensor(3);
inline pros::Distance colorDist(16);
//CLAMP/////////////////////////////////////////
inline pros::adi::DigitalIn clampLimit('C');
inline pros::adi::DigitalOut clampP('A');
inline pros::adi::DigitalOut doinkerP('D');
//LB/////////////////////////////////////////
inline pros::Motor LBR(-2);
inline pros::Motor LBL(1);
