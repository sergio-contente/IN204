#include "../include/bidicounter.hpp"
#include "../include/forwardcounter.hpp"
#include "../include/reversecounter.hpp"


void testBiDiCounter()
{
    BiDiCounter counterA(4);
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


void testForwardCounter()
{
    ForwardCounter counterA(3);
    counterA.reset();
    counterA.print();
    for(int i=0; i < 6; i++)
    {
        counterA.increment();
        counterA.print();
    }
}

void testReverseCounter() {
    ReverseCounter counterA(5, 6);
    counterA.print();
    for(int i=0; i < 6; i++)
    {
        counterA.decrement();
        counterA.print();
    }
}

void testFamilyOfCounters()
{
    ForwardCounter incCounter(0, 4);
    ReverseCounter decCounter(0, 3);
    BiDiCounter biDiCounter(0, 5);
    for(int i=0; i < 6; i++)
    {
        incCounter.increment();
        incCounter.print();
	decCounter.decrement();
        decCounter.print();
        biDiCounter.increment();
        biDiCounter.print();
    }
    for(int i=0; i < 6; i++)
    {
        biDiCounter.decrement();
        biDiCounter.print();
    }
}

int main() {

		testBiDiCounter();
        testForwardCounter();
        testReverseCounter();
        testFamilyOfCounters();
		return 0;
}
