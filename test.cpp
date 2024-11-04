#include <iostream>
#include <math.h>
using namespace std;

// Calculation of individual digits of a 5-digit number
int main() {
    float s1, s2, s3, s, A;
 // Input and validation for s1
    while (true) {
        cout << "Enter first side: " << endl;
        if (cin >> s1) {
            break;
        }
        else {
            cout << "Error: enter a valid value: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }

    // Input and validation for s2
    while (true) {
        cout << "Enter second side: " << endl;
        if (cin >> s2) {
            break;
        }
        else {
            cout << "Error: enter a valid value: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }

    // Input and validation for s3
    while (true) {
        cout << "Enter third side: " << endl;
        if (cin >> s3) {
            break;
        }
        else {
            cout << "Error: enter a valid value: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
    //Calculations of Heron's Formula
    s = (s1+s2+s3)/2;
    A = sqrt(s*(s-s1)*(s-s2)*(s-s3));

    // Output
    cout <<"The value of s is: "<< s << endl<< endl;
    cout <<"The area of the triangle is : " << A << endl<< endl;

    return 0;
}


