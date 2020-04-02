#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string		type;
public:
	Weapon(std::string w_type);
	~Weapon();

	const std::string&	getType(void) const;
	void				setType(std::string new_type);
};

#endif