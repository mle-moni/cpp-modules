#ifndef COMET_H
#define COMET_H

#include "IAsteroid.hpp"
#include <iostream>

class Comet: public IAsteroid
{
private:
	std::string		_name;
public:
	Comet();
	Comet(const Comet& obj);
	~Comet();
	Comet& operator=(const Comet& obj);

	std::string beMined(StripMiner*) const;
	std::string beMined(DeepCoreMiner*) const;

	std::string getName() const;
};

#endif