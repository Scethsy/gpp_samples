#include <iostream>
#include <math.h>
using namespace std;
//Input number is displayed along its squared value until input becomes a negative number
int main() {
    float x, y;
    while (x >= 0 ) {
        cout << "Enter a number:" << endl;
        cin >>x;
        if (x >= 0) {
            y = pow(x, 2);
            cout <<x<<" Square: "<< y<< endl;
        }
        else {
            cout <<x<< " is a Negative Number"<< endl;
        }
    }
    return 0;
}
