#pragma once

class SpellAreaEffect
{
public:
	SpellAreaEffect(double Dimension);
	double getDimension() const;
	virtual double calculateArea() const = 0;

protected:
	double Dimension;
};