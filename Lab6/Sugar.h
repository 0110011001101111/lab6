/*
Bergur I Johansen	-	bein1600

*/

#ifndef SUGAR_

//#define SUGAR_H

#include "Decorator.h"

class Sugar : public Decorator
{
public:
	Sugar(std::shared_ptr<Drink>drink) : Decorator(drink) {}

	void do_it() override
	{
		Decorator::do_it();
		std::cout << "+sugar";
	}
};



#endif // !SUGAR_H