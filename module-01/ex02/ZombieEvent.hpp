#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string		zombie_type;
public:
	ZombieEvent(/* args */);
	~ZombieEvent();
	void	setZombieType(std::string z_type);
	Zombie*	newZombie(std::string z_name);
	Zombie*	randomChump(void);
};

#endif