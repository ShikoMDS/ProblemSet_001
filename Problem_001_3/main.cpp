/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : main.cpp
Usage : Entry point for Problem 3 of Problem Set 1.
Description : This program creates Polygon instances by taking in two
    parameters for width and height, then calls the getArea function to
	print its area.
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

#include <iostream>
#include "polygon.h"
#include "triangle.h"
#include "rectangle.h"

int main()
{
    Polygon* Poly1 = new Rectangle(4.0, 5.0);
    Polygon* Poly2 = new Triangle(3.0, 6.0);

    std::cout << "Rectangle Area: " << Poly1->getArea() << std::endl;
    std::cout << "Triangle Area: " << Poly2->getArea() << std::endl;

    delete Poly1;
    delete Poly2;

    return 0;
}
