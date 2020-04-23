#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: virtual public ICharacter
{
private:
	std::string		_name;
	AMateria*		_inventory[4];
	int				_index;

	Character();
public:
	Character(const std::string& name);
	Character(const Character& obj);
	~Character();
	Character& operator=(const Character& obj);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif