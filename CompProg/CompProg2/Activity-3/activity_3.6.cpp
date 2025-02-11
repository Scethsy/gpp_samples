// Create a program that will ask the user to enter some string. The program will split the string in to word and display in reverse vertical order.

// Output:
// Enter a stringL one two three four
// four
// three
// two
// one

// ACTIVITY 3.6

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin.getline(str, 100);

  // Instantiate a pointer to point to each word, and an array of pointers to store each word in the string
  // Declare a pointer to point to each word, and an array of pointers to store each word in the string
  char *token = strtok(str, " ");  // strtok splits the string based on the delimiter (in this case, a space " ")
  char *words[100];   // Array to store the words from the string
  int count = 0;      // A variable to count how many words there are

  // Use a while loop to split the string into individual words
  while (token != NULL) {
    words[count] = token;
    count++;
    token = strtok(NULL, " ");
  }

  // Start from the last word (count - 1) and go backward to the first word
  // Use i++ for the index to go from the last word to the first word and i-- to go from the first word to the last word
  for (int i = count - 1; i >= 0; i--) {
    cout << words[i] << endl;
  }

  return 0;
}