#include "NaiveHuman.hpp"

NaiveHuman::NaiveHuman()
{
}

NaiveHuman::NaiveHuman(const char* p_name): Victim(p_name)
{
	std::cout << "Hi ^^\n";
}

NaiveHuman::NaiveHuman(const NaiveHuman& obj)
{
	name = obj.name;
	std::cout << "Hi ^^\n";
}

NaiveHuman::~NaiveHuman()
{
	std::cout << "Oh no.\n";
}

NaiveHuman& NaiveHuman::operator=(const NaiveHuman& obj)
{
	std::cout << "Oh no.\n";
	name = obj.name;
	std::cout << "Hi ^^\n";
	return (*this);
}

void	NaiveHuman::getPolymorphed() const
{
	std::cout << name << "  has been turned into an horrible spider!\n";
}
