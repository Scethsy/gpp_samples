#include <iostream>
#include <math.h>
using namespace std;

// Calculation of individual digits of a 5-digit number
int main() {
    int x, y, d1, d2, d3, d4, d5;
    cout << "Enter a 5-digit number: " << endl;

    while (true) {
        // Check if input is a valid integer
        if (!(cin >> x)) {
            cout << "Error: enter a number." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
        
        // Check if the number is a valid 5-digit number
        if (x >= 10000 && x <= 99999) {
            // If valid, break out of the loop
            break;
        } else {
            cout << "Enter a valid 5-digit number." << endl;
        }
    }

    // Calculate individual digits
    d1 = x % 10;
    d2 = (x / 10) % 10;
    d3 = (x / 100) % 10;
    d4 = (x / 1000) % 10;
    d5 = (x / 10000) % 10;
    y = d1 + d2 + d3 + d4 + d5;

    // Display result
    cout << d5 << " + " << d4 << " + " << d3 << " + " << d2 << " + " << d1 << " = " << y << endl;

    return 0;
}


