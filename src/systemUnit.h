#pragma once

#include <string>

#include "electricalEquipment.h"

class SystemUnit : virtual public ElectricalEquipment
{
public:
	SystemUnit(int yearOfMan, const std::string& companyName, const std::string& processor, 
		       int disk, int RAM, double price);
	SystemUnit(const std::string& processor, int disk, int RAM)
		: m_processor(processor), m_diskСapacity(disk), m_amountOfRAM(RAM) {};

	void show() override;
	void buyEquipment() override;

protected:
	std::string m_companyName;
	std::string m_processor;
	int m_diskСapacity; //емкость диска
	int m_amountOfRAM; // объем оперативной памяти
	double m_price;
};