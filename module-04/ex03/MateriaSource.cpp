#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _index(0)
{
	_inventory[0] = nullptr;
	_inventory[1] = nullptr;
	_inventory[2] = nullptr;
	_inventory[3] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& obj): _index(obj._index)
{
	for (int i = 0; i < 4; i++) {
		if (obj._inventory[i]) {
			_inventory[i] = obj._inventory[i]->clone();
		} else {
			_inventory[i] = nullptr;
		}
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
		_inventory[i] = nullptr;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj)
{
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

void			MateriaSource::learnMateria(AMateria *materia)
{
	if (_index > 3) {
		std::cout << "Can't learn more materia!\n";
		return ;
	}
	_inventory[_index++] = materia;
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] && _inventory[i]->getType() == type) {
			return (_inventory[i]->clone());
		}
	}
	std::cout << "This type of materia is still unknown\n";
	return (nullptr);
}
