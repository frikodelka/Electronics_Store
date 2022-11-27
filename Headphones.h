#pragma once

#include "IElectronics.h"
#include "Device.h"
#include "Accessories.h" 

class Headphones: public Device, Accessories
{
public:
    Headphones(int batteryLife, string material, string type);
    void ShowSpec() override;
private:
    string _type;
};

