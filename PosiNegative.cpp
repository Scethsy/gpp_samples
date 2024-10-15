#include <iostream>
using namespace std;
// This is commet
/* This code is to Determine whether the number input by user is a positive or negative number*/
int main() {
	float x;
	cout <<"Enter a number: "<< endl;
	cin >>x;

    if (x == 0) {
        cout <<x<<" is a zero"<< endl;
    }
    else if (x > 0) {
        cout <<x<<" is a Positive Number"<< endl;
    }
    else {
        cout <<x<<" is a Negative Number"<< endl;
    }
    return 0;
}