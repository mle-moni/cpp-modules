#ifndef MININGBARGE_H
#define MININGBARGE_H

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class MiningBarge
{
private:
	IMiningLaser*	_inventory[4];
public:
	MiningBarge();
	MiningBarge(const MiningBarge& obj);
	~MiningBarge();
	MiningBarge& operator=(const MiningBarge& obj);

	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;
};

#endif