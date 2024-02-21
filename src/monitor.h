#pragma once

#include <string>

#include "electricalEquipment.h"

class Monitor : virtual public ElectricalEquipment
{
public:	
	Monitor(const std::string& name, int yearOfMan, int diagonal, 
		    double weight, int screen, double price);

	void show() override;
	void buyEquipment() override;

protected:
	std::string m_name;
	int m_diagonal;
	double m_weight; //���
	int m_updateScreen; // ���������� ������
	double m_price;
};