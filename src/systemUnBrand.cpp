#include "systemUnBrand.h"

#include <iostream>

Block_HP::Block_HP(int yearOfMan, const std::string& companyName, const std::string& processor, int disk, int RAM, double price) 
	: ElectricalEquipment(yearOfMan), SystemUnit(yearOfMan, companyName, processor, disk, RAM, price)
{
}

void Block_HP::show()
{
	std::cout << "����� ���� ��������� ����: " << m_companyName
		<< "\n�������� ��������������:\n"
		<< "��� �������: " << m_yearOfManufacture
		<< "\n�������� �������������: " << m_companyName
		<< "\n���������: \t" << m_processor 
		<< "\n����� �����: \t" << m_disk�apacity << " Tb "
		<< "\n����� RAM: \t" << m_amountOfRAM << " Gb "
		<< "\n����: \t\t" << m_price << std::endl;
}

void Block_HP::buyEquipment()
{
	std::cout << "������� �����: " << m_companyName << " ������� �  " << m_yearOfManufacture
		<< " ���� ����� ������ ��� ���: " << m_price << std::endl;
}
