#include "ColorSinglePainter.h"
#include <iostream>

ColorSinglePainter::ColorSinglePainter()
{
	//ע��
	SinglePainter::Register("ColorSinglePainter", this);
}


ColorSinglePainter::~ColorSinglePainter()
{
}

void ColorSinglePainter::print()
{
	std::cout << "ColorSinglePainter" << std::endl;
}
// ��������
ColorSinglePainter* ColorSinglePainter::p = new ColorSinglePainter;