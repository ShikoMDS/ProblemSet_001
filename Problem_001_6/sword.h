#pragma once

#include "weapon.h"
#include "augmentation.h"

class Sword : public Weapon
{
public:
    Sword();
    ~Sword() override;

private:
    Augmentation Augmentation;
};
