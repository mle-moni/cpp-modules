#include "Zombie.hpp"

Zombie::Zombie(std::string z_name, std::string z_type)
{
	name = z_name;
	type = z_type;
}

Zombie::~Zombie()
{
	
}

void	Zombie::announce(void)
{
	// <name (type)> Braiiiiiiinnnssss...
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss...\n";
}
