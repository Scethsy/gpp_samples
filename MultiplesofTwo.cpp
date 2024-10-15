#include <iostream>
#include <math.h>
using namespace std;
//Find the multiples of 3 between 0-x
int main() {
    int x;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> x;

    cout << "Multiples of 3 from 0 to " << x << " are: " << endl;

    // Loop through numbers and print those that are multiples of 3
    for (int i = 0; i <= x; i++) {
        if (i % 2 == 0) {
            cout << i << " \n";
        }
    }

    cout << endl;
    return 0;
}