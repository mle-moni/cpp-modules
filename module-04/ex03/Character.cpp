#include "Character.hpp"

Character::Character()
{
}

Character::Character(const std::string& name): _name(std::string(name)), _index(0)
{
	_inventory[0] = nullptr;
	_inventory[1] = nullptr;
	_inventory[2] = nullptr;
	_inventory[3] = nullptr;
}

Character::Character(const Character& obj): _name(std::string(obj._name)), _index(obj._index)
{
	for (int i = 0; i < 4; i++) {
		if (obj._inventory[i]) {
			_inventory[i] = obj._inventory[i]->clone();
		} else {
			_inventory[i] = nullptr;
		}
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
		_inventory[i] = nullptr;
	}
}

Character& Character::operator=(const Character& obj)
{
	_name = obj._name;
	_index = obj._index;
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
		if (obj._inventory[i]) {
			_inventory[i] = obj._inventory[i]->clone();
		} else {
			_inventory[i] = nullptr;
		}
	}
	return (*this);
}

std::string const &		Character::getName() const
{
	return (_name);
}

void					Character::equip(AMateria* m)
{
	if (_index > 3) {
		std::cout << "Inventory full!\n";
		return ;
	}
	_inventory[_index++] = m;
}

void					Character::unequip(int idx)
{
	if (idx < 0 || idx > 3) {
		std::cerr << "Error: bad index\n";
		return ;
	}
	if (_inventory[idx]) {
		for (int i = idx; i < 3; i++) {
			_inventory[i] = _inventory[i + 1];
		}
		_inventory[3] = nullptr;
		_index--;
	}
}

void					Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !(_inventory[idx])) {
		std::cerr << "Error: bad index\n";
		return ;
	}
	_inventory[idx]->use(target);
}
