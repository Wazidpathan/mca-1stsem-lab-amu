#include <iostream>
#include <cstring>
using namespace std;
struct DOB
{
	string day;
	string month;
	int year;
};
struct Student
{
	string name;
	DOB date;

};
int main() 
{
    Student s1;
    s1.name = "Sam Pattinson";
    s1.date.day = "Tuesday";
    s1.date.month = "Oct";
    s1.date.year = 2026;
	cout << "Name: " << s1.name << endl;
	cout << "Date: " << s1.date.day << endl;
	cout << "Month: " << s1.date.month << endl;
    cout << "Year: " << s1.date.year;
    return 0;
}
