#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle !\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine& obj)
{
	(void)obj;
	std::cout << "Tactical Marine ready for battle !\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine& obj)
{
	(void)obj;
	std::cout << "Aaargh ...\n";
	std::cout << "Tactical Marine ready for battle !\n";
	return (*this); // no properties to change
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !\n";
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}
