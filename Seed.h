#ifndef SEED_HPP
#define SEED_HPP

#include "Harvest.hpp"


class Seed : public Harvest {
public:
	Seed() :Harvest("seed") { }
	//const char *type() {
	//	return Harvest::getName();
	//}
private:
	void setName(const char* name) {
		Harvest::setName(name);
	}
};


#endif 
