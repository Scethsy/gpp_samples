#include <iostream>
#include <cmath>
using namespace std;
//
/* This code is to Determine whether the number input by user is a decimal or whole number*/
int main() {
	float x;
	cout << "Enter a number: " << endl;
	cin >>x;

if (fmod(x, 1) == 0) {
        cout << x << " is a whole number" << endl;
    } else {
        cout << x << " is a decimal number" << endl;
    }

    return 0;
}