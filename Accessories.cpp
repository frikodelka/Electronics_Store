// Module 6, Yurkina Marya

#include "Accessories.h"

Accessories::Accessories(string material) : _material(material)
{
}

void Accessories::ShowSpec()
{
    cout << "Material: " << _material << endl;
}

Cases::Cases(string material, string color) : Accessories(material), _color(color)
{
}

void Cases::ShowSpec()
{
    cout << "Cases:\nMaterial: " << _material << "\n" << "Color: " << _color << endl;
}