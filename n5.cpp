#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x, y = 0, cube;
    cout << "Enter a number: " << endl;
    while (!(cin >> x)) {
        cout << "Error: enter a number: " << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }
    if (x >= 0) {
        while (y < x) {
            if (fmod(y, 2) == 1) {
                cube = pow(y, 3);
                cout << y << endl;
                cout <<"its cube is: " << endl;
                cout << cube << endl << endl;
            }
            y++;
        }
    }
    else {
        while (y > x) {
             if (fmod(y, 2) == -1) {
                cout << y << endl;
                cout <<"its cube is an Imaginary Number" << endl << endl;
            }
        y--;
        }
    }

    return 0;
}

