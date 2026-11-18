#include<iostream>
using namespace std;
int main()
{
	char str[50], *ptr;
	int count=0;
	cout<<"Enter a string: ";
	cin>>str;
	ptr=str;
	while(*ptr!='\0')
	{
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
		{
			count++;
		}
		ptr++;
	}
	cout<<"No. of Vowels = "<<count;
	return 0;
}
