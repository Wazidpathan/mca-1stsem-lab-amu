#include <iostream>
using namespace std;
void swap_value(int a, int b)
{
	cout << "Call By Value" << endl;
	cout << "Original numbers: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}
void swap_reference(int &a, int &b)
{
	cout << "Call By Reference" << endl;
    cout << "Original numbers: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}
int main()
{
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            swap_value(a, b);
            break;
        case 2:
            swap_reference(a, b);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
