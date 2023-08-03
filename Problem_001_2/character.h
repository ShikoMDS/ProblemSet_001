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