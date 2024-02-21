#include "monitorBrand.h"

#include <iostream>

Monitor_LG::Monitor_LG(const std::string& name, int yearOfMan, int diagonal,
	                   double weight, int screen, double price)
	: ElectricalEquipment(yearOfMan), Monitor(name, yearOfMan, diagonal, weight, screen, price)
{
}

void Monitor_LG::show()
{
	std::cout << "Перед Вами монитор: " << m_name
		      << "\nОсновные характеристики:\n"
		      << "Год выпуска: " << m_yearOfManufacture
		      << "\nдиогональ: " << m_diagonal << " дюймов!"
		      << "\nвес: " << m_weight
		      << "\nчастота кадров: " << m_updateScreen
			  << "\nЦена: " << m_price << std::endl;
}

void Monitor_LG::buyEquipment()
{
	std::cout << "Хороший выбор: " << m_name << " Выпущен в  " << m_yearOfManufacture
		      << " году будет стоить для Вас: " << m_price << std::endl;
}


Monitor_Samsung::Monitor_Samsung(const std::string& name, int yearOfMan, int diagonal, 
	                             double weight, int screen, double price)
	: ElectricalEquipment(yearOfMan), Monitor(name, yearOfMan, diagonal, weight, screen, price)
{
}

void Monitor_Samsung::show()
{
	std::cout << "Перед Вами монитор: " << m_name
		<< "\nОсновные характеристики:\n"
		<< "Год выпуска: " << m_yearOfManufacture
		<< "\nдиогональ: " << m_diagonal << " дюймов!"
		<< "\nвес: " << m_weight
		<< "\nчастота кадров: " << m_updateScreen
		<< "\nЦена: " << m_price << std::endl;
}

void Monitor_Samsung::buyEquipment()
{
	std::cout << "Хороший выбор: " << m_name << " Выпущен в  " << m_yearOfManufacture
		      << " году будет стоить для Вас: " << m_price << std::endl;
}