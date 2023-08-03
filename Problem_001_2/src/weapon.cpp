/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : weapon.cpp
Description : Contains the implementation of the Weapon class for Problem 2
	of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "weapon.h"
#include <iostream>

Weapon::Weapon(const std::string& Name, int Damage) : Name(Name), Damage(Damage) {}

std::string Weapon::getName() const 
{
    return Name;
}

int Weapon::getDamage() const 
{
    return Damage;
}

void Weapon::setName(const std::string& Name) 
{
	this->Name = Name;
}

void Weapon::setDamage(int Damage) 
{
    this->Damage = Damage;
}

void Weapon::display() const 
{
    std::cout << "Weapon: " << Name << "\nDamage: " << Damage << "\n" << std::endl;
}
