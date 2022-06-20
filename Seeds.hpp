#ifndef SEEDS_HPP
#define SEEDS_HPP

#include "Harvest.hpp"


class Seeds : public Harvest {
public:
	Seeds() :Harvest("SEEDS") { }
	//const char *type() {
	//	return Harvest::getName();
	//}
private:
	void setName(const char* name) {
		Harvest::setName(name);
	}
};


#endif // !FRUIT_HPP#pragma once
