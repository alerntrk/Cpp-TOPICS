// Multiple inheritance
#include<iostream>
using namespace std;

class A
{
protected:
	int x;
public:
	A() { x = 10; }
};

class B
{
protected:
	int x;
public:
	B() { x = 20; }
};

class X: public A, public B
{
public:
void fun()
{
	cout << "A's x is " << A::x;
	cout << "\nB's x is " << B::x;
}
};

int main()
{
	X c;
	c.fun();
	return 0;
}
