// Create a program that will concatenate two strings.
//
// Output:
// ***************
// STRING CONCATENATION
// ***************
// Enter a first word (str1): Welcome
// Enter a second word (str2): to FEU Tech
// new string value for str1: Welcome to FEU Tech
// ACTIVITY 3.3

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "***************" << endl;
    cout << "STRING CONCATENATION" << endl;
    cout << "***************" << endl;

    // getline function will get all the characters including spaces and second word
    // if no getline "to FEU tech" will only get the first word "to"
    cout << "Enter a first word (str1): ";
    cin.getline(str1, 100);

    cout << "Enter a second word (str2): ";
    cin.getline(str2, 100);

    strcat(str1, " ");
    strcat(str1, str2);

    cout << "new string value for str1: " << str1 << endl;

    return 0;
}
