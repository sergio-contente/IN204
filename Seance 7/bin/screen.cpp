#include "../include/screen.hpp"

void Screen::AddPixeltoRowsVector(uint32_t pixel) {
	if (rows_pixels.size() < _width)
	{
		rows_pixels.push_back(pixel);
	}
	else {
		AddPixelRowtoTable();
		rows_pixels.clear();
	}
	std::cout << "SIZE OF MY ROWS VECTOR: " << rows_pixels.size() << std::endl;
}

void Screen::AddPixelRowtoTable() {
	table.push_back(rows_pixels);
	for ( const std::vector<uint32_t> &v : rows_pixels )
	{
		for ( uint32_t x : v ) std::cout << x << ' ';
		std::cout << std::endl;
	}

}
