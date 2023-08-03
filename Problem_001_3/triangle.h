#pragma once

#include "polygon.h"

class Triangle : public Polygon 
{
public:
    Triangle(double Width, double Height);
    double getArea() const override;
};