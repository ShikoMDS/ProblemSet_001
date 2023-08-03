/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : weapon.h
Description : Contains declaration of the Weapon class, derived from the
	Item class for Problem 5 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include "item.h"

class Weapon : public Item
{
public:
    Weapon();
    virtual ~Weapon();
};
