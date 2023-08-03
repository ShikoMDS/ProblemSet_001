/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : triangle.h
Description : Contains declaration of the Triangle class, derived from the
    Polygon class for Problem 3 of Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

#include "polygon.h"

class Triangle : public Polygon 
{
public:
    Triangle(double Width, double Height);
    double getArea() const override;
};