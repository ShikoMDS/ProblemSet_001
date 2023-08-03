/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : triangle.cpp
Description : Contains the implementation of the Triangle class for
	Problem 3 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include "triangle.h"

Triangle::Triangle(double Width, double Height) : Polygon(Width, Height) {}

double Triangle::getArea() const
{
    return 0.5 * Width * Height;
}
