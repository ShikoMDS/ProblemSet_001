/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : spell.h
Description : Contains declaration of the SpellAreaEffect class for
	Problem 4 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

class SpellAreaEffect
{
public:
	SpellAreaEffect(double Dimension);
	double getDimension() const;
	virtual double calculateArea() const = 0;

protected:
	double Dimension;
};