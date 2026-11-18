#include<iostream>
#include<string>
using namespace std;
string occur(string str)
{
	string word;
	int count=0;
	cout<<"Enter word to find: ";
	cin>>word;
	for(int i=0;i<str.length();i++)
	{
		int pos=str.find(word,i);
		if(pos==i)
		{
			count++;
		}
	}
	cout<<"Total Occurance: "<<count;
};
int main()
{
	string s1="I am Sam and Sam is my friend";
	string occurance = occur(s1);
	cout<<occurance;
	return 0;
}
