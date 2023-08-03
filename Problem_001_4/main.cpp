/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : main.cpp
Usage : Entry point for Problem 4 of Problem Set 1.
Description : This program creates spell instances by taking in a dimension
	parameter, then calls the calculateArea function to print its area of
	effect.
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include <iostream>
#include "spell.h"
#include "circle.h"
#include "square.h"

int main()
{
    SpellAreaEffect* CircleSpell1 = new CircleAreaEffect(5.0);
    SpellAreaEffect* SquareSpell1 = new SquareAreaEffect(4.0);

    std::cout << "Circle Area: " << CircleSpell1->calculateArea() << std::endl;
    std::cout << "Square Area: " << SquareSpell1->calculateArea() << std::endl;

    delete CircleSpell1;
    delete SquareSpell1;

    return 0;
}
