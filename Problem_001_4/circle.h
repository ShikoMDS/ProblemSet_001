#pragma once

#include "spell.h"

class CircleAreaEffect : public SpellAreaEffect
{
public:
    CircleAreaEffect(double Dimension);
    double calculateArea() const override;
};
