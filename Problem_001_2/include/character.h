/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : character.h
Description : Contains declaration of the Character class for Problem 2
	of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include <string>
#include "weapon.h"

class Character
{
public:
    Character(const std::string& Name, const std::string& WeaponName, int WeaponDamage);

    // Getter functions
    std::string getName() const;
    const Weapon& getWeapon() const;

    // Setter functions
    void setName(const std::string& Name);
    void setWeapon(const std::string& WeaponName, int WeaponDamage);

    void displayWeapon() const;

private:
    std::string Name;
    Weapon Weapon_;
};