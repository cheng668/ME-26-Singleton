#include "Printer.h"
#include <iostream>

const size_t
Counted<Printer>::maxObjects = 2;

Printer::Printer()
{

}


Printer::~Printer()
{
}

Printer::Printer(const Printer& rhs)
{

}


Printer* Printer::makePrinter(const Printer& rhs)
{
	return new Printer(rhs);
}

Printer* Printer::makePrinter()
{
	return new Printer();
}



void Printer::reset()
{
	std::cout << "objectNum:" << objectCount() << std::endl;
}