#include "../include/myadvcounter.hpp"

void MyAdvCounter::increment() {
	if(counter < max)
  	counter ++;
}

void MyAdvCounter::print(){
	std::cout << "Compteur : " << counter << "/" << max << std::endl;
}
