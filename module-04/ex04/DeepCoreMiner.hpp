#ifndef DEEPCOREMINER_H
#define DEEPCOREMINER_H

#include "IMiningLaser.hpp"
#include <iostream>

class DeepCoreMiner: public IMiningLaser
{
private:
	/* data */
public:
	DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner& obj);
	~DeepCoreMiner();
	DeepCoreMiner& operator=(const DeepCoreMiner& obj);

	void mine(IAsteroid*);
};

#endif