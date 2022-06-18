#pragma once
#include "Device.h"
#include <iostream>
#include "Appliances.h"
#include <string>
using namespace std;

class Robot_vacuum_cleaner  : virtual public Device, Appliances
{
public:
	Robot_vacuum_cleaner(string deviceName, int battaryLife, string appliansecManufacturer, int countMoud);
	~Robot_vacuum_cleaner();

	void Show() override;

protected:

	int _countMoud;
};
