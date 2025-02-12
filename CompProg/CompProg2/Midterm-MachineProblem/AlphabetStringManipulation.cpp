#include <iostream>
#include <string>

using namespace std;

int main() {

  string word;
  cout << "Enter a word: ";
  getline(cin, word);

  cout << "Original string: " << word << endl;

  for (int i = 0; i < word.length(); i++) {
    if (word[i] == 'z') {
      word[i] = 'a';
    } else if (word[i] == 'Z') {
      word[i] = 'A';
    } else if ((word[i] >= 'a' && word[i] < 'z') || (word[i] >= 'A' && word[i] < 'Z')) {
      word[i]++;
    }
  }

  cout << "New String: " << word << endl;

  return 0;
}