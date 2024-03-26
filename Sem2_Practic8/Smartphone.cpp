#include "Smartphone.h"
Smartphone::Smartphone() {
	this-> model = "";  this-> price = 0;
	this-> manufacturer = Manufacturer::UNDEFINED;
	this-> color = Color::UNDEFINED;
	this-> displaySize = 0;  this-> ram = 0;
	this-> storage = 0;
	this-> cpu = CPU::UNDEFINED;  this-> os = OS::UNDEFINED;
}
Smartphone::Smartphone(string model, double price, Manufacturer
	manufacturer,
	Color color, float displaySize, int ram,
	int storage, CPU cpu, OS os) {
	this-> model = model;  this-> price = price;
	this-> manufacturer = manufacturer;
	this-> color = color;
	this-> displaySize = displaySize;  this-> ram = ram;
	this-> storage = storage;
	this-> cpu = cpu;  this-> os = os;
}
string Smartphone::getModel() const {
	return model;
}
Manufacturer Smartphone::getManufacturer() const {
	return manufacturer;
}
float Smartphone::getDisplay() const {
	return displaySize;
}
Color Smartphone::getColor() const {
	return color;
}
int Smartphone::getRAM() const {
	return ram;
}
int Smartphone::getStorage() const {
	return storage;
}
CPU Smartphone::getCPU() const {
	return cpu;
}
OS Smartphone::getOS() const {
	return os;
}
double Smartphone::getPrice() const {
	return price;
}
void Smartphone::setPrice(double price) {
	this->price = price;
}

string toString(Manufacturer manufacturer) {
	string s = "Manufacturer: ";
	switch (manufacturer)
	{
	case Manufacturer::APPLE:
		s+= "Apple\n";
		break;
	case Manufacturer::SAMSUNG:
		s += "Samsung\n";
		break;
	case Manufacturer::XIAOMI:
		s += "Xiaomi\n";
		break;
	case Manufacturer::HTC:
		s += "HTC\n";
		break;
	case Manufacturer::TECNO:
		s += "Tecno\n";
		break;
	case Manufacturer::UNDEFINED:
		s += "Undefined\n";
		break;
	default:
		break;
	}
	return s;
}
string toString(Color color) {
	string s = "Color: ";
	switch (color)
	{
	case Color::WHITE:
		s += "White\n";
		break;
	case Color::GRAY:
		s+= "Gray\n";
		break;
	case Color::BLACK:
		s+= "Black\n";
		break;
	case Color::BLUE:
		s+= "Blue\n";
		break;
	case Color::RED:
		s+= "Red\n";
		break;
	case Color::GOLD:
		s+= "Gold\n";
		break;
	case Color::SILVER:
		s += "Silver\n";
		break;
	case Color::UNDEFINED:
		s+= "Undefined\n";
		break;
	default:
		break;
	}
	return s;
}
string toString(OS os) {
	string s = "OS: ";
	switch (os)
	{
	case OS::ANDROID:
		s+= "Android\n";
		break;
	case OS::IOS:
		s+= "IOs\n";
		break;
	case OS::WINDOWS:
		s += "Windows\n";
		break;
	case OS::UNDEFINED:
		s+= "Udefined\n";
		break;
	default:
		break;
	}
	return s;
}
string toString(CPU cpu) {
	string s = "CPU: ";
	switch (cpu)
	{
	case CPU::SNAPDRAGON:
		s += "Snapdragon\n";
		break;
	case CPU::APPLE:
		s+= "Apple\n";
		break;
	case CPU::DIMENSITY:
		s += "Dimensity\n";
		break;
	case CPU::UNDEFINED:
		s+= "Undefined\n";
		break;
	default:
		break;
	}
	return s;
}

void Smartphone::Print() {
	cout << toString(manufacturer);
	cout << model << endl;
	cout << "Price: " << price << endl;
	cout << toString(color);
	cout << "Display: " << displaySize << endl;
	cout << toString(os);
	cout << ram << "Gb RAM, " << storage
		<< " GB storage" << endl;
	cout << toString(cpu);
}
