#include <iostream>
using namespace std;

void InputValidation (int &x) {
  while (!(cin >> x)) {
    cout << "Error! Invalid Input, Please enter a valid integer number" << endl;
    cin.clear();
    cin.ignore(1214, '\n');
  }
}

void Inputs (int &x, int arr[]) {
  cout<<"Enter " << x << " Numbers: "<<endl;
  InputValidation(arr[0]);
  for (int i = 1; i < x; i++) {
    cout<<"Enter "<< x - i<<" more numbers: "<< endl;
    InputValidation(arr[i]);
  }
}

int main() {

  int size;

  cout <<"Enter the size of the array: "<<endl;
  InputValidation(size);
  int arr[size];
  Inputs(size, arr);

  cout<<"Array of elements and their memory addresses: \n\n";
  for(int i = 0; i < size; i++) {
    cout<<"arr["<<i<<"] = "<<arr[i]<<" (Address: "<<&arr[i]<<") "<<endl;
  }


  return 0;
}


