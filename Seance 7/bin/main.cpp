#include "../include/pixel.hpp"
#include "../include/screen.hpp"

int main(int argc, char const *argv[])
{
	Screen my_screen(5, 4);
	my_screen.AddPixeltoRowsVector(5);
	my_screen.AddPixeltoRowsVector(5);
	my_screen.AddPixeltoRowsVector(5);
	my_screen.AddPixeltoRowsVector(5);
	my_screen.AddPixeltoRowsVector(5);
	return 0;
}
