#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	name;
	int			ap;
	AWeapon		*weapon;
	Character();
public:
	Character(std::string const & p_name);
	~Character();
	Character(const Character& obj);
	Character&	operator=(const Character& obj);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const& getName() const;
	int					getAP() const;
	const AWeapon		*getWeapon() const;
};

std::ostream&	operator<<(std::ostream& stream, const Character& obj);

#endif