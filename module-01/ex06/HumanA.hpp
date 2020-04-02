#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon&		weapon;
public:
	HumanA(std::string h_name, Weapon& h_weapon);
	~HumanA();

	void		attack(void);
};

#endif