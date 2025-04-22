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
inline pros::Optical color(3);
inline pros::ADIDigitalIn colorLimit('E');
inline pros::Distance colorDist(16);
//CLAMP/////////////////////////////////////////
inline pros::ADIDigitalIn clampLimit('C');
inline pros::ADIDigitalOut clampP('A');
//DOINKER/////////////////////////////////////
inline pros::ADIDigitalOut doinkerP('D');
//LB/////////////////////////////////////////
inline pros::Motor LBR(-2);
inline pros::Motor LBL(1);
