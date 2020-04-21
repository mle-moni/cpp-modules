#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(const char* p_name): Victim(p_name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon& obj)
{
	name = obj.name;
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon& Peon::operator=(const Peon& obj)
{
	std::cout << "Bleuark...\n";
	name = obj.name;
	std::cout << "Zog zog.\n";
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << name << "  has been turned into a pink pony!\n";
}
