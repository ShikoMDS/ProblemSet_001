#include "triangle.h"

Triangle::Triangle(double Width, double Height) : Polygon(Width, Height) {}

double Triangle::getArea() const
{
    return 0.5 * Width * Height;
}
