#include "../include/simple_sort.hpp"
#include <iostream>
#include <stdlib.h>
#include <random>

namespace monomorphic
{
	void populate_with_randoms(
		std::vector<int>& theVector,
		int theNumberOfValues,
		int theMinValue,
		int theMaxValue) {
			//Random number generator set up
			static std::random_device rd; //Variables statiques, initialisées uniquement
			static std::minstd_rand gen(rd()); //lors du premier appel de la fonction et persistant
																				// entre deux appels de fonctions

			std::uniform_int_distribution<> distribution(theMinValue, theMaxValue);
			int randomValue;

			//Clean what's left in the vector
			theVector.clear();
			while (theNumberOfValues > 0)
			{	
				randomValue = distribution(gen);
				theVector.push_back(randomValue);
				theNumberOfValues--;
			}
		}

	void print_vector(const std::vector<int>& anArray) {
		int length = anArray.size();
        std::cout << "[";
        for(int index = 0; index < length - 1; index ++)
            std::cout << anArray[index] << ", ";
        std::cout << anArray[length - 1] << "]" << std::endl;
	}

	void simple_sort(std::vector<int>& theValues) {
		for (int i = 0; i<theValues.size(); i++)
		{
			for (int j = i + 1; j< theValues.size(); j++)
			{
				// Compare si les deux elements sont dans le bon ordre.
				if (theValues[i] > theValues[j])
				{
					std::swap(theValues[i], theValues[j]);
				}
			}
		}
	}	
} // namespace monomorphic
