/*
Bergur I Johansen	-	bein1600

*/
#ifndef TEA_H
#define TEA_H
#include "Drink.h"
// Concrete component
class Tea : public Drink
{
public:
	void do_it() override
	{
		std::cout << "Tea";
	}
};



#endif // !Tea