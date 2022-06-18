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
	cout << " ��������: " << _deviceName << " �ந�����⥫�: " << _deviceManufacturer << " �६� ࠡ��� ���२ " << _battaryLife << endl;
}


Player::Player(string deviceName, string deviceManufacturer, int battaryLife, int countTrek) : Device(deviceName, deviceManufacturer, battaryLife), _countTrek(countTrek)
{
}

void Player::Show()
{
	cout << " ��������: " << _deviceName << " �ந�����⥫�" << _deviceManufacturer << " �६� ࠡ��� ����२ " << _battaryLife << " �������⢮ �४�� " << _countTrek << endl;
}

Player::~Player()
{}

Telephone::Telephone(string deviceName, string deviceManufacturer, int battaryLife, string marka) : Device(deviceName, deviceManufacturer, battaryLife), _marka(marka)
{
}

void Telephone::Show()
{
	cout << " ��������: " << _deviceName << " �ந�����⥫�" << _deviceManufacturer << " �६� ࠡ��� ����२ " << _battaryLife << "��ઠ" << _marka << endl;
}

Telephone::~Telephone()
{}
