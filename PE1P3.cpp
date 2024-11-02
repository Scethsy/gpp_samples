#include <iostream>
using namespace std;

// Calculation of individual digits of a 5-digit number
int main() {
    float x1, x2, y1, y2, m = 0, c = 0;
    cout << "Program to find the equation of a line given two endpoints: " << endl;
    cout << "Enter X1: " << endl;
    cin >> x1;
    cout << "Enter X2: " << endl;
    cin >> x2;
    cout << "Enter y1: " << endl;
    cin >> y1;
    cout << "Enter y2: " << endl;
    cin >> y2;
    while (true) {
        cout << "Enter X1: " << endl;
        if (cin >> x1) {
            break;
        }
        else {
            cout << "Error! Enter a valid X1 coordinate value: " << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
    /*while (true) {
        // Check if input is a valid integer
        if (!(cin >> php)) {
            cout << "Error: enter a valid value of Php." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            continue;
        }
        
        // Check if the number is positive
        else if (php >= 0) {
            // If valid, break out of the loop
            break;
        } else {
            cout <<"Please enter a positive value of Php: " << endl;
        }
    }*/

   //Calculations
   //Slope
   m = (y2 - y1) / (x2 - x1);
   //Intercept
   c = y2 - m * x2;


    // Display result
    cout <<"Equation of the line with endpoints ("<< x1 << ", "<< y1 << ") and ("<< x2 << ", " << y2 << ") : Y = " << m << "X +" << c << endl;

    //Equation of the line with endpoints (2, 3 and (5, 7) : Y = 1.33333X +0.333333

    return 0;
}


