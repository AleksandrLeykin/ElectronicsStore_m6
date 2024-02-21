#pragma once

#include "systemUnit.h"

class Block_HP final : public SystemUnit
{
public:
	Block_HP(int yearOfMan, const std::string& companyName,const std::string& processor, int disk, int RAM, double price);

	void show() override;
	void buyEquipment() override;
};