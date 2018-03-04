/*
Bergur I Johansen	-	bein1600

*/
#ifndef CREAM_H
#define CREAM_H
#include "Decorator.h"

// Concrete decorator
class Cream : public Decorator
{
public:
	Cream(std::shared_ptr<Drink>drink) : Decorator(drink) {}

	void do_it() override
	{
		Decorator::do_it();
		std::cout << "+cream";
	}
};



#endif // !Cream