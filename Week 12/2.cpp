#include<iostream>
#include<string>
using namespace std;
class Arithmetics
{
	int a, b, c, d;
	public:
	Arithmetics(int a, int b,int c,int d)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	void add()
	{
		cout << a+b+c+d << endl;
	}
	void subtract()
	{
		cout << a-b-c-d << endl;
	}
	void multiply()
	{
		cout << a*b*c*d << endl;
	}
	void divide()
	{
		cout << a/b/c/d << endl;
	}
};
int main()
{
	Arithmetics a(1, 2, 3, 4);
	a.add();
	a.subtract();
	a.multiply();
	a.divide();
	return 0;
}
