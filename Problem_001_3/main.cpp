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
