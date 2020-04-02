#include "HumanB.hpp"

HumanB::HumanB(std::string h_name)
{
	name = h_name;
	weapon = NULL;
}

HumanB::~HumanB()
{

}

void		HumanB::attack(void)
{
	if (!weapon) {
		std::cout << name << " cannot attack (he has no weapon)\n";
	}
	// NAME attacks with his WEAPON_TYPE
	std::cout << name << " attacks with his " << weapon->getType() << "\n";
}

void		HumanB::setWeapon(Weapon& weapon_ref)
{
	weapon = &weapon_ref;
}
