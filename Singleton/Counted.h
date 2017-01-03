#pragma once

template<class BeingCounted>
class Counted{
public:
	class TooManyObject{};  //用于抛出异常
	static int objectCount(){ return numObjects; }
protected:
	Counted();
	Counted(const Counted& rhs);
	~Counted(){ --numObjects; }
private:
	static int numObjects;
	static const size_t maxObjects;
	void init();
};

template<class BeingCounted>
Counted<BeingCounted>::Counted()
{
	init();
}

template<class BeingCounted>
Counted<BeingCounted>::Counted(const Counted& rhs)
{
	init();
}

template<class BeingCounted>
void Counted<BeingCounted>::init()
{
	if (numObjects >= maxObjects)
	{
		throw TooManyObject();
	}
	++numObjects;
}

template<class BedingCounted>
int
Counted<BedingCounted>::numObjects = 0;