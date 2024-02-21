#include "monitor.h"
#include <iostream>

Monitor::Monitor(const std::string& name, int yearOfMan, int diagonal,
	             double weight, int screen, double price)
	: m_name(name), ElectricalEquipment(yearOfMan), m_diagonal(diagonal)
	, m_weight(weight), m_updateScreen(screen), m_price(price)
{
}

void Monitor::show()
{
	std::cout << "Перед Вами монитор: " << m_name << std::endl;
}

void Monitor::buyEquipment()
{
	std::cout << "Хороший выбор: " << std::endl;
}
