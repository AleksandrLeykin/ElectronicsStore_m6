#include "systemUnit.h"

#include <iostream>

SystemUnit::SystemUnit(int yearOfMan, const std::string& companyName, const std::string& processor, int disk, int RAM, double price)
	: ElectricalEquipment(yearOfMan), m_companyName(companyName), m_processor(processor)
	,m_diskСapacity(disk), m_amountOfRAM(RAM), m_price(price)
{
}

void SystemUnit::show() 
{
	std::cout << "Перед Вами системный блок : " << m_companyName << std::endl;
}

void SystemUnit::buyEquipment()
{
	std::cout << "Хороший выбор: " << std::endl;
}
