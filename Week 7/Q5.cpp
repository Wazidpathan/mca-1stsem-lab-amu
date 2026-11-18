#include<iostream>
using namespace std;
class Greatest
{
	int a,b;
public:
	setdata(int x, int y)
	{
		a=x;
		b=y;
	}
	max()
	{
		if(this->a > this->b)
		{
			cout<<this->a;
		}
		else
		{
			cout<<this->b;
		}
	}
};
int main()
{
	Greatest z;
	int x,y;
	cout<<"Digits are: ";
	cin>>x>>y;
	z.setdata(x, y);
	cout<<"Greatest Number is: ";
	z.max();
	return 0;
}
