#ifndef GRASS_HPP
#define GRASS_HPP

#include "Plant.hpp"
#include "Seed.h"

class Grass :public Plant {
public:
	Grass() :Plant("Grass", 5) { }
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Seed>();
	}
};


#endif 