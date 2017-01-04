#include "ColorSinglePainter.h"
#include <iostream>

ColorSinglePainter::ColorSinglePainter()
{
	//×¢²á
	SinglePainter::Register("ColorSinglePainter", this);
}


ColorSinglePainter::~ColorSinglePainter()
{
}

void ColorSinglePainter::print()
{
	std::cout << "ColorSinglePainter" << std::endl;
}
// ¶öººµ¥Àý
ColorSinglePainter* ColorSinglePainter::p = new ColorSinglePainter;