#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: virtual public IMateriaSource
{
private:
	int			_index;
	AMateria*	_inventory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& obj);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& obj);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif