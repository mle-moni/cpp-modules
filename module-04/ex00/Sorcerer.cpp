#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(const char* p_name, const char* p_title)
{
	name = p_name;
	title = p_title;
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer& obj)
{
	name = obj.name;
	title = obj.title;
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer& Sorcerer::operator=(const Sorcerer& obj)
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
	name = obj.name;
	title = obj.title;
	std::cout << name << ", " << title << ", is born!\n";
	return (*this);
}

const std::string&	Sorcerer::getName() const
{
	return (name);
}

const std::string&	Sorcerer::getTitle() const
{
	return (title);
}

void				Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& stream, const Sorcerer& obj)
{
	stream << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!\n";
	return (stream);
}
