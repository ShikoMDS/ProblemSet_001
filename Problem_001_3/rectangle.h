#pragma once

#include "polygon.h"

class Rectangle : public Polygon
{
public:
    Rectangle(double Width, double Height);
    double getArea() const override;
};