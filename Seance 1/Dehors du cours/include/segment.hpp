#ifndef __SEGMENT_H__
#define __SEGMENT_H__

#include <iostream>
#include "point.hpp"

struct Segment
{
	private:
		Point m_p1, m_p2;
		int m_slope, m_intercept;
	public:
		Segment(const Point& point1, const Point& point2) : m_p1(point1), m_p2(point2) {
			std::cout << "Segment between points (" << m_p1.getX() << ", " << m_p1.getY() << ")\n" <<
			", ("  << std::endl;
		}
};



#endif // !"__SEGMENT_H"
