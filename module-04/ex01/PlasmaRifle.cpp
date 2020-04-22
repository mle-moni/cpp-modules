#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon(std::string("Plasma Rifle"), 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& obj)
{
	setName(obj.getName());
	setCost(obj.getAPCost());
	setDamage(obj.getDamage());
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& obj)
{
	setName(obj.getName());
	setCost(obj.getAPCost());
	setDamage(obj.getDamage());
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
