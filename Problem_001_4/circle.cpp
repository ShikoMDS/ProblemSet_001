#include "circle.h"
#include <cmath>

CircleAreaEffect::CircleAreaEffect(const double Dimension) : SpellAreaEffect(Dimension) {}

double CircleAreaEffect::calculateArea() const
{
    return std::acos(-1.0) * std::pow(Dimension / 2.0, 2);
}
