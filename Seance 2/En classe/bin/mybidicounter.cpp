#include "../include/mybidicounter.hpp"

void MyBiDiCounter::decrement() {
	if (counter > 0)
	{
		counter--;
	} else {
		counter = max;
	}
}

void MyBiDiCounter::print() {
	std::cout << "Compteur : " << counter << "/" << max << std::endl;
}
