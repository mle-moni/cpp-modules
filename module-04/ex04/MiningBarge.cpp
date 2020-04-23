#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	_inventory[0] = nullptr;
	_inventory[1] = nullptr;
	_inventory[2] = nullptr;
	_inventory[3] = nullptr;
}
MiningBarge::MiningBarge(const MiningBarge& obj)
{
	// simple copy of pointer, no deep copy
	_inventory[0] = obj._inventory[0];
	_inventory[1] = obj._inventory[1];
	_inventory[2] = obj._inventory[2];
	_inventory[3] = obj._inventory[3];
}

MiningBarge::~MiningBarge()
{
}

MiningBarge&	MiningBarge::operator=(const MiningBarge& obj)
{
	// simple copy of pointer, no deep copy
	_inventory[0] = obj._inventory[0];
	_inventory[1] = obj._inventory[1];
	_inventory[2] = obj._inventory[2];
	_inventory[3] = obj._inventory[3];
	return (*this);
}

void			MiningBarge::equip(IMiningLaser* laser)
{
	for (int i = 0; i < 4; i++) {
		if (_inventory[i]) {
			continue ;
		}
		_inventory[i] = laser;
		return ;
	}
	std::cout << "This mining barge is already full of lasers!\n";
}

void			MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == nullptr) {
			return ;
		}
		_inventory[i]->mine(asteroid);
	}
}
