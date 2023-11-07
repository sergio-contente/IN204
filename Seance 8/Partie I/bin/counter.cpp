#include "../include/counter.hpp"

void BaseCounter::testNext(BaseCounter& aCounter)
{
    for(int i; i < 10; i++)
    {
        aCounter.next();
        std::cout << aCounter << std::endl;
    }
}

void ForwardCounter::testForwardCounter(ForwardCounter& aCounter)
{
    for(int i = 0 ; i < 10 ; i++)
        aCounter.increment();
}
