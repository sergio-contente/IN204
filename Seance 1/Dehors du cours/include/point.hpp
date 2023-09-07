#ifndef __POINT_H__
#define __POINT_H__ 

#include <iostream>

struct Point
{
	private:
		int x, y;

	public:
		explicit Point() : x(0), y(0) {}
		Point(int X): x(X), y(0) {
			std::cout << "You didn't provided the Y value, it's set to 0 by default." << std::endl;
		}
		Point(int X, int Y): x(X), y(Y) {}
		~Point() {
			std::cout << "Destroying the Point: " << this << std::endl << "P(" << x << ", " << y << ")" << std::endl;
		}

		void setX(int x);
		void setY(int y);

		int getX();
		int getY();
};

#endif // !__SEGMENT_H__

