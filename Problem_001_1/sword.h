#pragma once

#include "weapon.h"

class Sword : public Weapon 
{
public:
    Sword(const std::string& Name, int Damage, double Sharpness, double BladeLength);
    void display() const;

private:
    double Sharpness;
    double BladeLength;
};