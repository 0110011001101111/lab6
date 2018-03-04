/*
Bergur I Johansen	-	bein1600

*/
#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "Drink.h"
// Concrete component
class Espresso : public Drink
{
public:
	void do_it() override
	{
		std::cout << "Espresso";
	}
};



#endif // !Espresso