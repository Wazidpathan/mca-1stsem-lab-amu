#include<iostream>
#include<string>
using namespace std;
string palin(string str)
{
	int start=0;
	int end=str.length()-1;
	while(start<=end)
	{
		if(str[start]!=str[end])
		{
			return "False";
		}
		start++;
		end--;
	}
	return "True";
};
int main()
{
	string s1="ANNA";
	string palindrome = palin(s1);
	cout<<palindrome;
	return 0;
}
