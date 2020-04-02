#include "Pony.hpp"


Pony::Pony(const std::string pony_name)
{
	name = pony_name;
	speed = 0;
	is_running = false;
}

Pony::~Pony()
{
}

void	Pony::run(int pony_speed)
{
	if (pony_speed < 0) {
		return ;
	}
	if (pony_speed == 0) {
		stop();
		return ;
	}
	is_running = true;
	speed = pony_speed;
	std::cout << name << " is now running at " << speed << " mph!\n";
}

void	Pony::stop(void)
{
	if (!is_running) {
		std::cout << name << " is not running.\n";
		return ;
	}
	is_running = false;
	speed = 0;
	std::cout << name << " stopped running.\n";
}

void	Pony::neigh(void)
{
	std::cout << name << ": HIIIII!!!\n";
}