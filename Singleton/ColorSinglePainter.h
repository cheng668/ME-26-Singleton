#pragma once
#include "SinglePainter.h"
class ColorSinglePainter :
	public SinglePainter
{
public:
	virtual ~ColorSinglePainter();
	virtual void print() override;

	//Ҫ�����ȷʵ�о����鷳
	friend SinglePainter;
protected:
	ColorSinglePainter();

};

