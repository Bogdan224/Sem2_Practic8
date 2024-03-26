#pragma once
#include <math.h>
#include <limits>
#include <string>

enum class Unit
{
	B = 0, KB = 10, MB=20, GB=30, TB=40
};

class Memory
{
private:
	double value;
	Unit unit;
public:
	Memory();
	Memory(double value, Unit unit = Unit::B);
	double getValue() const;
	Unit getUnit() const;
	void setValue(double price);
	void ConvertTo(Unit unit);
};

std::string toString(Unit unit);
