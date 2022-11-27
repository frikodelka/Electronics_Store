// Module 6, Yurkina Marya

#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
public:
    Device(int batteryLife);
    virtual void ShowSpec() override;

protected:
    int _batteryLife;
};

class Player : public Device
{
public:
    Player(int batteryLife, int totalTracks);
    void ShowSpec() override;
private:
    int _totalTracks;
};

class Smart : public Device
{
public:
    Smart(int batteryLife, int memory, short sim);
    void ShowSpec() override;
private:
    int _memory;
    short _sim;
};

class Camera : public Device
{
public:
    Camera(int batteryLife, int mpx);
    void ShowSpec() override;
private:
    int _mpx;
};

class Laptop : public Device
{
public:
    Laptop(int batteryLife, float diagonal);
    void ShowSpec() override;
private:
    float _diagonal;
};