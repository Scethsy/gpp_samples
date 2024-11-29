#include <iostream>
#include <math.h>
using namespace std;

// Calculation of Heron's Formula Using 3 sides to get Triangle's Area
int main() {
    float sides[3], s, A;
    const char* sequence[] = {"first", "second", "third"};
    int x = 0;
    //Input Validation
    while (x < 3) {
        cout << "Enter " << sequence[x] << " side: " << endl;
        
        if (cin >> sides[x]) {
            x++;
        } else {
            cout << "Error! enter a valid value" << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
    float s1 = sides[0], s2 = sides[1], s3 = sides[2];
    
    //Calculations of Heron's Formula
    s = (s1+s2+s3)/2;
    A = sqrt(s*(s-s1)*(s-s2)*(s-s3));

    // Output
    cout <<"The value of s is: "<< s << endl<< endl;
    cout <<"The area of the triangle is : " << A;

    return 0;
}


