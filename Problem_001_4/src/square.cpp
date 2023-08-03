/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : square.cpp
Description : Contains the implementation of the SquareAreaEffect class
	for Problem 4 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "square.h"

SquareAreaEffect::SquareAreaEffect(double Dimension) : SpellAreaEffect(Dimension) {}

double SquareAreaEffect::calculateArea() const
{
    return Dimension * Dimension;
}
