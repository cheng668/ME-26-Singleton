#pragma once
#include "SinglePainter.h"
class ColorSinglePainter :
	public SinglePainter
{
public:
	virtual ~ColorSinglePainter();
	virtual void print() override;

	/*如果不用注册表方法保存子类单例，
	要加这个以便在父类Instance函数
	中调用子类构造函数*/
	//friend SinglePainter;
protected:
	ColorSinglePainter();
private:
	static ColorSinglePainter* p;
};

