#pragma once

#include "spell.h"

class SquareAreaEffect : public SpellAreaEffect
{
public:
    SquareAreaEffect(double Dimension);
    double calculateArea() const override;
};
