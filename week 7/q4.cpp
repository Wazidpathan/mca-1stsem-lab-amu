//Problem 4: Create Three Objects Using the this Pointer

#include <iostream>
#include <string>
using namespace std;

class pntr_obj {
    int roll_no;
    string name;

public:
    void set_data(int r, string n){
        this -> roll_no = r;
        this -> name = n;
    }    
    void print (){
        cout << "Roll Number = "<< this -> roll_no <<endl;
        cout << "Name = "<< this -> name <<endl;
        cout << "Object Address = "<< this <<endl;
        cout << endl;
    }
};

int main(){
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(1, "ALI");
    obj2.set_data(2, "WAZID");
    obj3.set_data(3, "ANAS");

    obj1.print();
    obj2.print();
    obj3.print();

return 0;
}