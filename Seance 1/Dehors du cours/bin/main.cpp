#include "../include/point.hpp"

int main(int argc, const char** argv) {
		Point* point_1 = new Point(1,2);
		std::cout << "P: (" << point_1->getX() << ", " << point_1->getY() << ")" << std::endl;
		delete point_1;
		return 0;
}
