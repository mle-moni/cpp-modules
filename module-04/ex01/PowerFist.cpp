#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon(std::string("Power Fist"), 8, 50)
{
}

PowerFist::PowerFist(const PowerFist& obj)
{
	setName(obj.getName());
	setCost(obj.getAPCost());
	setDamage(obj.getDamage());
}

PowerFist::~PowerFist()
{
}

PowerFist& PowerFist::operator=(const PowerFist& obj)
{
	setName(obj.getName());
	setCost(obj.getAPCost());
	setDamage(obj.getDamage());
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}
