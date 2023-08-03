/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : spell.cpp
Description : Contains the implementation of the SpellAreaEffect class
	for Problem 4 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "spell.h"

SpellAreaEffect::SpellAreaEffect(double Dimension) : Dimension(Dimension) {}

double SpellAreaEffect::getDimension() const
{
    return Dimension;
}
