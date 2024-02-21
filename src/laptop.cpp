#include "laptop.h"

#include <string>
#include <iostream>

Laptor::Laptor(const std::string& name, int yearOfMan, int diagonal, double weight, int screen, 
	           const std::string& processor, int disk, int RAM, double price)
	: ElectricalEquipment(yearOfMan)
	, Monitor(name, yearOfMan, diagonal, weight, screen, price)
	, SystemUnit(processor, disk, RAM)
{

}

void Laptor::show()
{
	std::cout << "Перед Вами ноутбук: " << m_name
		<< "\nОсновные характеристики:\n"
		<< "Год выпуска: \t" << m_yearOfManufacture
		<< "\nдиогональ: \t" << m_diagonal << " дюймов!"
		<< "\nвес: \t\t" << m_weight << " кг"
		<< "\nчастота кадров: " << m_updateScreen
		<< "\nпроцессор: \t" << m_processor
		<< "\nОбъем диска: \t" << m_diskСapacity << " Tb "
		<< "\nОбъем RAM: \t" << m_amountOfRAM << " Gb "
		<< "\nЦена: \t\t" << Monitor::m_price << std::endl;
}

void Laptor::buyEquipment()
{
	std::cout << "Хороший выбор: " << m_name << " Выпущен в  " << m_yearOfManufacture
		<< " году будет стоить для Вас: " << Monitor::m_price << std::endl;
}
