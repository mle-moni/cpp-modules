#ifndef ASTEROID_H
#define ASTEROID_H

#include "IAsteroid.hpp"
#include <iostream>

class Asteroid: public IAsteroid
{
private:
	std::string		_name;
public:
	Asteroid();
	Asteroid(const Asteroid& obj);
	~Asteroid();
	Asteroid& operator=(const Asteroid& obj);

	std::string beMined(StripMiner*) const;
	std::string beMined(DeepCoreMiner*) const;

	std::string getName() const;
};

#endif