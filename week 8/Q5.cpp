#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="I am Sam";
	string s2="Sam";
	int pos=s1.find(s2);
	if(pos<s1.length())
	{
		cout<<"Position: "<<pos;
	}
	else
	{
		cout<<"Position 1";
	}
	return 0;
}
