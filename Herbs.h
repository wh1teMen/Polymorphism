#ifndef HERBS_H
#define HERBS_H

#include "Plant.hpp"
#include "Seeds.h"

class Herbs :public Plant {
public:
	Herbs() :Plant("Herb", 8) {
	}
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Seeds>();
	}
};


#endif // !HERBS_HPP
