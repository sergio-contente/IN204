#include "../include/mybidicounter.hpp"

void MyBiDiCounter::decrement() {
	if (counter > 0)
	{
		counter--;
	} else {
		counter = max;
	}
}

void MyBiDiCounter::increment(unsigned value) {
	if (counter + value <= max)
	{
		counter += value;
	}
	else {
		counter = (counter + value) % max;
	}
}

void MyBiDiCounter::print() {
	std::cout << "Compteur : " << counter << "/" << max << std::endl;
}
