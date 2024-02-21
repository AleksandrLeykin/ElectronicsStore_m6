#include "systemUnBrand.h"

#include <iostream>

Block_HP::Block_HP(int yearOfMan, const std::string& companyName, const std::string& processor, int disk, int RAM, double price) 
	: ElectricalEquipment(yearOfMan), SystemUnit(yearOfMan, companyName, processor, disk, RAM, price)
{
}

void Block_HP::show()
{
	std::cout << "Перед Вами системный блок: " << m_companyName
		<< "\nОсновные характеристики:\n"
		<< "Год выпуска: " << m_yearOfManufacture
		<< "\nкомпания производитель: " << m_companyName
		<< "\nпроцессор: \t" << m_processor 
		<< "\nОбъем диска: \t" << m_diskСapacity << " Tb "
		<< "\nОбъем RAM: \t" << m_amountOfRAM << " Gb "
		<< "\nЦена: \t\t" << m_price << std::endl;
}

void Block_HP::buyEquipment()
{
	std::cout << "Хороший выбор: " << m_companyName << " Выпущен в  " << m_yearOfManufacture
		<< " году будет стоить для Вас: " << m_price << std::endl;
}
