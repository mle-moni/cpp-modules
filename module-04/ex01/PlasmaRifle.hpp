#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle: public virtual AWeapon
{
private:

public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& obj);
	~PlasmaRifle();
	PlasmaRifle& operator=(const PlasmaRifle& obj);

	void attack() const;
};

#endif