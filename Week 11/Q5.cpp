#include <iostream>
using namespace std;
void add(float a, float b)
{
    cout << "Addition = " << a + b << endl;
}
void subtract(float a, float b)
{
    cout << "Subtraction = " << a - b << endl;
}
void multiply(float a, float b)
{
    cout << "Multiplication = " << a * b << endl;
}
void divide(float a, float b)
{
    if (b != 0)
        cout << "Division = " << a / b << endl;
    else
        cout << "Division by zero is not possible." << endl;
}
int main()
{
    float num1, num2;
    int choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "\n----- MENU -----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
