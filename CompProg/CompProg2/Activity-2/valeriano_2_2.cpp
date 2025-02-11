#include <iostream>
using namespace std;

int main() {

  // Initializations
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  // Validate the input
  while (n > 100) {
    cout << "Error! Please enter a number less than 100: ";
    cin >> n;
  }

  // Get the array elements
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Array element " << i + 1 << ": ";
    cin >> arr[i];
  }

  // Sort the array
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout << "The sorted array is: ";
  
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}