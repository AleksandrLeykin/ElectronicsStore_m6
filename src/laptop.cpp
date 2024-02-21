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
	std::cout << "����� ���� �������: " << m_name
		<< "\n�������� ��������������:\n"
		<< "��� �������: \t" << m_yearOfManufacture
		<< "\n���������: \t" << m_diagonal << " ������!"
		<< "\n���: \t\t" << m_weight << " ��"
		<< "\n������� ������: " << m_updateScreen
		<< "\n���������: \t" << m_processor
		<< "\n����� �����: \t" << m_disk�apacity << " Tb "
		<< "\n����� RAM: \t" << m_amountOfRAM << " Gb "
		<< "\n����: \t\t" << Monitor::m_price << std::endl;
}

void Laptor::buyEquipment()
{
	std::cout << "������� �����: " << m_name << " ������� �  " << m_yearOfManufacture
		<< " ���� ����� ������ ��� ���: " << Monitor::m_price << std::endl;
}
