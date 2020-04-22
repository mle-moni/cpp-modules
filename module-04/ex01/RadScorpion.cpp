#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, std::string("RadScorpion"))
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion& obj)
{
	std::cout << "* click click click *\n";
	setHP(obj.getHP());
	setType(obj.getType());
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion& RadScorpion::operator=(const RadScorpion& obj)
{
	std::cout << "* SPROTCH *\n";
	setHP(obj.getHP());
	setType(obj.getType());
	std::cout << "* click click click *\n";
	return (*this);
}
