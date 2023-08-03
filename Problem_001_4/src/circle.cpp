/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : circle.cpp
Description : Contains the implementation of the CircleAreaEffect class
	for Problem 4 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "circle.h"
#include <cmath>

CircleAreaEffect::CircleAreaEffect(const double Dimension) : SpellAreaEffect(Dimension) {}

double CircleAreaEffect::calculateArea() const
{
    return std::acos(-1.0) * std::pow(Dimension / 2.0, 2);
}
