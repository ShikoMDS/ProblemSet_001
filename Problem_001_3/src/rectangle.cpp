/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : rectangle.cpp
Description : Contains the implementation of the Rectangle class for
	Problem 3 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "rectangle.h"

Rectangle::Rectangle(double Width, double Height) : Polygon(Width, Height) {}

double Rectangle::getArea() const
{
    return Width * Height;
}
