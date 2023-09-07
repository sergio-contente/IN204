#include "../include/counter.hpp"

void useObjectA() {
    MyCounter Counter1(2);
    MyCounter Counter2(4);
    Counter1.reset();
    Counter2.reset();
    for(unsigned i = 0; i <= 5; i++) {
      std::cout 
	<< "Valeur des compteurs (" 	<< Counter1.counter 
	<< ", " << Counter2.counter 	<< ")" << std::endl;
        Counter1.increment();
        Counter2.increment();
    }
}

void myfunctionA() // sur la pile
{
  MyCounter counter(3);
  std::cout << counter.getCounter() << std::endl;
  std::cout << counter.getMax() << std::endl;
}
 
void myfunctionB() //sur le tas
{
  MyCounter* counter = new MyCounter(5);
  std::cout << counter->getCounter() << std::endl;
  std::cout << counter->getMax() << std::endl;
  delete counter;
}

void myFunctionC(MyCounter& counter) {
    MyCounter* new_counter = new MyCounter(counter);
    std::cout << new_counter->getCounter() << std::endl;
    std::cout << new_counter->getMax() << std::endl;
    delete new_counter;
}

int main() {
    //useObjectA();
    myfunctionA();
    std::cout << "------------------------" << std::endl;
    myfunctionB();
    std::cout << "------------------------" << std::endl;
    MyCounter counter(10);
    myFunctionC(counter);
    return 0;
}

