/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : rectangle.h
Description : Contains declaration of the Rectangle class, derived from the
    Polygon class for Problem 3 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include "polygon.h"

class Rectangle : public Polygon
{
public:
    Rectangle(double Width, double Height);
    double getArea() const override;
};