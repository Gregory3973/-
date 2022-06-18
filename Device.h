#pragma once
#include "IElectronic.h"
#include <string>
using namespace std;

class Device : virtual public IElectronic
{
public:
	
	Device(string deviceName, string deviceManufacturer, int battaryLife);
	Device(string deviceName, int battaryLife);
	~Device();
	
	void Show() override;

protected:
	string _deviceName;
	string _deviceManufacturer;
	int _battaryLife;
};

class Player : public Device
{
public:
	Player(string deviceName, string deviceManufacturer, int _battaryLife, int countTrek);
	~Player();
	void Show() override;

protected:
	int _countTrek;
};

class Telephone : public Device
{
public:
	Telephone(string deviceName, string deviceManufacturer, int battaryLife, string marka);
	~Telephone();
	void Show() override;

protected:
	string _marka;
};
