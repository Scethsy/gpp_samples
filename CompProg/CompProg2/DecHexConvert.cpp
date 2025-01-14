#include <iostream>
using namespace std;

void InputValidation(int &x) {
  while (true) {
    if (!(cin >> x)) {
      cout << "Error! Invalid Input, Please enter a valid decimal number" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    } else if (x < 0) {
      cout << "Error! Invalid Input, Please enter a positive decimal number" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    } else {
      break;
    }
  }
}

void DeciToHexa(int d) {
    if (d == 0) {
      cout << "The hex number for decimal 0 is 0" << endl;
      return;
    }

    char hexa[100];
    int og = d;
    int a = 0;

    while (d > 0) {
      int remainder = d % 16;
      if (remainder >= 10) {
        hexa[a] = 'A' + (remainder - 10);
      } else {
        hexa[a] = '0' + remainder;
      }
      d /= 16;
      a++;
    }

    cout << "The hex number for decimal " << og << " is ";
    for (int i = a - 1; i >= 0; i--) {
      cout << hexa[i];
    }
    cout << endl;
}

int main() {
  int x;
  cout << "Enter a decimal number: ";
  InputValidation(x);
  DeciToHexa(x);
  return 0;
}


