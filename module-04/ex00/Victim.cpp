#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(const char* p_name)
{
	name = p_name;
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::Victim(const Victim& obj)
{
	name = obj.name;
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

Victim& Victim::operator=(const Victim& obj)
{
	std::cout << "Victim " << name << " just died for no apparent reason!\n";
	name = obj.name;
	std::cout << "Some random victim called " << name << " just appeared!\n";
	return (*this);
}

const std::string&	Victim::getName() const
{
	return(name);
}

void				Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!\n";
}

std::ostream& operator<<(std::ostream& stream, const Victim& obj)
{
	stream << "I'm " << obj.getName() << ", and I like otters!\n";
	return (stream);
}
