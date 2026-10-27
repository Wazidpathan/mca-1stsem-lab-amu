//WEEK 7 - QUESTION - 2
//Write a C++ Program for the Length of a String Using a Pointer.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int length = 0;

    cout << "Enter a string = ";
    getline(cin, str);

    const char* ptr = str.c_str();

    while(*ptr != '\0'){
        length++;
        ptr++;
    }
    cout << "Length of string = " << length;
    return 0;
}