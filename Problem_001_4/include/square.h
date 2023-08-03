/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : square.h
Description : Contains declaration of the SquareAreaEffect class, derived
    from the SpellAreaEffect class for Problem 4 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include "spell.h"

class SquareAreaEffect : public SpellAreaEffect
{
public:
    SquareAreaEffect(double Dimension);
    double calculateArea() const override;
};
