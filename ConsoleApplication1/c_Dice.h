#pragma once
#include <iostream>
class c_Dice
{
private:
	int value;
public:
	c_Dice();	

	friend std::ostream& operator<< (std::ostream & out, const c_Dice& dice);
};

