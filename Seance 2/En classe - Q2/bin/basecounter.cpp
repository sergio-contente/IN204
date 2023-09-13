
#include "../include/basecounter.hpp"

// BaseCounter::BaseCounter(){

// }

unsigned BaseCounter::getCounter() const {
      return counter;
    }

unsigned BaseCounter::getMax() const {
    return max;
}
 
// void BaseCounter::increment() {
//     counter ++;
//     if(counter > max)
//     counter = 0;
// }
 
void BaseCounter::reset() {
    counter = 0;
}
 
void BaseCounter::set(unsigned value) {
    counter = (value <= max) ? value : counter;
}
 
void BaseCounter::setMax(unsigned value) {
    if(counter >= value)
        counter = 0;
        max = value;
}
