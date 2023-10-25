#ifndef __SCREEN_HPP__
#define __SCREEN_HPP__

#include <iostream>
#include "pixel.hpp"
#include <vector>
//tableau de pixels - charactere
// taille et longueur de l'écran

class Screen
{
private: 
	uint32_t _heigth;
	uint32_t _width;
	std::vector<std::vector<uint32_t>> table;
	std::vector<uint32_t> rows_pixels;
public:
	Screen(uint32_t heigth, uint32_t width) : _heigth(heigth), _width(width){
		//table.resize(_heigth, std::vector<uint32_t>(_width));
		//rows_pixels.resize(_width);
	};
	Screen(const Screen& Screen) : _heigth(Screen._heigth), _width(Screen._width){
		//table.resize(_heigth, std::vector<uint32_t>(_width));
		//rows_pixels.resize(_width);
	};

	void AddPixeltoRowsVector(uint32_t pixel);
	void AddPixelRowtoTable();

	//void RemovePixelRow(const uint32_t& pixel);
	void PrintTable();
};

#endif // !__SCREEN_HPP__

