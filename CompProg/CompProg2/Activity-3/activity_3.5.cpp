// Create a program that will accept an input string. Display the same string in all capital form

// Output:
// Enter some string: all friend story
// All Friend Story

// ACTIVITY 3.5

// Nathan I want to clearify that the output should be in all capitalize form and not UPPERCASE 
// UPPER CASE is all capital letters
// Capitalize form is the first letter of each word is in uppercase and the rest is in lowercase

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
  // Declare a character array to hold the input string
  char str[100];

  // Ask the user for input
  cout << "Enter some string: ";
  
  // Read the entire line of input, including spaces, and store it in 'str'
  cin.getline(str, 100);

  // Boolean flag to track if we are at the beginning of a new word
  bool newWord = true;

  // Loop through each character of the input string
  for (int i = 0; i < strlen(str); i++) {
    
    // Check if the current character is a space
    if (isspace(str[i])) {
      // If it's a space, set newWord to true, indicating the start of a new word
      newWord = true;
    } else if (newWord) {
      // If newWord is true, we are at the beginning of a new word
      // Convert the character to uppercase
      str[i] = toupper(str[i]);
      // After capitalizing, set newWord to false to avoid capitalizing next letters in the word
      newWord = false;
    } else {
      // If not the beginning of a new word, convert the character to lowercase
      str[i] = tolower(str[i]);
    }
  }

  // Output the modified string, where each word starts with a capital letter
  cout << "Capitalized string: " << str << endl;

  return 0;
}
