#include "../include/forwardcounter.hpp"

void ForwardCounter::increment() {
	if (counter < max)
	{
		counter++;
	} else {
		counter = 0;
	}
}

void ForwardCounter::print() {
	std::cout << "Compteur : " << counter << "/" << max << std::endl;
}

