// PROBLEM 6
// Write a C++ program to implement a flight class with data members as flight
// number, source, destination, and fare. Write a member function to display the flight information
// using this pointer.

#include <iostream>
using namespace std;

class Flight{
    int flightNumber;
    string source;
    string destination;
    double fare;

public:
    void input(int no, string src, string dest, double f){
        flightNumber = no;
        source = src;
        destination = dest;
        fare = f;
    }

    void display(){
        cout << "Flight Number = "<< this -> flightNumber << endl;
        cout << "Source = "<< this -> source << endl;
        cout << "Flight destination = "<< this -> destination << endl;
        cout << "Flight fare = "<< this -> fare << endl;
        
    }
};

int main(){
    Flight f1;
    f1.input(101, "DELHI ", "HYDERABAD", 200);
    f1.display();
}