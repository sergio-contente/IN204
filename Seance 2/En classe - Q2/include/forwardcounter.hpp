#ifndef __FORWARDCOUNTER_H__
#define __FORWARDCOUNTER_H__

#include "basecounter.hpp"

class ForwardCounter : public virtual BaseCounter {

	public:
		ForwardCounter() : BaseCounter() {}
		ForwardCounter(const ForwardCounter& anotherBiDiCounter) :
			BaseCounter(anotherBiDiCounter)	{}
		explicit ForwardCounter(unsigned theMaxValue) :
			BaseCounter(theMaxValue) {}
		explicit ForwardCounter(unsigned theCounterValue, unsigned theMaxValue) :
			BaseCounter(theCounterValue, theMaxValue) {}

		void increment();
		void print();

		 ~ForwardCounter()
        {
            std::cout << "Destruction: ForwardCounter@" << this << std::endl;
        }
};

#endif // !__FORWARDCOUNTER_H__

