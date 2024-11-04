#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x, y;
    cout << "Enter a number: " << endl;
    y = 0;
    while (!(cin >> x)) {
            cout << "Error: enter a number: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }

    if (x > 0) {
        while (y < x) {
            if (fmod(y, 2) == 0) {
                cout << y << endl;
            }
            y++;
        }
    } else if (x < 0) {
        while (y > x) {
            if (fmod(y, 2) == 0) {
                cout << y << endl;
            }
            y--;          
        }
    } else {
        cout << "There are no numbers between 0 and your given input";
    }

    return 0;
}


