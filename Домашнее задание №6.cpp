#include "IElectronic.h"
#include"Device.h"
#include "Appliances.h"
#include "Robot_vacuum_cleaner.h"
#include <iostream>
using namespace std;

int main()
{
	IElectronic* mass[5];

	mass[0] = new Player("Sony", "Japan", 100, 3000);
	mass[1] = new Telephone("Samsung", "Korea", 2000, " S5");
	mass[2] = new Refrigerator("Birusa", "Russia", 5);
	mass[3] = new Washingmachine("Bosh", "Germany", 20);
	mass[4] = new Robot_vacuum_cleaner("Xiaomy", 20, "Korea", 5);


	bool open = true;

	while (open)
	{
		int choise;
		cout << " Введите число от 1 до 5 чтобы выбрать электронику какую хотите просмотреть: : " << endl;
		cout << " 1 - Плейер , 2 - Телефон, 3 - Холодильник , 4 - Стиральная машина, 5 - Робот пылесос, 0 - чтобы выйти " << endl;
		cin >> choise;

		switch (choise)
		{
		case 1:
			mass[0]->Show();
			break;


		case 2:

			mass[1]->Show();
			break;

		case 3:

			mass[2]->Show();
			break;

		case 4:

			mass[3]->Show();
			break;

		case 5:

			mass[4]->Show();
			break;


		case 0:
			return 0;


		default:

			cout << "Введите значения из предложенных " << endl;
			break;

		}
	}

	delete mass[0];
	delete mass[1];
	delete mass[2];
	delete mass[3];
	delete mass[4];

	return 0;
}
