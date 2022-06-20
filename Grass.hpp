#pragma once
#include "Plant.hpp"
#include "Seeds.hpp"

class Grass :public Plant
{
public:
	Grass() :Plant("grass", 30) {}
	Harvest::uPoiner harvest()
	{
		decreaseHarvest();
		return std::make_unique<Seeds>();
	}
};

