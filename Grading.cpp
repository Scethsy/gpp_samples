#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cout << "Enter Grade of Student" << endl;
    cin >>x;

    if ( x > 100) {
        cout << "Please enter a valid Grade" << endl;
    }
    else if (x > 96) {
        cout << "A, Passing Grade" << endl;
    }
    else if (x > 92) {
        cout << "A-, Passing Grade" << endl;
    }
    else if (x > 88) {
        cout << "B+, Passing Grade" << endl;
    }
    else if (x > 84) {
        cout << "B, Passing Grade" << endl;
    }
    else if (x > 79) {
        cout << "B-, Passing Grade" << endl;
    }
    else if (x > 74) {
        cout << "C+, Passing Grade" << endl;
    }
    else if (x > 69) {
        cout << "C, Failing Grade, Please Consult with Class Advisor" << endl;
    }
    else if (x > 64) {
        cout << "C-, Failing Grade, Please Consult with Class Advisor" << endl;
    }
    else {
        cout << "F, Failing Grade, Please Consult with Class Advisor" << endl;
        cout <<"LOLOLOLOL" << endl;
    }

    return 0;
}

