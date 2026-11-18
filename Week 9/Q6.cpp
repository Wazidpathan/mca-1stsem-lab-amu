#include <iostream>
using namespace std;
int sum(int a[], int n, int i)
{
    if (i == n)
    {
    	return 0;
	}
    return a[i]+sum(a,n,i+1);
    sum(a,n,i+1);
}
int main()
{
    int a[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Sum of elements are: " <<sum(a, n, 0);;
    return 0;
}
