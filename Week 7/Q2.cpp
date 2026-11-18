#include<iostream>
using namespace std;
int main()
{
	char str[50], *ptr;
	int len=0;
	cout<<"Enter a string: ";
	cin>>str;
	ptr=str;
	while(*ptr!='\0')
	{
		len++;
		ptr++;
	}
	cout<<"Length of String = "<<len;
	return 0;
}
