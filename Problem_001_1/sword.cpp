#include "sword.h"
#include <iostream>

Sword::Sword(const std::string& Name, int Damage, double Sharpness, double BladeLength) 
	: Weapon(Name, Damage), Sharpness(Sharpness), BladeLength(BladeLength) {}

void Sword::display() const 
{
    Weapon::display();
    std::cout << "Sharpness: " << Sharpness << "\nBlade Length (cm): " << BladeLength << "\n" << std::endl;
}