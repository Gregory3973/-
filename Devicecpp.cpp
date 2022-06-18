#include "Device.h"
#include <iostream>
using namespace std;


Device::Device(string deviceName, string deviceManufacturer, int battaryLife) : _deviceName(deviceName), _deviceManufacturer(deviceManufacturer), _battaryLife(battaryLife)
{
}

Device::Device(string deviceName, int battaryLife) : _deviceName(deviceName), _battaryLife(battaryLife)
{
}

Device::~Device()
{}


void Device::Show()
{
	cout << " Название: " << _deviceName << " Производитель: " << _deviceManufacturer << " Время работы батареи " << _battaryLife << endl;
}


Player::Player(string deviceName, string deviceManufacturer, int battaryLife, int countTrek) : Device(deviceName, deviceManufacturer, battaryLife), _countTrek(countTrek)
{
}

void Player::Show()
{
	cout << " Название: " << _deviceName << " Производитель" << _deviceManufacturer << " Время работы баттареи " << _battaryLife << " Колиичество треков " << _countTrek << endl;
}

Player::~Player()
{}

Telephone::Telephone(string deviceName, string deviceManufacturer, int battaryLife, string marka) : Device(deviceName, deviceManufacturer, battaryLife), _marka(marka)
{
}

void Telephone::Show()
{
	cout << " Название: " << _deviceName << " Производитель" << _deviceManufacturer << " Время работы баттареи " << _battaryLife << "Марка" << _marka << endl;
}

Telephone::~Telephone()
{}
