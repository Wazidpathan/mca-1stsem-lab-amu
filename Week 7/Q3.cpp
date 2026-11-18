#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double a[100],*p,sum=0,mean,var=0,stdDev;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter Elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p=a;
	for(int i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	mean=sum/n;
	for(int i=0;i<n;i++)
	{
		var=var+((*(p+i)-mean) * (*(p+i)-mean));
	}
	stdDev=sqrt(var/n);
	cout<<"Sum: "<<sum<<endl;
	cout<<"Mean: "<<mean<<endl;
	cout<<"Standard Deviation: "<<stdDev<<endl;
	return 0;
}
