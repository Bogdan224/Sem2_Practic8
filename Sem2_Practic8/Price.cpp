#include "Price.h"

Price::Price() {
	value = 0.0f;
	currency = Currency::USD;
}
Price::Price(double value, Currency currency) {
	if (value < 0 || value > DBL_MAX)
		value = 0;
	this->value = value;
	this->currency = currency;
}
double Price::getValue() const{
	return value;
}
Currency Price::getCurrency() const { 
	return currency;
}
void Price::setValue(double value) {
	if (value < 0 || value > DBL_MAX)
		value = 0;
	this->value = value;
}
float Price::getIndex(Currency currency) const {
	float index;
	switch (currency)
	{
	case Currency::RUB:
		index = 92.8600f;
		break;
	case Currency::USD:
		index = 1.0f;
		break;
	case Currency::EUR:
		index = 0.9222f;
		break;
	case Currency::AUD:
		index = 1.5291f;
		break;
	case Currency::CAD:
		index = 1.3583f;
		break;
	default:
		break;
	}
	return index;
}

void Price::ConvertTo(Currency currency) {
	if (this->currency == currency) {
		return;
	}
	float index1, index2;
	index1 = getIndex(this->currency);
	index2 = getIndex(currency);
	value /= index1;
	value *= index2;
	this->currency = currency;
}

std::string toString(Currency currency) {
	std::string s;
	switch (currency)
	{
	case Currency::RUB:
		s += "RUB";
		break;
	case Currency::USD:
		s += "USD";
		break;
	case Currency::EUR:
		s += "EUR";
		break;
	case Currency::AUD:
		s += "AUD";
		break;
	case Currency::CAD:
		s += "CAD";
		break;
	default:
		break;
	}
	return s;
}
