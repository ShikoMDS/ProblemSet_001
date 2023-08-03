/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : sword.h
Description : Contains declaration of the Sword class, derived from the
	Weapon class for Problem 1 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include "weapon.h"

class Sword : public Weapon 
{
public:
    Sword(const std::string& Name, int Damage, double Sharpness, double BladeLength);
    void display() const;

private:
    double Sharpness;
    double BladeLength;
};