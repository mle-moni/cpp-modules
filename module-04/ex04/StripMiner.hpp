#ifndef STRIPMINER_H
#define STRIPMINER_H

#include "IMiningLaser.hpp"
#include <iostream>

class StripMiner: public IMiningLaser
{
private:
	/* data */
public:
	StripMiner();
	StripMiner(const StripMiner& obj);
	~StripMiner();
	StripMiner& operator=(const StripMiner& obj);

	void mine(IAsteroid*);
};

#endif