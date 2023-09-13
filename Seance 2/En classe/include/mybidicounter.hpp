#ifndef __BIDICOUNTER_H__
#define __BIDICOUNTER_H__

#include "counter.hpp"

class MyBiDiCounter : public MyCounter {

	public:
		MyBiDiCounter() : MyCounter() {}
		MyBiDiCounter(const MyBiDiCounter& anotherBiDiCounter) :
			MyCounter(anotherBiDiCounter)	{}
		explicit MyBiDiCounter(unsigned theMaxValue) :
			MyCounter(theMaxValue) {}
		explicit MyBiDiCounter(unsigned theCounterValue, unsigned theMaxValue) :
			MyCounter(theCounterValue, theMaxValue) {}

		void decrement();
		void increment(unsigned value);
		void print();
};

#endif // !__BIDICOUNTER_H__

