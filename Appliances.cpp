// Module 6, Yurkina Marya

#include "Appliances.h"
Appliances::Appliances(int weight) : _weight(weight)
{
}

void Appliances::ShowSpec()
{
    cout << "Weight: " << _weight << endl;
}

Washing::Washing(int weight, int container) : Appliances(weight), _container(container)
{
}

void Washing::ShowSpec()
{
    cout << "Washing:\nWeight: " << _weight << "\n" << "Container: " << _container << " kg" << endl;
}

Vacuum::Vacuum(int weight, int suctionPower) : Appliances(weight), _suctionPower(suctionPower)
{
}

void Vacuum::ShowSpec()
{
    cout << "Vacuum:\nWeight: " << _weight << "\n" << "Suction power: " << _suctionPower << endl;
}

DishWasher::DishWasher(int weight, int numberModes) : Appliances(weight), _numberModes(numberModes)
{
}

void DishWasher::ShowSpec()
{
    cout << "DishWasher:\nWeight: " << _weight << "\n" << "Number modes: " << _numberModes << endl;
}

Microwave::Microwave(int weight, int power) : Appliances(weight), _power(power)
{
}

void Microwave::ShowSpec()
{
    cout << "Microwave:\nWeight: " << _weight << "\n" << "Power: " << _power << endl;
}
