// Module 6, Yurkina Marya

#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
    Appliances(int weight);
    void ShowSpec() override;

protected:
    int _weight;
};

class Washing : public Appliances
{
public:
    Washing(int weight, int container);
    void ShowSpec() override;
private:
    int _container;
};

class Vacuum : public Appliances
{
public:
    Vacuum(int weight, int suctionPower);
    void ShowSpec() override;
private:
    int _suctionPower;
};

class DishWasher : public Appliances
{
public:
    DishWasher(int weight, int numberModes);
    void ShowSpec() override;
private:
    int _numberModes;
};

class Microwave : public Appliances
{
public:
    Microwave(int weight, int power);
    void ShowSpec() override;
private:
    int _power;
};

