#include <iostream>
#include "c_DiceSet.h"
int main()
{
	srand(time(NULL));
	c_DiceSet set(5);
	std::cout << set;
	std::cout << "Total amount: "<<set.totalAmount() << "\n";
	std::cout << set[2];
}