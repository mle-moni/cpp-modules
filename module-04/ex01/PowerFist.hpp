#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist: public virtual AWeapon
{
private:

public:
	PowerFist();
	PowerFist(const PowerFist& obj);
	~PowerFist();
	PowerFist& operator=(const PowerFist& obj);

	void attack() const;
};

#endif