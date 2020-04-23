#include "Cure.hpp"

Cure::Cure(): AMateria(std::string("cure"))
{
}

Cure::Cure(const Cure& obj): AMateria(obj)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure& obj)
{
	(void)obj;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
