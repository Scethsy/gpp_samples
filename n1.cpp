#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter Temperature in Fahrenheit:" << endl;
    cin >> x;
    //Formula of fahrenheit to celsius
    /*while (true) {
        if (!(cin >> x)) {
            cout << "Error: enter a valid temperature value: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
        else {
            break;
        }
    }*/
    while (!(cin >> x)) {
        cout << "Error: enter a number: " << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }
    y = (x - 32) * 5/9;
    if (y < 0) {
        cout << x << " is " << y << " in Celsius" << endl;
        cout << "Temperature is cold" << endl;
    }
    else if (y > 40) {
        cout << x << " is " << y << " in Celsius" << endl;
        cout << "Temperature is hot" << endl;
    }
    else {
        cout << x << " is " << y << " in Celsius" << endl;
        cout << "Temperature is normal" << endl;
    }

    return 0;
}

