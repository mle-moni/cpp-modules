#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::StripMiner(const StripMiner& obj)
{
	(void)obj;
}

StripMiner::~StripMiner()
{
}

StripMiner&	StripMiner::operator=(const StripMiner& obj)
{
	(void)obj;
	return (*this);
}

void		StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining... got " << asteroid->beMined(this) << "! *\n";
}
