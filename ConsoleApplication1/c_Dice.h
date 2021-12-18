#pragma once
#include <iostream>
class c_Dice
{
private:
	int value;
public:
	c_Dice();	

	int getValue() {
		return this->value;
	}

	friend std::ostream& operator<< (std::ostream & out, const c_Dice& dice);
};

