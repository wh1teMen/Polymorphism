#include <iostream>
#include <string>
#include <memory>

#include "Header.hpp"


int main()
{
    //получить список растений
	auto place = Init();
	
	Backpack playerBackpack;

	//перебрать все растения
	for (auto &plant : *place) {
		std::cout << "i'm near of " << plant->getName() << '\n';
		while (plant->muchHarvest()) {
			playerBackpack.push_back(plant->harvest());
		}
		std::cout << "now i have " << playerBackpack.size() << " items\n";
		std::cout << "harvest in world - " << Harvest::howMuch() << '\n';
	}

	//ну мы же на абум скидывали всё в рюкзак
	std::random_shuffle(playerBackpack.begin(), playerBackpack.end());
	
	//сообщить что нашёл
	for (const auto &item:playerBackpack) {
		std::cout << "i found " << item->getName() << " it's " <<
			item->type() << '\n';
	}

}