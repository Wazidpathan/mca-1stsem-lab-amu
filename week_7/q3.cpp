// Problem 3: Calculate Sum, Mean, and Standard Deviation Using Pointers

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    double arr[100];
    double sum = 0, mean, variance = 0, sd;

    cout << "Enter number of elements = ";
    cin >> n;

    if( n <=0 || n >100){
        cout << "Invalid number of elements = ";
        return 0;
    }

    cout << "Enter the elements =";
    for (int i =  0; i < n; i++){
        // cout << arr[i] ; 
        cin >> arr[i];
    }

    double *ptr = arr;

    //TO FIND SUM 
    for(int i = 0; i < n; i++){
        sum += *ptr;
        ptr++;
    }

    //TO FIND MEAN
    mean = sum / n;

    ptr = arr;

    for (int i = 0; i <  n; i++){
        variance += (*ptr - mean) * (*ptr - mean);
        ptr++;
    } 
    
      variance = variance / n;
    sd = sqrt(variance);

      cout << "Sum = " << sum << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    return 0;
    
}