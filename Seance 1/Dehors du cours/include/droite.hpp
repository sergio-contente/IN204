#ifndef __DROITE_H__
#define __DROITE_H__ 

#include <iostream>
#include <cmath>
#include "point.hpp"

struct Droite
{
	private:

		Point m_point;
		double m_angle;
		bool isVertical;

		void calculateSlope(Point* A, Point* B);
		void swap(Point* A, Point* B);
		void checkPoints(Point* start, Point* end);

	public:

		Droite(double angle, Point& point) : m_angle(angle), m_point(point) {}
		Droite(Point* start, Point* end) {
			checkPoints(start, end);
			calculateSlope(start, end);
		}
		Droite(const Droite& anotherLine) :
			m_point(anotherLine.m_point),
			m_angle(anotherLine.m_angle)
		{}

		bool intersectsWith(const Droite& anotherLine)
    {
        double intersectionX;
        double intersectionY;
        return intersectsWith(anotherLine,
            intersectionX, intersectionY);
    }
    bool intersectsWith(
        Droite anotherLine,
        double& theIntersectionX,
        double& theIntersectionY)
    {
				std::cout << "droite1 m_angle: " << m_angle << " droite 2 angle: " << anotherLine.m_angle << std::endl;
        if(m_point.getX()
            == anotherLine.m_point.getX() && 
            m_point.getY() 
            == anotherLine.m_point.getY()) {
						std::cout << m_point.getX() << std::endl;
						std::cout << anotherLine.m_point.getX() << std::endl;
						std::cout << m_point.getY() << std::endl;
						std::cout << anotherLine.m_point.getY() << std::endl;
						std::cout << "PRIMEIRO IF" << std::endl;
            return true;
						}
        if(m_angle == anotherLine.m_angle)
        {
            double angle = atan2(
                anotherLine.m_point.getY() - m_point.getY(),
                anotherLine.m_point.getX() - m_point.getX());
            if(angle != m_angle)
                return false;                          
        }
        return true;
    }
};

#endif // !__DROITE_H__
