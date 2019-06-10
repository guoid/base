// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBase
{
protected:
	int a;
public:
	CBase()
	{
		a = 0;
	}
	CBase(int c)
	{
		a = c;
	}
	void display()
	{
		cout << "a=" << a << endl;
	}
};
class CDervied : public CBase
{
public:
	CDervied()
	{
		a = 0;
	}
	CDervied(int c)
	{
		a = c;
	}
};

int main()
{
	CDervied obj(100);
	obj.display();
    return 0;
}

