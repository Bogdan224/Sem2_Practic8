#pragma once
#include <string>
#include <float.h>
enum class Currency {
	RUB, USD, EUR, AUD, CAD
};

class Price
{
private:
	double value;
	Currency currency;

	float getIndex(Currency currency) const;
public:
	Price();
	Price(double value, Currency currency = Currency::USD);
	double getValue() const;
	Currency getCurrency() const;
	void setValue(double value);
	void ConvertTo(Currency currency);
};

std::string toString(Currency currency);

