#include<iostream>
using namespace std;
class Flight
{
	int f_no;
	string source, destination;
	double fare;
public:
	setdata(int n, string s, string d, double f)
	{
		f_no=n;
		source=s;
		destination=d;
		fare=f;
	}
	display()
	{
		cout<<endl;
		cout<<"Flight No: "<<this->f_no<<endl;
		cout<<"Source: "<<this->source<<endl;
		cout<<"Destination: "<<this->destination<<endl;
		cout<<"Fare: "<<this->fare<<endl;
	}
};
int main()
{
	Flight x;
	int n;
	string s, d;
	double f;
	cout<<"Enter Flight No: ";
	cin>>n;
	cout<<"Enter Source: ";
	cin>>s;
	cout<<"Enter Destination: ";
	cin>>d;
	cout<<"Enter Fare: ";
	cin>>f;
	x.setdata(n, s, d, f);
	x.display();
	return 0;
}
