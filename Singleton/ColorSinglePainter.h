#pragma once
#include "SinglePainter.h"
class ColorSinglePainter :
	public SinglePainter
{
public:
	virtual ~ColorSinglePainter();
	virtual void print() override;

	/*�������ע������������൥����
	Ҫ������Ա��ڸ���Instance����
	�е������๹�캯��*/
	//friend SinglePainter;
protected:
	ColorSinglePainter();
private:
	static ColorSinglePainter* p;
};

