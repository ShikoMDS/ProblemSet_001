/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : weapon.h
Description : Contains declaration of the Weapon class for Problem 2 of
	Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include <string>

class Weapon
{
public:
    Weapon(const std::string& Name, int Damage);

    // Getter functions
    std::string getName() const;
    int getDamage() const;

    // Setter functions
    void setName(const std::string& Name);
    void setDamage(int Damage);

    void display() const;

private:
    std::string Name;
    int Damage;
};