#include<iostream>
#include<string>
using namespace std;
string insertion(string given, string insert, int pos)
{
	string res="";
	for(int i=0;i<=pos;i++)
	{
		res=res+given[i];
	}
	res=res+insert;
	for(int i=pos;i<=given.length();i++)
	{
		res=res+given[i];
	}
	return res;
};
string deletion(string given, int pos, int n)
{
	string res="";
	for(int i=0;i<=pos;i++)
	{
		res=res+given[i];
	}
	for(int i=pos+n;i<=given.length();i++)
	{
		res=res+given[i];
	}
	return res;
};
int main()
{
	string resu= insertion("My name is ", "Sara Pattinson", 10);
	cout<<resu<<endl;
	string resl= deletion("My name is Sara Pattinson", 10, 6);
	cout<<resl;
	return 0;
}
