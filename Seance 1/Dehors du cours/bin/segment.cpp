#include "../include/segment.hpp"

void Segment::swap(Point* A, Point* B) {
	Point temp;
	temp = *A;
	*A = *B;
	*B = temp;
}

void Segment::checkPoints() {
	if (m_start.getX() > m_end.getY())
	{
		swap(&m_start, &m_end);
	} 
	else if (m_start.getY() > m_end.getY())
	{
		swap(&m_start, &m_end);
	}
}

Point Segment::getVector() {
	return *vector;
}

void Segment::calculateSlope() {
	int start_x, start_y;
	int end_x, end_y;

	start_x = m_start.getX();
	start_y = m_start.getY();

	end_x = m_end.getX();
	end_y = m_end.getY();

	m_slope = (double) (end_y - start_y)/(end_x - start_x);
	if (end_x == start_x)
	{
		isVertical = true;
	}
	else {
		isVertical = false;
	}
	
}

double Segment::dotProduct(Point& A, Point& B) {
	return (double) A.getX()*B.getX() + A.getY()*B.getY();
}

double Segment::crossProduct(Point& A, Point& B) {
	// As the points are bidimensional, then the Z axis are 0
	return (double) (A.getX()*B.getY() - B.getX()*A.getY());
}

bool Segment::containsPoint(Point& anotherPoint) {
	if (isVertical)
	{
		if (anotherPoint.getX() == m_start.getX())
		{
			return true;
		} else {
			return false;
		}
	} else {
			if (anotherPoint.getX() < m_start.getX() || 
					anotherPoint.getY() < m_start.getY() ||
					anotherPoint.getX() > m_end.getX() 	 ||
					anotherPoint.getY() > m_end.getY())
			{
				return false;
			}
			else {
				double anotherPointSlope = (double) (anotherPoint.getY() - m_start.getY())/(anotherPoint.getX() - m_start.getX());
				if (abs(anotherPointSlope - m_slope) < EPSILON)
				{
					return true;
				}
				else {
					return false;
				}
			}
	}
}


bool Segment::haveInterception(const Segment& anotherSegment) {

}
