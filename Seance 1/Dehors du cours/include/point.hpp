#ifndef __POINT_H__
#define __POINT_H__ 

#include <iostream>

struct Point
{
	private:
		int m_x, m_y;

	public:
		explicit Point() : m_x(0), m_y(0) {}
		Point(int X): m_x(X), m_y(0) {
			std::cout << "You didn't provided the Y value, it's set to 0 by default." << std::endl;
		}
		Point(int X, int Y): m_x(X), m_y(Y) {}
		~Point() {
			std::cout << "Destroying the Point: " << this << std::endl << "P(" << m_x << ", " << m_y << ")" << std::endl;
		}

		void setX(int x);
		void setY(int y);

		int getX();
		int getY();
};

#endif // !__SEGMENT_H__

