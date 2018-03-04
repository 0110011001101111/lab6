/*
Bergur I Johansen	-	bein1600

*/
#ifndef MILK_H
#define MILK_H
#include "Decorator.h"

// Concrete decorator
class Milk : public Decorator
{
public:
	Milk(std::shared_ptr<Drink>drink) : Decorator(drink) {}

	void do_it() override
	{
		Decorator::do_it();
		std::cout << "+milk";
	}
};



#endif // !Milk