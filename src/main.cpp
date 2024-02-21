#include <iostream>

//#include "monitor.h"
#include "monitorBrand.h"
#include "systemUnBrand.h"
#include "laptop.h"

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");
	
	ElectricalEquipment* electrical[4];	
	electrical[0] = new Monitor_LG("LG 65NANO766QA", 2022, 18, 3.4, 75, 280.60);
	electrical[1] = new Monitor_Samsung("Samsung UE43AU7002UXRU", 2023, 19, 3.4, 100, 300.99);
	electrical[2] = new Block_HP(2023, "HP", "intel", 2, 16, 600.66);
	electrical[3] = new Laptor("DELL", 2021, 17, 2.1, 75, "AMD", 1, 8, 450);

	bool open = true;
	while (open)
	{
		std::cout << "Выбирете товар:\n1 - монитор LG" 
			      << "\n2 - монитор Samsung"
			      << "\n3 - смстемный блок HP"
			      << "\n4 - ноутбук DELL"
			      << "\n0 - чтобы выйти"
			      << std::endl;
		char choice;
		std::cin >> choice;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		switch (choice)
		{
		case '1':
			electrical[0]->show();
			electrical[0]->buyEquipment();
			break;
		case '2':
			electrical[1]->show();
			electrical[1]->buyEquipment();
			break;
		case '3':
			electrical[2]->show();
			electrical[2]->buyEquipment();
			break;
		case '4' :
			electrical[3]->show();
			electrical[3]->buyEquipment();
			break;
		case '0':
			open = false;
			break;
		default:
			std::cout << "Выберите товар от 1 до 4 или 0, чтобы выйти" << std::endl;
			break;
		}
		std::cout << "\n----------------------------" << std::endl;
	}
	
	delete electrical[0];
	delete electrical[1];
	delete electrical[2];
	delete electrical[3];

	return 0;
}