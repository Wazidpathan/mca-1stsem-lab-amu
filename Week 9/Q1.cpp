#include<iostream>
#include<string>
using namespace std;
int fac_recursive(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		return num*fac_recursive(num-1);
	}
}
int fac_non_recursive(int num)
{
	int res = 1;
	for(int i=1; i<=num; i++)
	{
		res= res*i;
	}
	return res;
}
int gcd_non_recursive(int num1, int num2)
{
	int res = 0;
	while(num2!=0)
	{
		int temp = num2;
		num2 = num1%num2;
		num1 = temp;
	}
	return num1;
}
int gcd_recursive(int num1, int num2)
{
	if (num2 == 0)
	{
		return num1;
	};
	return gcd_recursive(num2, num1%num2);
}
int main(){
	int v1 = fac_recursive(3);
	cout << v1 << endl;
	int v2 = fac_non_recursive(4);
	cout << v2 << endl;
	int v3 = gcd_recursive(12, 16);
	cout << v3 << endl;
	int v4 = gcd_non_recursive(10, 14);
	cout << v4 << endl;
	return 0;
} 
