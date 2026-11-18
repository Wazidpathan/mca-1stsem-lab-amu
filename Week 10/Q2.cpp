#include<iostream>
using namespace std;
struct Employee
{
	string name;
	int pay;
};
int main()
{
	Employee e[3];
	for(int i=0;i<3;i++)
	{
		cout << "Enter Name: ";
		cin >> e[i].name;
		cout << "Enter Pay: ";
		cin >> e[i].pay;
	}
	cout << "Enter the DA in %age: " << endl;
    for(int i=0; i<3; i++)
	{
    	cout << e[i].name << " ";
    	cout << e[i].pay*1.52 << endl;
	}
    return 0;
}
