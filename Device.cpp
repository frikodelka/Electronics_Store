// Module 6, Yurkina Marya

#include "Device.h"
Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
    cout << "Battery Life: " << _batteryLife << endl;
}

Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
{
}

void Player::ShowSpec()
{
    cout << "Player:\nBattery Life: " << _batteryLife << "\n" << "Total Tracks: " << _totalTracks << endl;
}

Smart::Smart(int batteryLife, int memory, short sim) : Device(batteryLife), _memory(memory), _sim(sim)
{
}

void Smart::ShowSpec()
{
    cout << "Smart:\nBattery Life: " << _batteryLife << "\n" << "Memory: " << _memory << "\n" << "SIM: " << _sim << endl;
}

Camera::Camera(int batteryLife, int mpx) : Device(batteryLife), _mpx(mpx)
{
}

void Camera::ShowSpec()
{
    cout << "Camera:\nBattery Life: " << _batteryLife << "\n" << "Camera mpx: " << _mpx << endl;
}

Laptop::Laptop(int batteryLife, float diagonal) : Device(batteryLife), _diagonal(diagonal)
{
}

void Laptop::ShowSpec()
{
    cout << "Laptop:\nBattery Life: " << _batteryLife << "\n" << "Diagonal: " << _diagonal << endl;
}  