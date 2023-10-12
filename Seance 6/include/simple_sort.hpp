#pragma once
#include <algorithm>
#include <iostream>

template<typename  iterator>
void simple_sort(iterator start, iterator end)
{
    for(;start != end; start ++)
    {
        auto it = start; it++;
        for(;it != end; it ++)
        {
            // Compare si les deux elements sont dans le bon ordre.
            if (*start > *it)
                std::swap(*start, *it);
        }
    }
}


template<typename  containerT, typename charT, typename traits = std::char_traits<charT>>
std::basic_ostream<charT, traits>& operator << (std::basic_ostream<charT, traits>& aStream, const containerT& aContainer)
{
    aStream << "{";
    auto end = aContainer.end();
    for(auto it = aContainer.begin(); it != end;)
    {
        aStream << *it ++;
        if(it != end)
            aStream << ", ";
    }
    aStream << "}";
} 
