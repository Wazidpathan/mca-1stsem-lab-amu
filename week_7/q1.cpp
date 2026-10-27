//Problem 1: Count Vowels in a String Using a Pointer

#include <iostream>
using namespace std;

int main(){
    char str[100];
    int  count = 0;

    cout << "Enter the string = ";
    cin.getline(str, 100);

    char *ptr = str;

    while (*ptr != '\0'){
          if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
            *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++;
    }

    cout << "Number of Vowel = " << count ;
    return 0;
}