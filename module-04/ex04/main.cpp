#include <iostream>
#include "Comet.hpp"
#include "Asteroid.hpp"
#include "MiningBarge.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

int main()
{
	MiningBarge barge;

	Comet			comet;
	Asteroid		asteroid;

	StripMiner		laser1;
	StripMiner		laser2;
	DeepCoreMiner	laser3;
	DeepCoreMiner	laser4;
	StripMiner		laser5;


	std::cout << "Mining with no lasers\n";
	barge.mine(&comet);
	barge.mine(&asteroid);

	barge.equip(&laser1);
	
	std::cout << "Mining with 1 lasers\n";
	barge.mine(&comet);
	barge.mine(&asteroid);

	barge.equip(&laser2);
	barge.equip(&laser3);
	barge.equip(&laser4);
	barge.equip(&laser5);

	std::cout << "\nMining with 4 lasers\n";
	barge.mine(&comet);
	barge.mine(&asteroid);

	MiningBarge copy(barge);
	std::cout << "\nMining with barge copy\n";
	copy.mine(&comet);
	copy.mine(&asteroid);

	MiningBarge assignOperator;
	std::cout << "\nMining with empty barge\n";
	assignOperator.mine(&comet);
	assignOperator.mine(&asteroid);

	assignOperator = barge;
	std::cout << "\nMining with a copy obtained with assign operator\n";
	assignOperator.mine(&comet);
	assignOperator.mine(&asteroid);

	return (0);
}
