#include <iostream>
#include "ZombieEvent.hpp"

int		main(void)
{
	const int		Z_NUMBER = 5;
	ZombieEvent		generator;
	Zombie			*zombies[Z_NUMBER];
	zombies[0] = generator.newZombie("Bruce");
	generator.setZombieType("range");
	zombies[1] = generator.newZombie("Bernard");
	generator.setZombieType("melee");
	zombies[2] = generator.newZombie("Roger");
	zombies[3] = generator.randomChump();
	zombies[4] = generator.randomChump();

	for (int i = 0; i < Z_NUMBER; i++) {
		if (i == 3) {
			std::cout << "\nRandom names:\n\n";
		}
		zombies[i]->announce();
		delete zombies[i];
	}
}
