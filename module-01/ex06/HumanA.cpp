#include "HumanA.hpp"

HumanA::HumanA(std::string h_name, Weapon& h_weapon) : weapon(h_weapon)
{
	name = h_name;
}

HumanA::~HumanA()
{
}

void		HumanA::attack(void)
{
	// NAME attacks with his WEAPON_TYPE
	std::cout << name << " attacks with his " << weapon.getType() << "\n";
}
