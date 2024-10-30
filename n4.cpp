#include <iostream>
#include <math.h>
using namespace std;
//Calculation of individual digits of a 5 digit number
int main() {
    int x, y, d1, d2, d3, d4, d5;
    cout <<"Enter a 5-digit number: " << endl;
    while (true) {
        if (!(cin >> x)) {
            cout << "Error: enter a number: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
        else if (x > 9999 && x < 100000) {
            // If valid, break out of the loop
            break;
        } else {
            cout << "Enter a valid 5-digit number." << endl;
        }
        }
        d1 = x % 10;
        d2 = (x/10) % 10;
        d3 = (x/100) % 10;
        d4 = (x/1000) % 10;
        d5 = (x/10000) % 10;
        y = d1 + d2 + d3 + d4 + d5;
        cout << d1 << " + " << d2 << " + " << d3 << " + " << d4 << " + " << d5 << " = " << y;

    return 0;
}

