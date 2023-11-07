#ifndef COUNTER_HPP
#define COUNTER_HPP
 
#include <iostream>
#include <ostream>


class BaseCounter
{
protected:
    unsigned counter;
    unsigned max;
public:
    unsigned getCounter() const { return counter; }
    unsigned getMax() const { return max; }
    void reset() { counter = 0; }
    void set(unsigned value) { counter = value; }
    void setMax(unsigned value)
    {
        max = value;
        if(value > counter)
            counter = counter % max;
    }

		virtual void next() = 0;
		virtual void next(unsigned foo) = 0;

		void testNext(BaseCounter& aCounter);
 
protected:
    BaseCounter(): counter(0), max(0) {}
    BaseCounter(unsigned theCounter,
        unsigned theMax): counter(theCounter), max(theMax)
    {}
    explicit BaseCounter(unsigned theMax):
        max(theMax), counter(0)
    {}
    BaseCounter(const BaseCounter& anotherCounter):
        counter(anotherCounter.counter),
        max(anotherCounter.max)
    {}
    ~BaseCounter()
    {}
		template<class charT, class charTraits> 
		friend std::basic_ostream<charT, charTraits>& operator << (
        std::basic_ostream<charT, charTraits>&, const BaseCounter& aCounter);

		virtual const char* getClassName() const = 0;

};
template<class charT, class charTraits> 
std::basic_ostream<charT, charTraits>& operator << (std::basic_ostream<charT, charTraits>& aStream,
    const BaseCounter& aCounter)
{
    aStream << aCounter.getClassName() << ":" << aCounter.counter << "/" << aCounter.max;
    return aStream;
}
 
class ForwardCounter: public virtual BaseCounter
{
    public:
        void virtual increment()
        {
            if(counter < max)
                counter = counter + 1;
            else
                counter = 0;
        }
 
        ForwardCounter(): BaseCounter() {}
        ForwardCounter(const ForwardCounter& aCounter): BaseCounter(aCounter) {}
        explicit ForwardCounter(unsigned theMaxValue): ForwardCounter(0, theMaxValue) {}
        ForwardCounter(unsigned theCounter, unsigned theMaxValue): BaseCounter(theCounter, theMaxValue) {}
				virtual void next()
				{
					increment();
				}
				virtual void next(unsigned numberOfSteps) {
					for (int i = 0; i < numberOfSteps; i++)
					{
						increment();
					}
					
				}
				void testForwardCounter(ForwardCounter& aCounter);
		protected:
				virtual const char* getClassName() const { return "ForwardCounter"; }

};

class VerboseForwardCounter : public ForwardCounter
{
public:
    void virtual increment()
    {
        if (counter < max)
            counter = counter + 1;
        else
        {
            std::cout << "Maximal value: " << max << " has been reached." << std::endl;
            counter = 0;
        }
    }
 
    VerboseForwardCounter() : ForwardCounter() {}
    VerboseForwardCounter(const ForwardCounter& aCounter) : ForwardCounter(aCounter) {}
    explicit VerboseForwardCounter(unsigned theMaxValue) : VerboseForwardCounter(0, theMaxValue) {}
    VerboseForwardCounter(unsigned theCounter, unsigned theMaxValue) : ForwardCounter(theCounter, theMaxValue) {}
 
};
 
class BackwardCounter: public virtual BaseCounter
{
    public:
        void decrement()
        {
            if(counter > 0)
                counter = counter -1;
            else
                counter = max;
        }
        BackwardCounter(): BaseCounter() {}
        BackwardCounter(const ForwardCounter& aCounter): BaseCounter(aCounter) {}
        explicit BackwardCounter(unsigned theMaxValue): BackwardCounter(0, theMaxValue) {}
        BackwardCounter(unsigned theCounter, unsigned theMaxValue): BaseCounter(theCounter, theMaxValue) {}
				virtual void next()
				{
					decrement();
				}
				virtual void next(unsigned numberOfSteps)
				{
					for (int i = 0; i < numberOfSteps; i++)
					{
						decrement();
					}
					
				}
		protected:
			virtual const char* getClassName() const { return "BackwardCounter"; }

};
 
class BiDiCounter: public ForwardCounter, public BackwardCounter
{
    public:
        BiDiCounter(): ForwardCounter(), BackwardCounter() {}
        BiDiCounter(const BiDiCounter& aCounter):
            ForwardCounter(aCounter),
            BackwardCounter((const BackwardCounter&)aCounter),
            BaseCounter(aCounter) {}
        BiDiCounter(unsigned theMaxValue): BiDiCounter(0, theMaxValue) {}
        BiDiCounter(unsigned theCounter, unsigned theMaxValue):
            ForwardCounter(theCounter, theMaxValue),
            BackwardCounter(theCounter, theMaxValue),
            BaseCounter(theCounter, theMaxValue) {}

						virtual void next(){
							ForwardCounter::next();
						}
						virtual void next(unsigned numberOfSteps) {
							ForwardCounter::next(numberOfSteps);
						}
		protected:
				virtual const char* getClassName() const { return "BiDiCounter "; }
};
#endif // COUNTER_HPP
