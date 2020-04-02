#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int z_number)
{
	std::srand(std::time(NULL));
	ZOMBIE_NUMBER = z_number;
	zombies = new Zombie[z_number];
}

ZombieHorde::~ZombieHorde()
{
	delete [] zombies;
}

void		ZombieHorde::announce(void)
{
	for (int i = 0; i < ZOMBIE_NUMBER; i++) {
		zombies[i].announce();
	}
}