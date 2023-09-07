#include "../include/point.hpp"

void Point::setX(int X) {
	this->m_x = X;
}

void Point::setY(int Y) {
	this->m_y = Y;
}

int Point::getX() {
	return this->m_x;
}

int Point::getY(){
	return this->m_y;
}
