#include <iostream>
#include <math.h>
using namespace std;
//lowest term
int main () {
    float input[2];
    int controller = 0;
    const char* prompt[] =  {"Numerator: ", "Denominator: "};

    while(controller < 2) {
        cout << "Enter your " << prompt[controller] << endl;
        if (cin >> input[controller]) {
            controller++;
        }
        else {
            cout << "Error! Please enter a valid " << prompt[controller] << " input." << endl;
            cin.clear();
            cin.ignore(10000,'\n');
        }
    }
    int x = 0, i, i2;
    float nomi = input[0], deno = input[1];
    if (deno == 0) {
        cout << "Error! Denominator cannot be zero." << endl;
        return 1;
    }

    // Find the GCD (Greatest Common Divisor) using Euclidean algorithm
    int gcd_value = 1;  // Default GCD is 1 if no common factors are found
    int a = abs(nomi); // Absolute value to avoid negative numbers during GCD calculation
    int b = abs(deno);

    //GCD Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd_value = a;

    // Simplify the fraction by dividing both the numerator and denominator by the GCD
    nomi /= gcd_value;
    deno /= gcd_value;

    cout << "The lowest term is " << nomi <<"/" << deno << endl;

    return 0;
}