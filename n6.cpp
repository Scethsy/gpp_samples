#include <iostream>
using namespace std;

int main() {
    float x, y = 1;
    cout << "Enter a number of digits you want: " << endl;
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
        while (y <= x) {
            cout << y << endl;
            y++;
        }

    return 0;
}


