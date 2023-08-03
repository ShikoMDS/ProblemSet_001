/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : sword.cpp
Description : Contains the implementation of the Sword class for Problem 1
	of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "sword.h"
#include <iostream>

Sword::Sword(const std::string& Name, int Damage, double Sharpness, double BladeLength) 
	: Weapon(Name, Damage), Sharpness(Sharpness), BladeLength(BladeLength) {}

void Sword::display() const 
{
    Weapon::display();
    std::cout << "Sharpness: " << Sharpness << "\nBlade Length (cm): " << BladeLength << "\n" << std::endl;
}