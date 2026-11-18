#include <iostream>
#include <string>
using namespace std;
string find(string str)
{
	string old_str, new_str;
	cout<<"Enter Old String: ";
	cin>>old_str;
	cout<<"Enter New String: ";
	cin>>new_str;
	int pos=str.find(old_str);
	if(pos<str.length())
	{
		str.replace(pos,old_str.length(),new_str);
		cout<<"New Sentence: "<<str;
	}
	else
	{
		cout<<"String not found";
	}
};
int main()
{
	string s1="I am Sam";
	string Find_Str = find(s1);
	cout<<Find_Str;
	return 0;
}
