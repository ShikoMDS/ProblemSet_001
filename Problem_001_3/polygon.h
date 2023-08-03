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