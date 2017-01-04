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
	//��������
	if (_instance == 0)
	{
		//�����������ʱȷ��
		const char* style = "ColorSinglePainter";

		//ע�����
		_instance = Lookup(style);

		//��ע�����
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