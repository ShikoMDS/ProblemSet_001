#include "weapon.h"
#include <iostream>

Weapon::Weapon(const std::string& Name, int Damage) : Name(Name), Damage(Damage) {}

void Weapon::display() const
{
	std::cout << "Name: " << Name << "\nDamage: " << Damage << std::endl;
}