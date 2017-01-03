#pragma once
#include "SinglePainter.h"
class ColorSinglePainter :
	public SinglePainter
{
public:
	virtual ~ColorSinglePainter();
	virtual void print() override;

	//要加这个确实感觉很麻烦
	friend SinglePainter;
protected:
	ColorSinglePainter();

};

