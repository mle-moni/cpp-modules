#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon*		weapon;
public:
	HumanB(std::string h_name);
	~HumanB();

	void		attack(void);
	void		setWeapon(Weapon& weapon_ref);
};

#endif