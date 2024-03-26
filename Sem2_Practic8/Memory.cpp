#include "Memory.h"
Memory::Memory() {
	value = 0;
	unit = Unit::B;
}
Memory::Memory(double value, Unit unit) {
	if (value < 0 || value > DBL_MAX)
		value = 0;
	this->value = value;
	this->unit = unit;
}
double Memory::getValue() const{
	return value;
}
Unit Memory::getUnit() const{
	return unit;
}
void Memory::setValue(double value){ 
	if (value < 0 || value > DBL_MAX)
		value = 0;
	this->value = value;
}
void Memory::ConvertTo(Unit unit){ 
	if (this->unit == unit) {
		return;
	}
	int pow1, pow2;
	pow1 = pow(2, static_cast<int>(this->unit));
	pow2 = pow(2, static_cast<int>(unit));
	value *= pow1;
	value /= pow2;
	this->unit = unit;
}
std::string toString(Unit unit) {
	std::string s;
	switch (unit)
	{
	case Unit::B:
		s += "B";
		break;
	case Unit::KB:
		s += "KB";
		break;
	case Unit::MB:
		s += "MB";
		break;
	case Unit::GB:
		s += "GB";
		break;
	case Unit::TB:
		s += "TB";
		break;
	default:
		break;
	}
	return s;
}
