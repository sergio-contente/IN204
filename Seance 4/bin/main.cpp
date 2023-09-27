#include <iostream>
#include <vector>     
#include <iterator>
#include <algorithm>

template <class inputIterator, class T>
inputIterator upper(inputIterator theBeginIterator, inputIterator theEndIterator, const T& theValue)
{
	for (; theBeginIterator < theEndIterator; theBeginIterator ++)
	{
		if ( *theBeginIterator > theValue)
			return theBeginIterator;
	}
	return theEndIterator;
}

int testUpper()
{
	int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
	std::vector<int> v(myints, myints + 8);
	std::vector<int>::iterator up = upper(v.begin(), v.end(), 20);
	std::cout << "first value greater than 20 at position "
	<< (up - v.begin()) << '\n';
	return 0;
}

void testSortAndUpper()
{
    std::vector<int> v{ 10, 20, 30, 30, 20, 10, 10, 20 };
    // Appel de la fonction "upper' sur le vecteur en commençant par le premier élément 
    // et en terminant avec le dernier.
    std::vector<int>::iterator up = upper(v.begin(), v.end(), 20);
    std::cout << "First value greater than 20  at position "
              << (up - v.begin()) << std::endl;
    // Appel de la fonction de tri ''sort''
    std::sort(v.begin(), v.end());
 
    // Appel ensuite de la fonction ''upper'' sur le vecteur.
    up = upper(v.begin(), v.end(), 20);
    std::cout << "First value greater than 20  at position "
              << (up - v.begin()) << std::endl;
}

void testSortHeapAndUpper()
{
    std::vector<int> v{ 10, 20, 30, 30, 20, 10, 10, 20 };
    std::make_heap(v.begin(), v.end());
    // Appel de la fonction "upper' sur le vecteur en commençant par le premier élément 
    // et en terminant avec le dernier.
    std::vector<int>::iterator up = upper(v.begin(), v.end(), 20);
    std::cout << "First value greater than 20  at position "
              << (up - v.begin()) << std::endl;
    // Appel de la fonction de tri ''sort_heap''
    std::sort_heap(v.begin(), v.end());
 
    // Appel ensuite de la fonction ''upper'' sur le vecteur.
    up = upper(v.begin(), v.end(), 20);
    std::cout << "First value greater than 20  at position "
              << (up - v.begin()) << std::endl;
}


int main(int argc, const char** argv) {
		testUpper();
		testSortAndUpper();
		testSortHeapAndUpper();
		return 0;
}

