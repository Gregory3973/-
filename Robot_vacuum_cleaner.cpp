#include "Robot_vacuum_cleaner.h"
#include <iostream>
using namespace std;

Robot_vacuum_cleaner::Robot_vacuum_cleaner(string deviceName, int battaryLife, string appliansecManufacturer, int countMoud) : Device(deviceName, battaryLife), Appliances (appliansecManufacturer), _countMoud(countMoud)
{
}

void Robot_vacuum_cleaner::Show()
{
	cout << " �������� " << _deviceName << "���� ࠡ��� ����२ " << _battaryLife << " �ந�����⥫� " << _appliansecManufacturer << "������⢮ ०����" << _countMoud << endl;
}

Robot_vacuum_cleaner::~Robot_vacuum_cleaner ()
{}