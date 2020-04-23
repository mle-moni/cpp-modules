#include "Asteroid.hpp"

Asteroid::Asteroid(): _name("Asteroid")
{
}

Asteroid::Asteroid(const Asteroid& obj): _name(obj._name)
{
}

Asteroid::~Asteroid()
{
}

Asteroid&		Asteroid::operator=(const Asteroid& obj)
{
	_name = obj._name;
	return (*this);
}

std::string 	Asteroid::getName() const
{
	return (_name);
}

std::string		Asteroid::beMined(StripMiner *miner) const
{
	(void)miner;
	return ("Flavium");
}

std::string		Asteroid::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return ("Dragonite");
}
