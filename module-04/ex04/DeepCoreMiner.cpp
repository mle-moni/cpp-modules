#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner& obj)
{
	(void)obj;
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner&	DeepCoreMiner::operator=(const DeepCoreMiner& obj)
{
	(void)obj;
	return (*this);
}

void			DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* mining deep... got " << asteroid->beMined(this) << "! *\n";
}
