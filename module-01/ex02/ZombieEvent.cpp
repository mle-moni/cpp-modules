#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
	zombie_type = "melee";
	std::srand(std::time(NULL));
}

ZombieEvent::~ZombieEvent()
{

}

void	ZombieEvent::setZombieType(std::string z_type)
{
	zombie_type = z_type;
}

Zombie	*ZombieEvent::newZombie(std::string z_name)
{
	return (new Zombie(z_name, zombie_type));
}

Zombie	*ZombieEvent::randomChump(void)
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
	return (newZombie(z_names[random_int % NAMES_NUMBER]));
}
