#pragma once

//Абстрактный класс Оборудование

class ElectricalEquipment
{
public:
	ElectricalEquipment(int yearOfMan) : m_yearOfManufacture(yearOfMan) {}
	ElectricalEquipment() {}

	virtual void show() = 0; //посмотреть оборудование
	virtual void buyEquipment() = 0; //купить оборудование
	virtual ~ElectricalEquipment() = default;

	int m_yearOfManufacture; //год выпуска оборудования
};