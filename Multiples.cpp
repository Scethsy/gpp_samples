#include <iostream>
#include <math.h>
using namespace std;
//Find the multiples of y between 0-x
int main() {
    int x, y;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a number that you want multiples of: ";
    cin >> y;

    cout << "Multiples of 3 from 0 to " << x << " are: " << endl;

    // Loop through numbers and print those that are multiples of 3
    // for (executed one time, condition for the loop to continue, done everytime the code black has been done)
    for (int i = 0; i <= x; i++) {
        if (i % y == 0) {
            cout << i << " \n";
        }
    }

    cout << endl;
    return 0;
}