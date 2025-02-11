#include <iostream>
#include <string>

using namespace std;

int main() {

  // Initializations
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  // Count the number of vowels and whitespaces
  int vowels[5] = {0, 0, 0, 0, 0};
  int whitespaces = 0;

  // Count the number of vowels and whitespaces
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'A' || str[i] == 'a') {
      vowels[0]++;
    } else if (str[i] == 'E' || str[i] == 'e') {
      vowels[1]++;
    } else if (str[i] == 'I' || str[i] == 'i') {
      vowels[2]++;
    } else if (str[i] == 'O' || str[i] ==  'o') {
      vowels[3]++;
    } else if (str[i] == 'U' || str[i] ==  'u') {
      vowels[4]++;
    } else if (str[i] == ' ') {
      whitespaces++;
    }
  }

  // Display the results
  cout << "Vowels: " << endl;
  cout << "A " << vowels[0] << endl;
  cout << "E " << vowels[1] << endl;
  cout << "I " << vowels[2] << endl;
  cout << "O " << vowels[3] << endl;
  cout << "U " << vowels[4] << endl;
  cout << "Whitespaces - " << whitespaces << endl;

  return 0;
}