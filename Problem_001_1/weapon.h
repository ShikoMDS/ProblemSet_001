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