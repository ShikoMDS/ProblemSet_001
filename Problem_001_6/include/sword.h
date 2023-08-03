/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : sword.h
Description : Contains declaration of the Sword class, derived from the
    Weapon class for Problem 6 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

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
