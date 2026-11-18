#include<iostream>
using namespace std;
class Point
{
	int a;
public:
	setdata(int x)
	{
		a=x;
	}
	Point &obj()
	{
		return *this;
	}
	display()
	{
		cout<<"Pointer Reference: "<<this->a<<endl;
	}
};
int main()
{
	Point aa;
	aa.setdata(101);
	Point &ref=aa.obj();
	ref.display();
	return 0;
}
