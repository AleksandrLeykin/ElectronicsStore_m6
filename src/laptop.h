#pragma once

#include "monitor.h"
#include "systemUnit.h"

class Laptor final : public Monitor, SystemUnit
{
public:
	Laptor(const std::string& name, int yearOfMan, int diagonal, double weight, int screen,
	       const std::string& processor, int disk, int RAM, double price);

	void show() override;
	void buyEquipment() override;

};