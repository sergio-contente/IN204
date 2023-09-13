#ifndef __REVERSECOUNTER_H__
#define __REVERSECOUNTER_H__

#include "basecounter.hpp"

class ReverseCounter : public virtual BaseCounter {

	public:
		ReverseCounter() : BaseCounter() {}
		ReverseCounter(const ReverseCounter& anotherBiDiCounter) :
			BaseCounter(anotherBiDiCounter)	{}
		explicit ReverseCounter(unsigned theMaxValue) :
			BaseCounter(theMaxValue) {}
		explicit ReverseCounter(unsigned theCounterValue, unsigned theMaxValue) :
			BaseCounter(theCounterValue, theMaxValue) {}
		void decrement();
		void print();

		~ReverseCounter()
        {
            std::cout << "Destruction: ReverseCounter@" << this << std::endl;
        }
};

#endif // !__REVERSECOUNTER_H__

