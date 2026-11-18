//Problem 9: Read Array Elements Using a Pointer and Display Them Using an Array

#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;

    cout << "Enter the number of Elements = ";
    cin >> n;

    int *ptr = arr;
    
    // TAKING ELEMENT WITH POINTERS 
    cout << "Enter the elements = ";
    for(int i = 0; i < n; i++){
        cin >> *(ptr + i);
    }
    
    //OUTPUT USING ARRAY
    cout << "Array Elements are = ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}