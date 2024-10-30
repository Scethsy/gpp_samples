#include <iostream>
#include <cmath>  // for pow
using namespace std;

int main() {
    float x, y;

    do {
        cout << "Enter a number: ";
        
        // Input validation loop
        while (!(cin >> x)) {
            cout << "Error: enter a number: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
        
        // Check if x is non-negative
        if (x >= 0) {
            y = pow(x, 2);  // Calculate square of x
            cout << x << " Square: " << y << endl;
        } else {
            cout << x << " is a Negative Number" << endl;
        }
        
    } while (x >= 0);  // Continue until a negative number is entered

    return 0;
}