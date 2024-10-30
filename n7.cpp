#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x, y;
    cout << "Enter a number: " << endl;
    y = 0;
    while (true) {
        if (!(cin >> x)) {
            cout << "Error: enter a number: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
        else if (x >= 0) {
            // If valid, break out of the loop
            break;
        } else {
            cout <<"Please enter a positive number: " << endl;
        }
    }
    while (y < x) {
        if (fmod(y, 2) == 0) {
            cout << y << endl;
        }
        y++;
    }

    return 0;
}


