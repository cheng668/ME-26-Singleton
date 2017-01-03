#include "Printer.h"
#include <iostream>
void main()
{
	Printer* p1 = Printer::makePrinter();
	p1->reset();

	Printer* p2 = Printer::makePrinter(*p1);
	p2->reset();

	// 以下代码会抛出TooManyObject异常
	//Printer* p3 = Printer::makePrinter(*p1);
	//p3->reset();

	delete p1;
	delete p2;
	//delete p3;

	_CrtDumpMemoryLeaks();
	system("pause");
	return;
}

/*
output:
	objectNum:1
	objectNum:2
*/