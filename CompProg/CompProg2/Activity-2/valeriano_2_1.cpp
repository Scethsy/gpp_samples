#include <iostream>
using namespace std;

int main() {
  int arr[10];
  cout << "Enter 10 numbers: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  cout << "Even numbers are located at indices: ";
  for (int i = 0; i < 10; i++) {
    if (arr[i] % 2 == 0) {
      cout << i << " ";
    }
  }
  return 0;
}