#include "Printer.h"
#include "ColorSinglePainter.h"
#include <iostream>
void main()
{
	Printer* p1 = Printer::makePrinter();
	p1->reset();

	Printer* p2 = Printer::makePrinter(*p1);
	p2->reset();

	// ���´�����׳�TooManyObject�쳣
	//Printer* p3 = Printer::makePrinter(*p1);
	//p3->reset();

	delete p1;
	delete p2;
	//delete p3;

	// ����ģʽ��������չ��
	SinglePainter* single = SinglePainter::Instance();
	single->print();

	delete single;

	_CrtDumpMemoryLeaks();
	system("pause");
	return;
}

/*
output:
	objectNum:1
	objectNum:2
	ColorSinglePainter
*/