#include <iostream>
using namespace std;
int max(int a[], int maxi, int start, int end)
{
    if(start==end)
    {
        return maxi;
    }
    else
    {
        if(maxi<a[start])
        {
            maxi=a[start];
        }
        start++;
        return max(a, maxi, start, end);
    }
}
int min(int a[], int mini, int start, int end)
{
    if(start==end)
    {
        return mini;
    }
    else
    {
        if(mini>a[start])
        {
            mini=a[start];
        }
        start++;
        return min(a, mini, start, end);
    }
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
    cout << "Maximum elements is: "<<max(a,a[0],0,n)<<endl;
    cout << "Minimum elements is: "<<min(a,a[0],0,n);
    return 0;
}
