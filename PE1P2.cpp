#include <iostream>
#include <math.h>
using namespace std;

// Calculation of individual digits of a 5-digit number
int main() {
    float s1, s2, s3, s, A;
    cout << "Enter first side: " << endl << endl;
    cin >> s1;
    cout << "Enter Second side: " << endl << endl;
    cin >> s2;
    cout << "Etner third side: " << endl << endl;
    cin >> s3;
    /*while (true) {
        // Check if input is a valid integer
        if (!(cin >> s1)) {
            cout << "Error: enter a valid value of Php." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
    }

    cout << "Enter second side: " << endl << endl;
    while (true) {
        // Check if input is a valid integer
        if (!(cin >> s2)) {
            cout << "Error: enter a valid value of Php." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
    }

    cout << "Enter third side: " << endl << endl;
    while (true) {
        // Check if input is a valid integer
        if (!(cin >> s3)) {
            cout << "Error: enter a valid value of Php." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
    }*/
    //Calculations of Heron's Formula
    s = (s1+s2+s3)/2;
    A = sqrt(s*(s-s1)*(s-s2)*(s-s3));

    // Output
    cout <<"The value of s is: "<< s << endl<< endl;
    cout <<"The area of the triangle is : " << A << endl<< endl;

    return 0;
}


