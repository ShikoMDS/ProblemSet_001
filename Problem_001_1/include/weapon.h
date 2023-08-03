/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : weapon.h
Description : Contains declaration of the Weapon class for Problem 1 of
	Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include <string>

class Weapon 
{
protected:
    std::string Name;
    int Damage;

public:
    Weapon(const std::string& Name, int Damage);
    void display() const;
};