#include "../include/reversecounter.hpp"

void ReverseCounter::decrement() {
	if (counter > 0)
	{
		counter--;
	} else {
		counter = max;
	}
}

void ReverseCounter::print() {
	std::cout << "Compteur : " << counter << "/" << max << std::endl;
}
