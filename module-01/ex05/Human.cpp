#include "Human.hpp"

Human::Human(void) : brain(110)
{
	name = "Bob"; // default name is bob 
	std::cout << "Hey, I'm " << name << " I have a QI of: " << brain.getIQ() << "\n";
}

Human::Human(std::string h_name) : brain(110)
{
	name = h_name;
	std::cout << "Hey, I'm " << name << " I have a QI of: " << brain.getIQ() << "\n";
}

Human::~Human()
{

}

std::string		Human::identify(void)
{
	return (brain.identify());
}

const Brain&			Human::getBrain(void)
{
	return (brain);
}
