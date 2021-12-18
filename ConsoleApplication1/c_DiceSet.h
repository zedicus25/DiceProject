#pragma once
#include"c_Dice.h"
#include <iostream>
class c_DiceSet
{
private:
	c_Dice* dices;
	int size;
public:
	c_DiceSet();
	c_DiceSet(int size);
	
	friend std::ostream& operator <<(std::ostream& out, c_DiceSet& set);

	c_Dice& operator[](const int index);

	int totalAmount();
};

