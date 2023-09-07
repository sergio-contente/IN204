#ifndef __COUNTER_H__
#define __COUNTER_H__

#include <iostream>

struct MyCounter
{
        unsigned counter;
        unsigned max;
 
    public:
        explicit MyCounter():
            counter((uint)0), max((uint)0)
        {}
        
        MyCounter(uint MaxValue):
            counter((uint)0), max(MaxValue)
        {}

        MyCounter(uint Counter, uint MaxValue):
            counter(Counter), max(MaxValue)
        {}

        MyCounter(const MyCounter& otherCounter):
            counter(otherCounter.counter),
            max(otherCounter.max)
        {}

        ~MyCounter() {
            std::cout << "Delete counter: " << this 
          << " ( " << counter << ", " << max << ")" 
          << std::endl;
        }

        unsigned getCounter() const;

        unsigned getMax() const;
    
        void increment();
    
        void reset();
    
        void set(unsigned value);

        void setMax(unsigned value);
};

#endif // !__COUNTER_H__

