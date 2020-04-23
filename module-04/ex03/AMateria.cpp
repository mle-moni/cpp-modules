#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type):
_xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria& obj):
_xp(obj._xp), _type(obj._type)
{
}

AMateria::~AMateria()
{
}

AMateria&			AMateria::operator=(const AMateria& obj)
{
	_xp = obj._xp;
	_type = obj._type;
	return (*this);
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}

unsigned int		AMateria::getXP() const
{
	return (_xp);
}

std::string const &	AMateria::getType() const
{
	return (_type);
}
