#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& obj)
{
	(void)obj;
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ...\n";
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& obj)
{
	(void)obj;
	std::cout << "I’ll be back ...\n";
	std::cout << "* teleports from space *\n";
	return (*this); // no properties to change
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !\n";
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout <<"* attacks with chainfists *\n";
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}
