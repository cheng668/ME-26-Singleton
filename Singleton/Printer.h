#pragma once
#include "Counted.h"
class Printer :
	private Counted<Printer>
{
public:
	static Printer* makePrinter(const Printer& rhs);

	static Printer* makePrinter();
	~Printer();
	void reset();
	using Counted<Printer>::objectCount;
	using Counted<Printer>::TooManyObject;
private:
	Printer();
	Printer(const Printer& rhs);
};

