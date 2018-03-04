/*
Bergur I Johansen	-	bein1600

*/
#ifndef DECORATOR_H
#define DECORATOR_H
#include "Drink.h"

// Decorator (has an instance of component)
class Decorator : public Drink
{
private:
	std::shared_ptr<Drink> drink;
public:
	Decorator(std::shared_ptr<Drink>drink) : drink(drink) {}
	void do_it() override
	{
		drink->do_it();
	}
};



#endif // !Decorator