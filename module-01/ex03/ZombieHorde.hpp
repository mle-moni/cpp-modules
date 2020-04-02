#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int		ZOMBIE_NUMBER;
	Zombie	*zombies;
public:
	ZombieHorde(const int z_number);
	~ZombieHorde();
	void		announce(void);
};

#endif