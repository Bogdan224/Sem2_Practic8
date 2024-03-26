#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>
using namespace std;
Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addSmartphone("iPhone 12 Pro", Price(123.214), Manufacturer::APPLE,
        Color::WHITE, 6, Memory(3,Unit::GB), Memory(64, Unit::GB), CPU::APPLE, OS::IOS);
    catalog.addSmartphone("iPhone 12 Pro", Price(102), Manufacturer::APPLE,
        Color::WHITE, 6, Memory(3, Unit::GB), Memory(128, Unit::GB), CPU::APPLE, OS::IOS);
    catalog.addSmartphone("iPhone 12 Pro", Price(98), Manufacturer::APPLE,
        Color::BLUE, 6, Memory(3, Unit::GB), Memory(64, Unit::GB), CPU::APPLE, OS::IOS);
    return catalog;
}
int main(int argc, char* argv[]) {
    Catalog catalog = InitializeCatalog();
    Smartphone whatBuyerLikes{ "iphone 12 pro", 0, Manufacturer::APPLE,
    Color::WHITE, 0 , 0, 0, CPU::UNDEFINED, OS::UNDEFINED };
    vector<Smartphone> results = catalog.search(whatBuyerLikes);
    if (!results.empty()) {
        cout << "You might like this:" << endl;
        for (Smartphone s : results) {
            s.Print();
        }
    }
    else cout << "Sorry, we have nothing for you.";

    return 0;
}