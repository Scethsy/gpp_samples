/**
 * Write a program that counts the number of vowels and whitespaces in a string. The user’s input should be 
all capital letters only. 

Sample Output:
Sample Output: 
Enter a string: WELCOME TO ARRAYS 
Vowels: 
A 2 
E 2 
I 
0 
O 2 
U 0 
Whitespaces – 2
 */

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
    if (str[i] == 'A') {
      vowels[0]++;
    } else if (str[i] == 'E') {
      vowels[1]++;
    } else if (str[i] == 'I') {
      vowels[2]++;
    } else if (str[i] == 'O') {
      vowels[3]++;
    } else if (str[i] == 'U') {
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