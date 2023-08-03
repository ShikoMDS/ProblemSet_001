/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : main.cpp
Usage : Entry point for Problem 2 of Problem Set 1.
Description : This program creates character instances by taking in
	parameters, then calls the displayWeapon function to print its
	properties.
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "character.h"

int main()
{
    Character Wizard("Wizard", "Staff", 4);
    Character Rogue("Rogue", "Dagger", 5);
    Character Archer("Archer", "Bow", 3);
    Character Soldier("Soldier", "Sword", 6);

    Wizard.displayWeapon();
    Rogue.displayWeapon();
    Archer.displayWeapon();
    Soldier.displayWeapon();

    return 0;
}
