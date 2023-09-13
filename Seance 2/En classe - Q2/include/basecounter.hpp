#ifndef __BASECOUNTER_H__
#define __BASECOUNTER_H__

#include <iostream>

class BaseCounter
{
    protected:

        unsigned counter;
        unsigned max;
 
        BaseCounter():
            counter((unsigned)0), max((unsigned)0)
        {}
        
        BaseCounter(unsigned MaxValue):
            counter((unsigned)0), max(MaxValue)
        {}

        BaseCounter(unsigned Counter, unsigned MaxValue):
            counter(Counter), max(MaxValue)
        {}

        BaseCounter(const BaseCounter& otherCounter):
            counter(otherCounter.counter),
            max(otherCounter.max)
        {}

        ~BaseCounter() {
            std::cout << "Delete counter: " << this 
          << " ( " << counter << ", " << max << ")" 
          << std::endl;
        }

    public:

        unsigned getCounter() const;

        unsigned getMax() const;
    
        void reset();
    
        void set(unsigned value);

        void setMax(unsigned value);
};

#endif // !__BASECOUNTER_H__

