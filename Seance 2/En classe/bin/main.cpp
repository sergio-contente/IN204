#include "../include/mybidicounter.hpp"

void testMyBiDiCounter()
{
    MyBiDiCounter counterA(5);
    counterA.reset();
    counterA.print();
    for(int i=0; i < 6; i++)
    {
        counterA.increment(5);
        counterA.print();
    }

    counterA.reset();
    counterA.print();
    
    for(int i=0; i < 6; i++)
    {
        counterA.MyCounter::increment();
        counterA.print();
    }
}

int main() {

		testMyBiDiCounter();

		return 0;
}
