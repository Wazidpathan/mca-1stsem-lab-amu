#include<iostream>
#include<string>
using namespace std;
int addition(int num1, int num2)
{
	return num1+num2;
}
int subtraction(int num1, int num2)
{
	return num1-num2;
}
int multiplication(int num1, int num2)
{
	return num1*num2;
}
int division(int num1, int num2)
{
	return num1/num2;
}
int main()
{
	int n1, n2, op;
	cout<<"First Num: ";
	cin>>n1;
	cout<<"Second Num: ";
	cin>>n2;
	cout<<"What operation to perforn? \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division "<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"Addition: "<<addition(n1,n2)<<endl;
			break;
		case 2:
			cout<<"Subtraction: "<<subtraction(n1,n2)<<endl;
			break;
		case 3:
			cout<<"Multiplication: "<<multiplication(n1,n2)<<endl;
			break;
		default:
			cout<<"Division: "<<division<<endl;
	}
	return 0;
}
