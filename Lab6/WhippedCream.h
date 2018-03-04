/*
Bergur I Johansen	-	bein1600

*/
#ifndef WHIPPEDCREAM_H
#define WHIPPEDCREAM_H
#include "Decorator.h"

// Concrete decorator
class WhippedCream : public Decorator
{
public:
	WhippedCream(std::shared_ptr<Drink>drink) : Decorator(drink) {}

	void do_it() override
	{
		Decorator::do_it();
		std::cout << "+whipped cream";
	}
};



#endif // !WhippedCream