#include "Zombie.hpp"

Zombie::Zombie(void)
{
	name = randomName();
	type = "melee";
}

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

std::string	Zombie::randomName(void)
{
	const int		NAMES_NUMBER = 12;
	std::string		z_names[NAMES_NUMBER];
	int				random_int;

	z_names[0] = "Arf";
	z_names[1] = "Erf";
	z_names[2] = "Irf";
	z_names[3] = "Orf";
	z_names[4] = "Urf";
	z_names[5] = "Yrf";

	z_names[6] = "Chak";
	z_names[7] = "Chep";
	z_names[8] = "Chip";
	z_names[9] = "Chop";
	z_names[10] = "Chup";
	z_names[11] = "Chyp";

	random_int = std::rand();
	return (z_names[random_int % NAMES_NUMBER]);
}