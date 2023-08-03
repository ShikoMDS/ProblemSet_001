#include "spell.h"

SpellAreaEffect::SpellAreaEffect(double Dimension) : Dimension(Dimension) {}

double SpellAreaEffect::getDimension() const
{
    return Dimension;
}
