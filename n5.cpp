#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x, y, cube;
    cout << "Enter a number: " << endl;
    while (!(cin >> x)) {
        cout << "Error: enter a number: " << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }
    y = 0;
    while (y < x) {
        if (fmod(y, 2) == 1) {
            cube = pow(y, 3);
            cout << y << endl;
            cout <<"its cube is: " << endl;
            cout << cube << endl << endl;
        }
        y++;
    }

    return 0;
}

