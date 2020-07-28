#ifndef C_H
#define C_H

#include "Base.hpp"

class C: public Base
{
private:
	/* data */
public:
	C();
	C(const C& obj);
	~C();
	C& operator=(const C& obj);
};

#endif