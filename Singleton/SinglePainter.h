#pragma once
#include <map>
using namespace std;
class SinglePainter
{
public:
	static SinglePainter* Instance();
	virtual ~SinglePainter();
	virtual void print(){}
	
protected:
	SinglePainter();
private:
	static SinglePainter* _instance;
};

