#include "../include/droite.hpp"

void Droite::swap(Point* A, Point* B) {
	std::cout << "Swapping..." << std::endl;
	std::cout << "Start: (" << A->getX() << ", " << A->getY() << " )\n" <<
							 "End:   (" << B->getX() << ", " << B->getY() << " )" << std::endl;
	Point temp;
	temp = *A;
	*A = *B;
	*B = temp;
	std::cout << "Start: (" << A->getX() << ", " << A->getY() << " )\n" <<
							 "End:   (" << B->getX() << ", " << B->getY() << " )" << std::endl;
}

void Droite::checkPoints(Point* start, Point* end) {
	if (start->getX() > end->getY())
	{
		swap(&*start, &*end);
	} 
	else if (start->getY() > end->getY())
	{
		swap(&*start, &*end);
	}
}

void Droite::calculateSlope(Point* start, Point* end) {
	int start_x, start_y;
	int end_x, end_y;

	start_x = start->getX();
	start_y = start->getY();

	end_x = end->getX();
	end_y = end->getY();

	m_angle = (double) (end_y - start_y)/(end_x - start_x);
	if (end_x == start_x)
	{
		isVertical = true;
	}
	else {
		isVertical = false;
	}
	
	std::cout << "Slope: " << m_angle << std::endl;
}
