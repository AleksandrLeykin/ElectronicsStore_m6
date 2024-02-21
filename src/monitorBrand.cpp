#include "monitorBrand.h"

#include <iostream>

Monitor_LG::Monitor_LG(const std::string& name, int yearOfMan, int diagonal,
	                   double weight, int screen, double price)
	: ElectricalEquipment(yearOfMan), Monitor(name, yearOfMan, diagonal, weight, screen, price)
{
}

void Monitor_LG::show()
{
	std::cout << "����� ���� �������: " << m_name
		      << "\n�������� ��������������:\n"
		      << "��� �������: " << m_yearOfManufacture
		      << "\n���������: " << m_diagonal << " ������!"
		      << "\n���: " << m_weight
		      << "\n������� ������: " << m_updateScreen
			  << "\n����: " << m_price << std::endl;
}

void Monitor_LG::buyEquipment()
{
	std::cout << "������� �����: " << m_name << " ������� �  " << m_yearOfManufacture
		      << " ���� ����� ������ ��� ���: " << m_price << std::endl;
}


Monitor_Samsung::Monitor_Samsung(const std::string& name, int yearOfMan, int diagonal, 
	                             double weight, int screen, double price)
	: ElectricalEquipment(yearOfMan), Monitor(name, yearOfMan, diagonal, weight, screen, price)
{
}

void Monitor_Samsung::show()
{
	std::cout << "����� ���� �������: " << m_name
		<< "\n�������� ��������������:\n"
		<< "��� �������: " << m_yearOfManufacture
		<< "\n���������: " << m_diagonal << " ������!"
		<< "\n���: " << m_weight
		<< "\n������� ������: " << m_updateScreen
		<< "\n����: " << m_price << std::endl;
}

void Monitor_Samsung::buyEquipment()
{
	std::cout << "������� �����: " << m_name << " ������� �  " << m_yearOfManufacture
		      << " ���� ����� ������ ��� ���: " << m_price << std::endl;
}