/*
Bergur I Johansen	-	bein1600

*/
#ifndef SUGAR_H
#define SUGAR_H
#include "Decorator.h"
#include "Chocolate.h"
#include "Coffee.h"
#include "Cream.h"
#include "Drink.h"
#include "Espresso.h"
#include "Milk.h"
#include "Sugar.h"
#include "Tea.h"
#include "WhippedCream.h"
#include <iomanip>

// Test app
class TestApp
{
private:
	void drinkMenu()
	{
		bool running = true;
		do {
			system("cls");
			std::cout << "=======================================" << std::endl;
			std::cout << "|              Magn Kaffi             |" << std::endl;
			std::cout << "=======================================" << std::endl;
			std::cout << "| 1. Coffee      " << "10,-" << "    ~~~~~ __     |" << std::endl;
			std::cout << "| 2. Espresso    " << "14,-" << "   \\     /_|     |" << std::endl;
			std::cout << "| 3. Tea         " << "10,-" << "    \\___/        |" << std::endl;
			std::cout << "| 4. Chocolate   " << "12,-" << "                 |" << std::endl;
			std::cout << "| 5. Exit                             |" << std::endl;
			std::cout << "=======================================" << std::endl;

			std::shared_ptr<Drink> drink = nullptr;

			std::cout << "Order: ";
			char choice = NULL;
			std::cin >> choice;
			std::cin.get();
			int price = 0;

			// price of the drinks
			enum cost {
				ten = 10,
				fourteen = 14,
				twelve = 12
			};
			// menu
			switch (choice)
			{
			case '1': drink = std::make_shared<Coffee>(Coffee()); price = cost::ten; extraMenu(drink, price); break;
			case '2': drink = std::make_shared<Espresso>(Espresso()); price = cost::fourteen; extraMenu(drink, price); break;
			case '3': drink = std::make_shared<Tea>(Tea()); price = cost::ten; extraMenu(drink, price); break;
			case '4': drink = std::make_shared<Chocolate>(Chocolate()); price = cost::twelve; extraMenu(drink, price); break;
			case '5': running = false; break;
			default: std::cout << "unknown choice" << std::endl; system("pause"); break;
			} // end switch

			std::cout << "Warning: Content is very hot and very delicious";
		} while (running); // end while
	}


	void extraMenu(std::shared_ptr<Drink>drink, int price)
	{
		bool running = true;
		do {
			system("cls");
			std::cout << "=======================================" << std::endl;
			std::cout << "|              Magn Kaffi extras      |" << std::endl;
			std::cout << "=======================================" << std::endl;
			std::cout << "| 1. Sugar          " << "1,-" << "    ~~~~~ __   |" << std::endl;
			std::cout << "| 2. Milk           " << "1,-" << "   \\     /_|   |" << std::endl;
			std::cout << "| 3. Cream          " << "2,-" << "    \\___/      |" << std::endl;
			std::cout << "| 4. Whipped cream  " << "5,-" << "               |" << std::endl;
			std::cout << "| 5. Place order                      |" << std::endl;
			std::cout << "=======================================" << std::endl;
			
			std::cout << "extra: ";
			char choice = NULL;
			std::cin >> choice;
			std::cin.get();

			// price of the extras
			enum cost {
				one = 1,
				two = 2,
				five = 5
			};

			// menu
			switch (choice)
			{
			case '1': drink = std::make_shared<Sugar>(Sugar(drink)); price += cost::one; break;
			case '2': drink = std::make_shared<Milk>(Milk(drink)); price += cost::one; break;
			case '3': drink = std::make_shared<Cream>(Cream(drink)); price += cost::two; break;
			case '4': drink = std::make_shared<WhippedCream>(WhippedCream(drink)); price += cost::five; break;
			case '5': running = false; break;
			default: std::cout << "unknown choice" << std::endl; break;
			} // end switch

		} while (running); // end while

		drink->do_it();
		std::cout << " price: " << price << ",-" << std::endl;
		getchar();
	}

public:
	void run();
};

#endif // !Sugar