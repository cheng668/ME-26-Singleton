#pragma once
#include <map>
using namespace std;
class SinglePainter
{
public:
	//获取单例
	static SinglePainter* Instance();
	virtual ~SinglePainter();
	virtual void print(){}
	//注册
	static void Register(const char* name, SinglePainter*);
protected:
	SinglePainter();
	//查看注册表
	static SinglePainter* Lookup(const char* name);
private:
	static SinglePainter* _instance;
	//注册表
	static map<string, SinglePainter*>* _register;
};

