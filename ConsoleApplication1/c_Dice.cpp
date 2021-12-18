#include "c_Dice.h"
#include <iostream>

c_Dice::c_Dice()
{
	this->value = 1 + rand() % 6;
}

std::ostream& operator<<(std::ostream& out, const c_Dice& dice)
{
	out << "Value is: " << dice.value << "\n";
	return out;
}
