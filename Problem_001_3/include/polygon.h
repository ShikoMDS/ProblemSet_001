/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : polygon.h
Description : Contains declaration of the Polygon class for Problem 3 of
	Problem Set 1
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#pragma once

class Polygon
{
public:
    Polygon(double Width, double Height);
    virtual double getArea() const = 0;

protected:
    double Width;
    double Height;
};