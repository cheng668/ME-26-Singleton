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
	
	//单例模式中取实例函数
	/*
	Printer& thePrinter()
	{
		static Printer p;
		return p;
	}
	*/

private:
	Printer();
	Printer(const Printer& rhs);
};

