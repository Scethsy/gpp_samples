#include <iostream>
using namespace std;

void InputValidation(int *x) {
    while (!(cin >> *x)) {
      cout << "Error! Invalid Input, Please enter a valid integer number" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    }
}

int findnum (int nums[], int x, int y) {
  int ans = 0;
  for(int i = 0; i < x;i++) {
    if (y == nums[i]) {
      ans += 1;
    }
  }
  return ans;
}

int main() {
  int x[10], z, a = 0;
  cout <<"Enter 10 numbers: ";
  InputValidation(&x[0]);
  for(int i = 1; i < 10; i++) {
    cout<<"\nEnter " << 10-i << " more numbers: ";
    InputValidation(&x[i]);
  }
  cout<< endl << "Enter a number that the program will find in the given 10 numbers: ";
  InputValidation(&z);
  a = findnum(x, 10, z);
  //Times of number 58 present in the array: 2
  cout << "The times of number " << z << " present in the array: " << a << endl;;
  return 0;
}

