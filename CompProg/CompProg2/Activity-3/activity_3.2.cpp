// Create a program that will copy a string from one variable to another using the strcpy( )

// Output:
// ********************
// STRING COPY
// ********************
// Enter a first word (str1): abc
// Enter a second word (str2): def
// new string value for str1: def

// ACTIVITY 3.2

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "********************" << endl;
    cout << "STRING COPY" << endl;
    cout << "********************" << endl;

    cout << "Enter a first word (str1): ";
    cin >> str1;

    cout << "Enter a second word (str2): ";
    cin >> str2;

    strcpy(str1, str2);

    cout << "new string value for str1: " << str1 << endl;

    return 0;
}
