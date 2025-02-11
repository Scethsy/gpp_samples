#include <iostream>
using namespace std;

void InputValidation(int &x) {
  while (true) {
    if (!(cin >> x)) {
      cout << "Error! Invalid Input, Please enter a valid integer number" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    } else if (x > 6 || x < 0) {
      cout << "Error! Invalid Input, Please enter a number from the choices" << endl;
    } else {
      break;
    }
  }
}
void InputValidation2(int &x) {
  while (!(cin >> x)) {
    cout << "Error! Invalid Input, Please enter a valid integer number" << endl;
    cin.clear();
    cin.ignore(1214, '\n');
  }
}

void menu () {
  int length = 40;
  for(int i = 0; i < length; i++) {
    cout <<"=";
  }
  cout<< endl;
  int x = (length - 4) / 2;
  for (int i = 0; i < length; i++) {
      if (i == x) {
          cout << "MENU";
          i += 3;
      } else {
          cout << " ";
      }
  }
  cout<< endl;
  for(int i = 0; i < length; i++) {
    cout <<"=";
  }
  cout<<"\n";
}

void operations() {
  const char* choices[] = {"1.Add", "2.Subtract", "3.Multiply", "4.Divide", "5.Modulus", "6.Power"};
  for(int i = 0; i < 6; i++) {
    cout<<"      "<< choices[i] << endl;
  }
}
int Calculator(int x,int a,int b) {
  int ans = 0;
  switch(x) {
    case 1:
      ans = a + b;
      break;
    case 2:
      ans = a - b;
      break;
    case 3:
      ans = a * b;
      break;
    case 4:
      if (b == 0) {
        cout<<"Error! Division by zero. Please choose a non-zero for the 2nd digit."<<endl;
      } else {
        ans = a/b;
      }
      break;
    case 5:
      if (b == 0) {
        cout<<"Error! Modulus by zero. Please choose a non-zero for the 2nd digit."<<endl;
      } else {
        ans = a%b;
      }
      break;
    case 6:
      if (b == 0) {
        ans = 1;
      } else if (b == 1) {
        ans = a;
      } else {
        ans = 1;
        for (int i = 0; i < b; i++) { // 4 2 1 0 4 1 16 2
          ans *= a;
        }
      }
      break;
    default:
      ans = 999;
      break;
  }
  return ans;
}

int main() {
  int x, a, b, c = 0;
  menu();
  operations();
  cout <<"Enter your choice(1-6):";
  InputValidation(x);
  cout << endl <<"Enter your two integer numbers:";
  InputValidation2(a);
  InputValidation2(b);
  c = Calculator(x, a, b);
  cout<< "Result: "<< c << endl;

  return 0;
}

