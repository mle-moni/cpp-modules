#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, std::string("Super Mutant"))
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(const SuperMutant& obj)
{
	std::cout << "Gaaah. Me want smash heads!\n";
	setHP(obj.getHP());
	setType(obj.getType());
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

SuperMutant& SuperMutant::operator=(const SuperMutant& obj)
{
	std::cout << "Aaargh...\n";
	setHP(obj.getHP());
	setType(obj.getType());
	std::cout << "Gaaah. Me want smash heads!\n";
	return (*this);
}

void	SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
