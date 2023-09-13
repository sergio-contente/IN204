#ifndef __BIDICOUNTER_H__
#define __BIDICOUNTER_H__

#include "forwardcounter.hpp"
#include "reversecounter.hpp"

class BiDiCounter : public ForwardCounter, public ReverseCounter {

	public:
		BiDiCounter() : ForwardCounter(), ReverseCounter() {}
		BiDiCounter(const BiDiCounter& anotherBiDiCounter) :
			ReverseCounter((const ReverseCounter&) anotherBiDiCounter),
			ForwardCounter((const ForwardCounter&) anotherBiDiCounter),
			BaseCounter(anotherBiDiCounter)	{}
		BiDiCounter(unsigned theMaxValue) :
			BiDiCounter(0, theMaxValue) {}
		BiDiCounter(unsigned theCounterValue, unsigned theMaxValue) :
			ReverseCounter(),
			ForwardCounter(),
			BaseCounter(theCounterValue, theMaxValue) {}

		void print();
};

#endif // !__BIDICOUNTER_H__

