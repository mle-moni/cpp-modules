#include "Ice.hpp"

Ice::Ice(): AMateria(std::string("ice"))
{
}

Ice::Ice(const Ice& obj): AMateria(obj)
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice& obj)
{
	(void)obj;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
