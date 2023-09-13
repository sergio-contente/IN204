#include "../include/mybidicounter.hpp"

void testMyBiDiCounter()
{
    MyBiDiCounter counterA;
    counterA.setMax(4);
    counterA.reset();
    counterA.print();
    for(int i=0; i < 6; i++)
    {
        counterA.increment();
        counterA.print();
    }
    for(int i=0; i < 6; i++)
    {
        counterA.decrement();
        counterA.print();
    }
}

int main() {

		// MyBiDiCounter* bidicounter = new MyBiDiCounter();

		// bidicounter->increment();

		// bidicounter->print();

		// bidicounter->decrement();

		// bidicounter->print();

		// free(bidicounter);

		testMyBiDiCounter();

		return 0;
}
