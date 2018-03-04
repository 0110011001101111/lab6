/*
Bergur I Johansen	-	bein1600

*/
#ifndef CHOCOLATE_H
#define CHOCOLATE_H
#include "Drink.h"
// Concrete component
class Chocolate : public Drink
{
public:
	void do_it() override
	{
		std::cout << "Chocolate";
	}
};



#endif // !Chocolate