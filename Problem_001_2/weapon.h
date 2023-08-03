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