#ifndef __ADVCOUNTER_H__
#define __ADVCOUNTER_H__

#include "mybidicounter.hpp"

class MyAdvCounter : public MyCounter
{
private:
	/* data */
public:
	MyAdvCounter(): MyCounter() {}
	explicit MyAdvCounter(unsigned theMax):
			MyCounter(theMax)
	{}
	MyAdvCounter(unsigned theCounter,
			unsigned theMax): MyCounter(theCounter, theMax)
	{}
	MyAdvCounter(const MyBiDiCounter& anotherCounter):
			MyCounter(anotherCounter.getCounter())
	{}
	~MyAdvCounter();
	void increment();
	void print();
};


#endif // !__ADVCOUNTER_H__
