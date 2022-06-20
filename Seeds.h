#ifndef SEEDS_H
#define SEEDS_H


#include "Harvest.hpp"

class Seeds :public Harvest {
public:
	Seeds() :Harvest("Seed") {
	}

private:
	void setName(const char* name) {
		Harvest::setName(name);
	}
};


#endif //SEEDS_HPP
