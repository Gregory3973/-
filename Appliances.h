#pragma once
#include <iostream>
#include "IElectronic.h"
using namespace std;

class Appliances : virtual public IElectronic
{
public:
	Appliances(string appliancesName, string appliansecManufacturer);
	Appliances(string appliancesName);
	~Appliances();

	void Show() override;

protected:
	string _appliancesName; 
	string _appliansecManufacturer;
};

class Refrigerator : public Appliances
{
public:
	Refrigerator(string appliancesName, string appliansecManufacturer, int countShelf);
	~Refrigerator();
	void Show() override;

protected:

	int _countShelf;
};

class Washingmachine: public Appliances 
{
public:

	Washingmachine(string appliancesName, string appliansecManufacturer, int countMoud);
	~Washingmachine();
	void Show() override;
	

protected:
	int _countMoud;
};