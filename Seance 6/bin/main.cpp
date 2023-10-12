#include "../include/simple_sort.hpp"

#include<list>

#include<list>
 
struct Toto {};
int main() 
{
    std::list<int> v = {1, 7, 3, 4, 9, 2, 5};
    simple_sort(v.begin(), v.end());
    std::cout << v;
    std::cout << Toto() << std::endl;
    return 0;
}
