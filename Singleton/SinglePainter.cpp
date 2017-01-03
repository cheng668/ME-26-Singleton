#include "SinglePainter.h"
#include "ColorSinglePainter.h"
SinglePainter* SinglePainter::_instance = 0;

SinglePainter::SinglePainter()
{
}


SinglePainter::~SinglePainter()
{
}

SinglePainter* SinglePainter::Instance()
{
	if (_instance == 0)
	{
		const char* style = "ColorSinglePainter";
		if (strcmp(style, "ColorSinglePainter") == 0)
			_instance = new ColorSinglePainter;
	}

	return _instance;
}