#include <iostream>
#include "Appliances.h"
using namespace std;

Appliances::Appliances(string appliancesName, string appliansecManufacturer) : _appliancesName(appliancesName), _appliansecManufacturer(appliansecManufacturer)
{
}

Appliances::Appliances(string appliansecManufacturer) : _appliansecManufacturer(appliansecManufacturer)
{
}

Appliances::~Appliances()
{}

void Appliances::Show()
{
	cout << " �������� " << _appliancesName << " �ந�����⥫� " << _appliansecManufacturer << endl;
}

Refrigerator::Refrigerator(string appliancesName, string appliansecManufacturer, int countShelf) : Appliances(appliancesName, appliansecManufacturer), _countShelf(countShelf)
{
}

void Refrigerator::Show()
{
	cout << " �������� " << _appliancesName << " �ந�����⥫� " << _appliansecManufacturer << " ������⢮ ����� " << _countShelf << endl;

}

Refrigerator::~Refrigerator()
{}

Washingmachine::Washingmachine(string appliancesName, string appliansecManufacturer, int countMoud) : Appliances(appliancesName, appliansecManufacturer), _countMoud(countMoud)
{
}

void Washingmachine::Show()
{
	cout << " �������� " << _appliancesName << " �ந�����⥫� " << _appliansecManufacturer << " ������⢮ ०���� " << _countMoud << endl;
}

Washingmachine::~Washingmachine()
{}