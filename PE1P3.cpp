#include <iostream>
using namespace std;

// Calculation of Slope and Intercept
int main() {
    float coordinates[4], m = 0, c = 0;
    const char* variable[] = {"X1", "Y1", "X2", "Y2"};
    int x = 0;
    while (x < 4) {
        cout << "Enter " << variable[x] << " coordinate:" << endl;
        if (cin >> coordinates[x]) {
            x++;
        } else {
            cout << "Error! enter a valid "<< variable[x] << " coordinate value" << endl;
            cin.clear();
            cin.ignore(123,'\n');
        }
    }
    float x1 = coordinates[0], y1 = coordinates[1], x2 = coordinates[2], y2 = coordinates[3];
    //Calculations
    //Slope
    m = (y2 - y1) / (x2 - x1);
    //Intercept
    c = y2 - m * x2;

    // Display result
    cout <<"Equation of the line with endpoints ("<< x1 << ", "<< y1 << ") and ("<< x2 << ", " << y2 << ") : Y = " << m << "X ";
    if (c < 0) {
        cout <<"- " << -c << endl;
    } else {
        cout << "+ " << c << endl;
    }

    return 0;
}


