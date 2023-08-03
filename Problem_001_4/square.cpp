#include "square.h"

SquareAreaEffect::SquareAreaEffect(double Dimension) : SpellAreaEffect(Dimension) {}

double SquareAreaEffect::calculateArea() const
{
    return Dimension * Dimension;
}
