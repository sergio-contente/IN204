#ifndef __GRAPHICS_HPP__
#define __GRAPHICS_HPP__

#include <iostream>
#include <vector>

class GraphicalObject 
{
    public:       
       virtual void draw () const = 0 ; 
       virtual ~GraphicalObject() { std::cout << "& Delete GraphicalObject \n"; }
 
};
 
class Line: public GraphicalObject 
{
    public:
       virtual void draw () const { std::cout << "Line"; } ; 
       ~Line() { std::cout << "Delete Line\n"; }
 
};
 
class Circle: public GraphicalObject 
{
    public:
       virtual void draw() const { std::cout << " Circle"; } ; 
       ~Circle  () { std::cout << "Delete Circle  \n"; }
 
};

#endif // !__GRAPHICS_HPP__

