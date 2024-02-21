#pragma once

#include <string>

#include "monitor.h"

class Monitor_LG final : public Monitor
{
public:
	Monitor_LG(const std::string& name, int yearOfMan, int diagonal,
		double weight, int screen, double price);

	void show() override;
	void buyEquipment() override;	
};

class Monitor_Samsung final : public Monitor
{
public:
	Monitor_Samsung(const std::string& name, int yearOfMan, int diagonal, 
		            double weight, int screen, double price);

	void show() override;
	void buyEquipment() override;	
};

