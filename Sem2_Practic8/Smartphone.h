#pragma once
#include <string>
#include <iostream>
#include "Price.h"
#include "Memory.h"
using namespace std;
enum class Manufacturer {
    APPLE, SAMSUNG, XIAOMI, HTC, TECNO, UNDEFINED
};
enum class Color {
    WHITE, GRAY, BLACK, BLUE, RED, GOLD, SILVER, UNDEFINED
};
enum class OS {
    ANDROID, IOS, WINDOWS, UNDEFINED
};
enum class CPU {
    SNAPDRAGON, APPLE, DIMENSITY, UNDEFINED
};
class Smartphone {
private:
    string model;  
    Manufacturer manufacturer;  
    Color color;
    float displaySize;  
    Memory ram, storage;
    CPU cpu;  
    OS os;  
    Price price;
public:
    Smartphone();
    Smartphone(string model, Price price, Manufacturer manufacturer,
        Color color, float displaySize, Memory ram,
        Memory storage, CPU cpu, OS os);
    string getModel() const;
    Manufacturer getManufacturer() const;
    Color getColor() const;
    float getDisplay() const;
    Memory getRAM() const;
    Memory getStorage() const;
    CPU getCPU() const;
    OS getOS() const;
    Price getPrice() const;
    void setPrice(Price price);
    void Print();
};

string toString(Manufacturer manufacturer);
string toString(Color color);
string toString(OS os);
string toString(CPU cpu);
