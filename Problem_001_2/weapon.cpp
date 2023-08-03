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
