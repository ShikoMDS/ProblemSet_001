/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : weapon.cpp
Description : Contains the implementation of the Weapon class for Problem 1
	of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "weapon.h"
#include <iostream>

Weapon::Weapon(const std::string& Name, int Damage) : Name(Name), Damage(Damage) {}

void Weapon::display() const
{
	std::cout << "Name: " << Name << "\nDamage: " << Damage << std::endl;
}