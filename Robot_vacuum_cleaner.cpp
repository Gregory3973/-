#include "Robot_vacuum_cleaner.h"
#include <iostream>
using namespace std;

Robot_vacuum_cleaner::Robot_vacuum_cleaner(string deviceName, int battaryLife, string appliansecManufacturer, int countMoud) : Device(deviceName, battaryLife), Appliances (appliansecManufacturer), _countMoud(countMoud)
{
}

void Robot_vacuum_cleaner::Show()
{
	cout << " Название " << _deviceName << "Вермя работы баттареи " << _battaryLife << " Производитель " << _appliansecManufacturer << "Количество режимов" << _countMoud << endl;
}

Robot_vacuum_cleaner::~Robot_vacuum_cleaner ()
{}