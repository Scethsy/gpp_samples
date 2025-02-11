// Convert a program that will determine if the given word input is a palindrome using CString functions. 

// Output:
// ***************
// PALINDROME
// ***************
// Enter a word: racecar
// racecar is a palindrome

// ACTIVITY 3.4

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[100];
  int i, length;
  bool isPalindrome = true;

  cout << "***************" << endl;
  cout << "PALINDROME" << endl;
  cout << "***************" << endl;

  cout << "Enter a word: ";

  // Use getline so we can get the entire line including spaces and multiple words
  cin.getline(str, 200);

  // Get number of characters in the string
  length = strlen(str);

  // Check if the word is a palindrome
  // Loop until the middle of the string
  for (i = 0; i < length / 2; i++) {  

    // i === index of the character from the start of the string
    // Compare the character at the i-th position with the character at the mirrored position from the end of the string
    // For example, in "racecar", compare 'r' (str[0]) with 'r' (str[6]), 'a' (str[1]) with 'a' (str[5]), and so on.
    if (str[i] != str[length - i - 1]) {
      isPalindrome = false;  // If the characters don't match, it's not a palindrome
      break;  // Exit the loop early since we've already determined it's not a palindrome
    }

  }

  if (isPalindrome) {
    cout << str << " is a palindrome" << endl;
  } else {
    cout << str << " is not a palindrome" << endl;
  }

  return 0;
}