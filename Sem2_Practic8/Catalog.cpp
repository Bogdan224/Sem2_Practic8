#include "Catalog.h"
#include <algorithm>
void Catalog::addSmartphone(string model, Price price, Manufacturer
    manufacturer,
    Color color, float displaySize, Memory ram,
    Memory storage, CPU cpu, OS os) {
    smartphones.push_back(Smartphone{ model, price, manufacturer,
      color, displaySize, ram,
      storage, cpu, os });
}
Smartphone Catalog::getSmartphone(string model) {
    transform(model.begin(), model.end(), model.begin(), tolower);
    for (Smartphone s : smartphones) {
        string currModel = s.getModel();
        transform(currModel.begin(), currModel.end(), currModel.begin(),
            tolower);
            if (currModel == model)
                return s;
    }  return Smartphone();
}
vector<Smartphone> Catalog::search(const Smartphone& searchSmartphone) {
    vector<Smartphone> results;
    for (Smartphone s : smartphones) {
        string model = searchSmartphone.getModel();
        transform(model.begin(), model.end(), model.begin(), tolower);
        string model2 = s.getModel();
        transform(model2.begin(), model2.end(), model2.begin(), tolower);
        if (!model.empty() && model != model2) continue;
        Manufacturer manufacturer = searchSmartphone.getManufacturer();
        if (manufacturer != Manufacturer::UNDEFINED && manufacturer !=
            s.getManufacturer()) continue;
        Color color = searchSmartphone.getColor();
        if (color != Color::UNDEFINED && color != s.getColor()) continue;
        float displaySize = searchSmartphone.getDisplay();
        if (displaySize > 0 && displaySize != s.getDisplay()) continue;
        Memory ram = searchSmartphone.getRAM();
        if (ram.getValue() > 0 && ram.getValue() != s.getRAM().getValue()) continue;
        Memory storage = searchSmartphone.getStorage();
        if (storage.getValue() > 0 && storage.getValue() != s.getStorage().getValue()) continue;
        CPU cpu = searchSmartphone.getCPU();
        if (cpu != CPU::UNDEFINED && cpu != s.getCPU()) continue;
        OS os = searchSmartphone.getOS();
        if (os != OS::UNDEFINED && os != s.getOS()) continue;
        results.push_back(s);
    }  return results;
}