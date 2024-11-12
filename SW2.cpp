#include <iostream>
using namespace std;
//max of 4 digits only
//accepts only positive number
//if 0 or negative print "It is a non-positive number"
//if positive print it is a positive number and how many the digits are
int main() {
    float x;

    cout << "Enter a number under 4 digits:" << endl;

    while(true) {
        if(!(cin >> x)) {
            cout << "Please enter a valid number:" << endl;
            cin.clear();
            cin.ignore (10000, '\n');
        }
        else if (x > 9999) {
            cout << "Please enter a 4 digit number only" << endl;
        }
        else {
            break; //Input Valid
        }
    }
    if (x > 0) {
        cout << "Your input number "<< x << " is a positive number and has ";
        if (x > 999) {
            cout << "4 digits." << endl;
        }
        else if (x > 99) {
            cout << "3 digits." << endl;
        }
        else if (x > 9) {
            cout << "2 digits." << endl;
        }
        else {
            cout << "1 digit." << endl;
        }
    }
    else {
        cout << "Your input number " << x << " is a non-positive number.";
    }

    return 0;
}

