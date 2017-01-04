#include "SinglePainter.h"
#include "ColorSinglePainter.h"
SinglePainter* SinglePainter::_instance = 0;

map<string, SinglePainter*>* SinglePainter::_register = 0;

SinglePainter::SinglePainter()
{
}


SinglePainter::~SinglePainter()
{
	if (_register)
	{
		delete _register;
	}
}

SinglePainter* SinglePainter::Instance()
{
	//懒汉单例
	if (_instance == 0)
	{
		//这里可以运行时确定
		const char* style = "ColorSinglePainter";

		//注册表方法
		_instance = Lookup(style);

		//非注册表方法
		//if (strcmp(style, "ColorSinglePainter") == 0)
		//	_instance = new ColorSinglePainter;
	}

	return _instance;
}

SinglePainter* SinglePainter::Lookup(const char* name)
{
	return _register->at(name);
}

void SinglePainter::Register(const char* name, SinglePainter* sp)
{
	if (!_register)
		_register = new map < string, SinglePainter* > ;
	_register->insert(make_pair(name,sp));
}