#ifndef __INTERVAL_ITERATOR__
#define __INTERVAL_ITERATOR__

#include "intervale.hpp"

class interval_iterator
	: public std::iterator <std::forward_iterator_tag, int>
{
private:
	friend class interval;
	const interval* mInterval; // Référence à l'interval.
	int mCurrent; // la valeur courante dont on fait référence.
 
	interval_iterator(const interval& anInterval, int aCurrentValue) : 
		mInterval(&anInterval), mCurrent(aCurrentValue) {}
 
public:
	interval_iterator(const interval_iterator& anotherIterator):
		mInterval(anotherIterator.mInterval),
		mCurrent(anotherIterator.mCurrent) {}
 
	interval_iterator& operator = (interval_iterator& anotherIterator)
	{
		mInterval = anotherIterator.mInterval;
		mCurrent = anotherIterator.mCurrent;
		return *this;
	}
 
	reference operator*();
	pointer operator->();
	interval_iterator& operator++();
	interval_iterator& operator++(int);
	bool operator ==(const interval_iterator&) const;
	bool operator !=(const interval_iterator&) const;
 
};

interval_iterator::reference interval_iterator::operator*(){
	return mCurrent;
}

interval_iterator::pointer interval_iterator::operator->()
{
		return &mCurrent;
}

interval_iterator::interval_iterator& operator++()
    {
        // Passe à la valeur suivant si nous ne sommes pas
        // déjà à la fin de l'interval.
        if(mCurrent <= mInterval->maxValue)
            mCurrent ++;
        return *this;
    }
iterator operator++(int)
{
		interval_iterator it(*this); // Crée une copie de l'itérateur.
		++(*this);          // Incrément l'itérateur courant en appellant
												// l'opérateur iterator& operator()
		return it;          // Retourne la copie de l'itérateur (avant modification).
}
#endif // !__INTERVAL_ITERATOR__

