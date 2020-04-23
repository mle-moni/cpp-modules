#include "Comet.hpp"

Comet::Comet(): _name("Comet")
{
}

Comet::Comet(const Comet& obj): _name(obj._name)
{
}

Comet::~Comet()
{
}

Comet&			Comet::operator=(const Comet& obj)
{
	_name = obj._name;
	return (*this);
}

std::string 	Comet::getName() const
{
	return (_name);
}

std::string		Comet::beMined(StripMiner *miner) const
{
	(void)miner;
	return ("Tartarite");
}

std::string		Comet::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return ("Meium");
}
