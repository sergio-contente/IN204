#ifndef __BIDICOUNTER_H__
#define __BIDICOUNTER_H__

#include "counter.hpp"

class MyBiDiCounter : public MyCounter {

	public:

		MyBiDiCounter() {}
		void decrement();
		void print();
};

#endif // !__BIDICOUNTER_H__

