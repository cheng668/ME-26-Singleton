#pragma once
#include <map>
using namespace std;
class SinglePainter
{
public:
	//��ȡ����
	static SinglePainter* Instance();
	virtual ~SinglePainter();
	virtual void print(){}
	//ע��
	static void Register(const char* name, SinglePainter*);
protected:
	SinglePainter();
	//�鿴ע���
	static SinglePainter* Lookup(const char* name);
private:
	static SinglePainter* _instance;
	//ע���
	static map<string, SinglePainter*>* _register;
};

