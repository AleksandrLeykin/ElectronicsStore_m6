#pragma once

//����������� ����� ������������

class ElectricalEquipment
{
public:
	ElectricalEquipment(int yearOfMan) : m_yearOfManufacture(yearOfMan) {}
	ElectricalEquipment() {}

	virtual void show() = 0; //���������� ������������
	virtual void buyEquipment() = 0; //������ ������������
	virtual ~ElectricalEquipment() = default;

	int m_yearOfManufacture; //��� ������� ������������
};