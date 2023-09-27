#ifndef __INTERVALE__
#define __INTERVALE__

#include <stdlib.h>
#include <iostream>
#include <iterator>
#include "interval_iterator.hpp"
class interval
{
private:
	int minValue;
	int maxValue;
 
public:
	typedef int value_type;
	typedef size_t size_type;
        typedef ptrdiff_t difference_type;
 
	interval(int theMinValue, int theMaxValue) : 
		minValue(theMinValue), maxValue(theMaxValue) 
	{}
	interval(const interval& anotherInterval):
		minValue(anotherInterval.minValue), 			 		  
                maxValue(anotherInterval.maxValue)
	{}
	interval& operator = (const interval& anotherInterval)
	{
		minValue = anotherInterval.minValue;
		maxValue = anotherInterval.maxValue;
		return *this;
	}
	size_type size() const
	{
		return (size_type)(maxValue - minValue);
	}
	int operator[](size_type anIndex) const
	{
		if (anIndex > size())
			throw std::out_of_range("Index out of range");
		return minValue + (int)anIndex;
	}
	bool operator == (const interval& anotherInterval) const
	{
		return anotherInterval.maxValue == maxValue &&
			anotherInterval.minValue == minValue;
	}
	bool operator != (const interval& anotherInterval) const
	{
		return anotherInterval.maxValue != maxValue ||
			anotherInterval.minValue != minValue;
	}

	friend class interval_iterator;
	typedef interval_iterator const_iterator;
	const_iterator begin() const noexcept;
	const_iterator end() const noexcept;

	interval_iterator begin();
	interval_iterator end();

	typedef const int value_type;
	typedef interval_iterator iterator;
	typedef ptrdiff_t difference_type;
	typedef size_t size_type;

	inline iterator begin() const;
	inline iterator end() const;

};

inline interval::iterator interval::begin() const {
	return iterator(*this, minValue);
}

inline interval::iterator interval::end() const{
	return(*this, maxValue + 1);
}

#endif // !__INTERVALE__

