// Module 6, Yurkina Marya

#pragma once
#include "IElectronics.h"

class Accessories : virtual public IElectronics
{
public:
    Accessories(string material);
    void ShowSpec() override;

protected:
    string _material;
};

class Cases : public Accessories
{
public:
    Cases(string material, string color);
    void ShowSpec() override;
private:
    string _color;
};

