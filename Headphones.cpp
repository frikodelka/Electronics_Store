#include "Headphones.h"

Headphones::Headphones(int batteryLife, string material, string type) : Device(batteryLife), Accessories(material), _type(type)
{
}

void Headphones::ShowSpec()
{
    cout << "Headphones:\nBattery Life:  " << _batteryLife << "\n" << "Material: " << _material << "\n" << "Type: " << _type << endl;
}
