#ifndef __SEGMENT_H__
#define __SEGMENT_H__

#include <iostream>
#include <cmath>
#include "point.hpp"

#define EPSILON 0.0001

struct Segment
{
	private:
		Point m_start, m_end;
		double m_slope, m_intercept;
		bool isVertical;
		Point* vector;


		void calculateSlope();
		void swap(Point* A, Point* B);
		void checkPoints();
		double dotProduct(Point& A, Point& B);
		double crossProduct(Point&A, Point& B);
		Point projectionCinAB(Point& A, Point& B, Point& C); 
		
	public:
		Segment(const Point& point1, const Point& point2) : m_start(point1), m_end(point2) {
			checkPoints();
			this->vector = new Point(m_end.getX() - m_start.getX(), m_end.getY() - m_start.getY());
			calculateSlope();
		}
		Segment(const Segment& anotherSegment) : m_start(anotherSegment.m_start), m_end(anotherSegment.m_end) {
			checkPoints();
			this->vector = new Point(m_end.getX() - m_start.getX(), m_end.getY() - m_start.getY());
			calculateSlope();
		}
		Segment(int startX, int startY, int endX, int endY) : m_start(startX, startY), m_end(endX, endY) {
			checkPoints();
			this->vector = new Point(m_end.getX() - m_start.getX(), m_end.getY() - m_start.getY());
			calculateSlope();
		}

		bool containsPoint(Point& anotherPoint);
		bool haveInterception(const Segment& anotherSegment);
		Point getVector();
};



#endif // !"__SEGMENT_H"
