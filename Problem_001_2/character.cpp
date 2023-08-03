#include "character.h"
#include <iostream>

Character::Character(const std::string& Name, const std::string& WeaponName, int WeaponDamage) : Name(Name), Weapon_(WeaponName, WeaponDamage) {}

std::string Character::getName() const 
{
    return Name;
}

const Weapon& Character::getWeapon() const 
{
    return Weapon_;
}

void Character::setName(const std::string& Name) 
{
    this->Name = Name;
}

void Character::setWeapon(const std::string& WeaponName, int WeaponDamage) 
{
    Weapon_.setName(WeaponName);
    Weapon_.setDamage(WeaponDamage);
}

void Character::displayWeapon() const 
{
    std::cout << Name << std::endl;
    Weapon_.display();
}
