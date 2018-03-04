/*
Bergur I Johansen	-	bein1600

*/
#ifndef COFFEE_H
#define COFFEE_H
#include "Drink.h"
// Concrete component
class Coffee : public Drink
{
public:
	void do_it() override
	{
		std::cout << "Coffee";
	}
};



#endif // !Coffee