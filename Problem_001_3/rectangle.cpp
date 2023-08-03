#include "rectangle.h"

Rectangle::Rectangle(double Width, double Height) : Polygon(Width, Height) {}

double Rectangle::getArea() const
{
    return Width * Height;
}
