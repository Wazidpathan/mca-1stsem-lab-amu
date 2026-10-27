//Problem 5: Find the Greatest of Two Numbers Using the this Pointer

#include <iostream>
using namespace std;

class Number{
    int num;

public: 
    void set_data(int n){
        this -> num = n;
    }
    int greatest(int other) {
        if (this -> num >= other){
            return this -> num;
        }
        else {
            return other;
        }
    }
};

int main(){
    Number obj;

    int a, b;

    cout << "Enter a Number = ";
    cin >> a >> b;

    obj.set_data(a);

    cout << "Greatest Number = " << obj.greatest(b);

    return 0;
}