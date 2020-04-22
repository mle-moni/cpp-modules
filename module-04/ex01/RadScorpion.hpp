#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion: public virtual Enemy
{
private:
	/* data */
public:
	RadScorpion();
	RadScorpion(const RadScorpion& obj);
	~RadScorpion();
	RadScorpion& operator=(const RadScorpion& obj);
};

#endif