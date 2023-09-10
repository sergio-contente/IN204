#include "../include/point.hpp"
#include "../include/segment.hpp"

int main(int argc, const char** argv) {
		Point* point_1 = new Point(1,2);
		std::cout << "P: (" << point_1->getX() << ", " << point_1->getY() << ")" << std::endl;
		
		Point* point_2 = new Point(5,6);
		std::cout << "P: (" << point_2->getX() << ", " << point_2->getY() << ")" << std::endl;

	 	Segment* segment = new Segment(*point_2, *point_1);
		Point vector = segment->getVector();
		std::cout << "P: (" << vector.getX() << ", " << vector.getY() << ")" << std::endl;

		Point* point3 = new Point(3,4);
		std::cout << segment->containsPoint(*point_2) << std::endl;
		return 0;
}
