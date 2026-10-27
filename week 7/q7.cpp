// Write a C++ program to use this pointer and return the pointer reference.

#include <iostream>
using namespace std;


class Demo{
    int num;

public:
    Demo *getObject(){
        num = 100;
        return this;
    }
    void display(){
        cout << "Number = " << num << endl;
    }
};


int main(){
    Demo obj;

    Demo *ptr = obj.getObject();

    ptr -> display();

    return 0;
}