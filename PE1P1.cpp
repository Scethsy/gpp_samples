#include <iostream>
using namespace std;

// Calculation of individual digits of a 5-digit number
int main() {
    float php, euro, usd, yuan, kor, kro, sheq, dnr;
    cout << "Enter Philippine peso: " << endl;

    while (true) {
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
    }

    // Calculate individual currencies
    usd = php/43.33089;
    euro = php/43.33089*0.734719;
    yuan = php/43.33089*6.346934;
    kor = php/43.33089*18.77263;
    kro = php/43.33089*5.449007;
    sheq = php/43.33089*3.726334;
    dnr = php/43.33089*0.274588;

    // Display result
    cout <<"The amount's equivalent to: "<< endl<< endl;
    cout <<"US Dollar is: " << usd << endl<< endl;
    cout <<"Euro: " << euro << endl<< endl;
    cout <<"Yuan: " << yuan << endl<< endl;
    cout <<"Koruna: " << kor << endl<< endl;
    cout <<"Krone: " << kro << endl<< endl;
    cout <<"Sheqel: " << sheq << endl<< endl;
    cout <<"Dinar: " << dnr << endl<< endl;

    return 0;
}


