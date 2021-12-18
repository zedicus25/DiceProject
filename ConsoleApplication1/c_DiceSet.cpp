#include "c_DiceSet.h"

c_DiceSet::c_DiceSet()
{
	this->dices = new c_Dice[0];
	this->size = 0;
}

c_DiceSet::c_DiceSet(int size)
{
	this->size = size;
	this->dices = new c_Dice[size];
}

c_Dice& c_DiceSet::operator[](const int index)
{
	if (index < this->size) {
		return dices[index];
	}
	else {
		std::cout << "Out of bunds array!\n";
		return dices[0];
	}
}

int c_DiceSet::totalAmount()
{
	int amount = 0;
	for (int i = 0; i < this->size; i++)
	{
		amount += dices[i].getValue();
	}
	return amount;
}

std::ostream& operator<<(std::ostream& out, c_DiceSet& set)
{
	for (int i = 0; i < set.size; i++)
	{
		out << set.dices[i];
	}
	return out;
}
