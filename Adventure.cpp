#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cout << "Sino love mo?" << endl;
    
    getline(cin, x);

    if (x == "Nathan" || x == "nathan" || x == "neyney") {
        cout <<"I love you too <3" << endl;
    }
    else if (x == "I love you") {
        cout <<"Sino si "<<x <<":<" << endl;
    }

    return 0;
}