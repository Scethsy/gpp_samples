#include <iostream>
using namespace std;
//Calculator
int main() {
    float input[2], x = 0;
    const char* number[] = {"first", "second"};
    int controller = 0;
    char op;
    while(controller < 2) {
        cout << "Enter your " << number[controller] << " number:" << endl;
        if (cin >> input[controller]) {
            controller++;
        }
        else {
            cout << "Invalid Input! enter a valid " << number[controller] << " number input." << endl;
            cin.clear();
            cin.ignore (10000,'\n');
        }
    }
    float n1 = input[0], n2 = input[1];
    cout << "Enter the operator(+, -, *, /): " << endl;
    cin >> op;
    while (!(op == '+' || op == '-' || op == '*' || op == '/')) {
        cout << "Invalid Input! Enter a valid operator(+, -, *, /): " << endl;
        cin.clear();
        cin.ignore (10000,'\n');
        cin >> op;
    }
    switch (op) {
        case '+': 
            x = n1+n2;
            cout << "The result of the operation is: " << x << endl;
            break;
        case '-': 
            x = n1-n2;
            cout << "The result of the operation is: " << x << endl;
            break;
        case '*': 
            x = n1*n2;
            cout << "The result of the operation is: " << x << endl;
            break;
        case '/': 
            x = n1/n2;
            cout << "The result of the operation is: " << x << endl;
            break;
    }

    return 0;
}

